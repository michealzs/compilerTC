/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDENTIFIER = 258,              /* IDENTIFIER  */
    INT_LITERAL = 259,             /* INT_LITERAL  */
    REAL_LITERAL = 260,            /* REAL_LITERAL  */
    BOOL_LITERAL = 261,            /* BOOL_LITERAL  */
    NOTOP = 262,                   /* NOTOP  */
    CHAR_LITERAL = 263,            /* CHAR_LITERAL  */
    HEX_LITERAL = 264,             /* HEX_LITERAL  */
    FLOAT_LITERAL = 265,           /* FLOAT_LITERAL  */
    CASE = 266,                    /* CASE  */
    CASES = 267,                   /* CASES  */
    TRUE = 268,                    /* TRUE  */
    FALSE = 269,                   /* FALSE  */
    ELSE = 270,                    /* ELSE  */
    ENDIF = 271,                   /* ENDIF  */
    IF = 272,                      /* IF  */
    ELSIF = 273,                   /* ELSIF  */
    ADDOP = 274,                   /* ADDOP  */
    MULOP = 275,                   /* MULOP  */
    ANDOP = 276,                   /* ANDOP  */
    RELOP = 277,                   /* RELOP  */
    REMOP = 278,                   /* REMOP  */
    EXPOP = 279,                   /* EXPOP  */
    OROP = 280,                    /* OROP  */
    NEGOP = 281,                   /* NEGOP  */
    ARROW = 282,                   /* ARROW  */
    THEN = 283,                    /* THEN  */
    WHEN = 284,                    /* WHEN  */
    BEGIN_ = 285,                  /* BEGIN_  */
    BOOLEAN = 286,                 /* BOOLEAN  */
    CHARACTER = 287,               /* CHARACTER  */
    END = 288,                     /* END  */
    REDUCE = 289,                  /* REDUCE  */
    ENDCASE = 290,                 /* ENDCASE  */
    ENDREDUCE = 291,               /* ENDREDUCE  */
    ENDSWITCH = 292,               /* ENDSWITCH  */
    FUNCTION = 293,                /* FUNCTION  */
    INTEGER = 294,                 /* INTEGER  */
    IS = 295,                      /* IS  */
    LIST = 296,                    /* LIST  */
    OF = 297,                      /* OF  */
    OTHERS = 298,                  /* OTHERS  */
    RETURNS = 299,                 /* RETURNS  */
    SWITCH = 300,                  /* SWITCH  */
    REAL = 301,                    /* REAL  */
    FOLD = 302,                    /* FOLD  */
    ENDFOLD = 303,                 /* ENDFOLD  */
    LEFT = 304,                    /* LEFT  */
    RIGHT = 305                    /* RIGHT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 34 "parser.y"

	CharPtr iden;
	Types type;

	

#line 121 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
