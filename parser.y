/* CMSC 430 Compiler Theory and Design
   Project 2 Skeleton
   UMGC CITE
   Summer 2023 

   Project 2 Parser */

%{
#include <string>
#include <vector>
#include <map>

using namespace std;

#include "types.h"
#include "listing.h"
#include "symbols.h"

int yylex();
void yyerror(const char* message);

Types find(Symbols<Types>& table, CharPtr identifier, string tableName);

Symbols<Types> scalars;
Symbols<Types> lists;
Symbols<Types> symbols;


%}

%define parse.error verbose
%debug
%union {
	CharPtr iden;
	Types type;
	
}

%token <iden> IDENTIFIER 

%token <type> INT_LITERAL REAL_LITERAL BOOL_LITERAL NOTOP CHAR_LITERAL HEX_LITERAL FLOAT_LITERAL CASE CASES TRUE FALSE ELSE ENDIF IF ELSIF

%token ADDOP MULOP ANDOP RELOP REMOP EXPOP OROP NEGOP ARROW THEN WHEN 

%token BEGIN_ BOOLEAN CHARACTER END REDUCE ENDCASE ENDREDUCE ENDSWITCH FUNCTION INTEGER IS LIST OF OTHERS RETURNS SWITCH REAL FOLD ENDFOLD LEFT RIGHT

%type <type> list expressions body type statement_ statement cases case expression term primary if_statement condition relation elsif_clauses parameter 

%%

function:	
	function_header optional_variable body ;

function_header:	
	FUNCTION IDENTIFIER optional_parameters RETURNS type ';'  | FUNCTION IDENTIFIER parameters RETURNS type ';' | 
	error ';' ;

parameters:
    parameter optional_parameters ;

optional_variable:
    optional_variable variable |
    %empty | 
    error ';';

variable:	
	IDENTIFIER ':' type IS statement ';' {checkAssignment($3, $5, "Variable Initialization"); scalars.insert($1, $3);}|
	IDENTIFIER ':' LIST OF type IS list ';' {
	    if ($5 != $7) { 
	        appendError(GENERAL_SEMANTIC, "List Types Does Not Match Element Types");
	    }
	    lists.insert($1, $5);
	};

body:
	BEGIN_ statement_ END ';' {$$ = $2;};

optional_parameters:
   optional_parameters ',' parameter | 
   %empty ;

parameter:
    IDENTIFIER ':' type {symbols.insert($1, $3);};

type:
	INTEGER {$$ = INT_TYPE;}|
	REAL {$$ = REAL_TYPE;}|
	CHARACTER {$$ = CHAR_TYPE;}; 

list:
	'(' expressions ')' {$$ = $2;};

expressions:
    expression { 
        $$ = $1; // $$ is now a Types value
    }
    | expressions ',' expression {
        if (typeToString($1) != typeToString($3)) { 
            appendError(GENERAL_SEMANTIC, "List Element Types Do Not Match");
            $$ = MISMATCH; 
        } else {
            $$ = $3; 
        }
    }; 
	

expression:
	expression ADDOP term {$$ = checkArithmetic($1, $3);} |
	term ;

statement_:
	statement ';' |
	error ';' {$$ = MISMATCH;} ;

statement:
	expression |
	WHEN condition ',' expression ':' expression {$$ = checkWhen($4, $6);}|
	SWITCH expression IS cases OTHERS ARROW statement ';' ENDSWITCH {$$ = checkSwitch($2, $4, $7);} | 
	if_statement ;

if_statement:
    IF condition THEN statement_ elsif_clauses ENDIF { $$ =  checkIFThen($2, $4, $5);} |
    IF condition THEN statement_ elsif_clauses ELSE statement_ ENDIF { $$ = checkIFThenElsifElse($2, $4, $5, $7);};

elsif_clauses:
    %empty { $$ = NONE; }|  
    ELSIF condition THEN statement_ elsif_clauses ;

cases:
	cases case {$$ = checkCases($1, $2);}|
	%empty {$$ = NONE;}|
	error ';' {$$ = MISMATCH;};

case:
	CASE INT_LITERAL ARROW statement ';' {$$ = $4;}|
	error ';' {$$ = MISMATCH;}; 


condition:
	condition ANDOP relation |
	condition logical_operator condition |
	relation |
	NOTOP condition { $$ = $2; };

logical_operator:
    ANDOP | OROP;

relation:
	'(' condition')' {$$ = $2;}|
	expression RELOP expression {$$ = checkRelation($1, $3);};
	
term:
	term arithmetic_operator primary {$$ = checkArithmetic($1, $3);} |
	term REMOP primary { $$ = checkModulusTypes($1, $3);} |
	primary ;

primary:
	'(' expression ')' {$$ = $2;} |
	expression arithmetic_operator expression |
    NEGOP expression { $$ = checkNegation($2); }|
	INT_LITERAL | 
	CHAR_LITERAL |
	REAL_LITERAL |
	IDENTIFIER '(' expression ')' { 
		if ($3 != INT_TYPE){
		appendError(GENERAL_SEMANTIC, "List Subscript Must Be Integer");
	} else { 
		$$ = find(lists, $1, "List");
		}
	} |
	IDENTIFIER  {$$ = find(scalars, $1, "Scalar");} ;

arithmetic_operator:
   MULOP | EXPOP ;

%%
Types find(Symbols<Types>& table, CharPtr identifier, string tableName) {
	Types type;
	if (!table.find(identifier, type)) {
		appendError(UNDECLARED, tableName + " " + identifier);
		return MISMATCH;
	}
	return type;
}

void yyerror(const char* message) {
	appendError(SYNTAX, message);
}

int main(int argc, char *argv[]) {
	firstLine();
	yyparse();
	lastLine();
	return 0;
} 
