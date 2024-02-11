
%{
#include <cstdio>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

#include "types.h"
#include "listing.h"
#include "tokens.h"

int hexToInt(const char* hexStr);

%}

%option noyywrap

ws    [ \t\r]+
comment     "//".*\n
comment2    "--".*\n 
line     [\n]
id    [A-Za-z]([A-Za-z0-9]|(_[A-Za-z0-9])|(__[A-Za-z0-9]))*([A-Za-z0-9]+)?
float   [-+.]?([0-9]+\.[0-9]*|\.[0-9]+)([eE][-+]?[0-9]+)?
digit    [0-9]
dec      {digit}+
char     '\\[btnrf]'|'.'
punc     [\(\),:;]
real     [0-9]*\.[0-9]+([Ee][+-]?[0-9]+)?
hex    #[0-9A-Fa-f]+
%%

{ws}     { ECHO; }
{comment}   { ECHO; nextLine(); }
{line}      { ECHO; nextLine(); }
{comment2}  { ECHO; nextLine(); } 
"+"      { ECHO; return(ADDOP); }
"-"        { ECHO; return(ADDOP); }
"/"        { ECHO; return(MULOP); }
"%"        { ECHO; return(REMOP); }
"^"        { ECHO; return(EXPOP); }
"~"        { ECHO; return(NEGOP); }
"*"      { ECHO; return(MULOP); }
"&"      { ECHO; return(ANDOP); }
"<"      { ECHO; return(RELOP); }
"=>"     { ECHO; return(ARROW); }
"|"        { ECHO; return(OROP); }
"!"        { ECHO; return(NOTOP); }
"="        { ECHO; return(RELOP); }
"<>"       { ECHO; return(RELOP); }
">"        { ECHO; return(RELOP); }
">="       { ECHO; return(RELOP); }
"<="       { ECHO; return(RELOP); }
else       { ECHO; return(ELSE); }
elsif      { ECHO; return(ELSIF); }
endfold    { ECHO; return(ENDFOLD); }
endif      { ECHO; return(ENDIF); }
fold       { ECHO; return(FOLD); }
if         { ECHO; return(IF); }
left       { ECHO; return(LEFT); }
real       { ECHO; return(REAL); }
right      { ECHO; return(RIGHT); }
then       { ECHO; return(THEN); }
begin    { ECHO; return(BEGIN_); }
case     { ECHO; return(CASE); }
character   { ECHO; return(CHARACTER); }
end      { ECHO; return(END); }
endswitch   { ECHO; return(ENDSWITCH); }
function { ECHO; return(FUNCTION); }
integer     { ECHO; return(INTEGER); }
is    { ECHO; return(IS); }
list     { ECHO; return(LIST); }
of    { ECHO; return(OF); }
others      { ECHO; return(OTHERS); }
returns     { ECHO; return(RETURNS); }
switch      { ECHO; return(SWITCH); }
when     { ECHO; return(WHEN); }
{real}      {ECHO; yylval.type = REAL_TYPE;  return(REAL_LITERAL); } 
{id}     { ECHO; yylval.iden = (CharPtr)malloc(yyleng + 1); 
         strcpy(yylval.iden, yytext); return(IDENTIFIER);}
{dec}    { ECHO; yylval.type = INT_TYPE; return(INT_LITERAL);  }
{punc}      { ECHO; return(yytext[0]); }
{hex}       { ECHO; yylval.type = INT_TYPE; return INT_LITERAL; }
{char}  { ECHO; yylval.type = CHAR_TYPE; return(CHAR_LITERAL); }
{float}     { ECHO; yylval.type = FLOAT_TYPE; return FLOAT_LITERAL;}
.     { ECHO; appendError(LEXICAL, yytext); }


%%

int hexToInt(const char* hexStr) {
   int hexint = strtol(hexStr + 1, NULL, 16); 
   std::cout << hexint <<std::endl;
    return hexint;
}

