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
# define YYDEBUG 0
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
    ADDOP = 273,                   /* ADDOP  */
    MULOP = 274,                   /* MULOP  */
    ANDOP = 275,                   /* ANDOP  */
    RELOP = 276,                   /* RELOP  */
    REMOP = 277,                   /* REMOP  */
    EXPOP = 278,                   /* EXPOP  */
    OROP = 279,                    /* OROP  */
    NEGOP = 280,                   /* NEGOP  */
    ARROW = 281,                   /* ARROW  */
    THEN = 282,                    /* THEN  */
    WHEN = 283,                    /* WHEN  */
    BEGIN_ = 284,                  /* BEGIN_  */
    BOOLEAN = 285,                 /* BOOLEAN  */
    CHARACTER = 286,               /* CHARACTER  */
    END = 287,                     /* END  */
    REDUCE = 288,                  /* REDUCE  */
    ENDCASE = 289,                 /* ENDCASE  */
    ENDREDUCE = 290,               /* ENDREDUCE  */
    ENDSWITCH = 291,               /* ENDSWITCH  */
    FUNCTION = 292,                /* FUNCTION  */
    INTEGER = 293,                 /* INTEGER  */
    IS = 294,                      /* IS  */
    LIST = 295,                    /* LIST  */
    OF = 296,                      /* OF  */
    OTHERS = 297,                  /* OTHERS  */
    RETURNS = 298,                 /* RETURNS  */
    SWITCH = 299,                  /* SWITCH  */
    REAL = 300,                    /* REAL  */
    ELSIF = 301,                   /* ELSIF  */
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
#line 33 "parser.y"

	CharPtr iden;
	Types type;

#line 119 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
