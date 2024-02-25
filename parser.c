/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 8 "parser.y"

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
Types functionReturnType;

Symbols<Types> scalars;
Symbols<Types> lists;
Symbols<Types> symbols;



#line 95 "parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_INT_LITERAL = 4,                /* INT_LITERAL  */
  YYSYMBOL_REAL_LITERAL = 5,               /* REAL_LITERAL  */
  YYSYMBOL_BOOL_LITERAL = 6,               /* BOOL_LITERAL  */
  YYSYMBOL_NOTOP = 7,                      /* NOTOP  */
  YYSYMBOL_CHAR_LITERAL = 8,               /* CHAR_LITERAL  */
  YYSYMBOL_HEX_LITERAL = 9,                /* HEX_LITERAL  */
  YYSYMBOL_FLOAT_LITERAL = 10,             /* FLOAT_LITERAL  */
  YYSYMBOL_CASE = 11,                      /* CASE  */
  YYSYMBOL_CASES = 12,                     /* CASES  */
  YYSYMBOL_TRUE = 13,                      /* TRUE  */
  YYSYMBOL_FALSE = 14,                     /* FALSE  */
  YYSYMBOL_ELSE = 15,                      /* ELSE  */
  YYSYMBOL_ENDIF = 16,                     /* ENDIF  */
  YYSYMBOL_IF = 17,                        /* IF  */
  YYSYMBOL_ELSIF = 18,                     /* ELSIF  */
  YYSYMBOL_ADDOP = 19,                     /* ADDOP  */
  YYSYMBOL_MULOP = 20,                     /* MULOP  */
  YYSYMBOL_ANDOP = 21,                     /* ANDOP  */
  YYSYMBOL_RELOP = 22,                     /* RELOP  */
  YYSYMBOL_REMOP = 23,                     /* REMOP  */
  YYSYMBOL_EXPOP = 24,                     /* EXPOP  */
  YYSYMBOL_OROP = 25,                      /* OROP  */
  YYSYMBOL_NEGOP = 26,                     /* NEGOP  */
  YYSYMBOL_ARROW = 27,                     /* ARROW  */
  YYSYMBOL_THEN = 28,                      /* THEN  */
  YYSYMBOL_WHEN = 29,                      /* WHEN  */
  YYSYMBOL_BEGIN_ = 30,                    /* BEGIN_  */
  YYSYMBOL_BOOLEAN = 31,                   /* BOOLEAN  */
  YYSYMBOL_CHARACTER = 32,                 /* CHARACTER  */
  YYSYMBOL_END = 33,                       /* END  */
  YYSYMBOL_REDUCE = 34,                    /* REDUCE  */
  YYSYMBOL_ENDCASE = 35,                   /* ENDCASE  */
  YYSYMBOL_ENDREDUCE = 36,                 /* ENDREDUCE  */
  YYSYMBOL_ENDSWITCH = 37,                 /* ENDSWITCH  */
  YYSYMBOL_FUNCTION = 38,                  /* FUNCTION  */
  YYSYMBOL_INTEGER = 39,                   /* INTEGER  */
  YYSYMBOL_IS = 40,                        /* IS  */
  YYSYMBOL_LIST = 41,                      /* LIST  */
  YYSYMBOL_OF = 42,                        /* OF  */
  YYSYMBOL_OTHERS = 43,                    /* OTHERS  */
  YYSYMBOL_RETURNS = 44,                   /* RETURNS  */
  YYSYMBOL_SWITCH = 45,                    /* SWITCH  */
  YYSYMBOL_REAL = 46,                      /* REAL  */
  YYSYMBOL_FOLD = 47,                      /* FOLD  */
  YYSYMBOL_ENDFOLD = 48,                   /* ENDFOLD  */
  YYSYMBOL_LEFT = 49,                      /* LEFT  */
  YYSYMBOL_RIGHT = 50,                     /* RIGHT  */
  YYSYMBOL_51_ = 51,                       /* ';'  */
  YYSYMBOL_52_ = 52,                       /* ':'  */
  YYSYMBOL_53_ = 53,                       /* ','  */
  YYSYMBOL_54_ = 54,                       /* '('  */
  YYSYMBOL_55_ = 55,                       /* ')'  */
  YYSYMBOL_YYACCEPT = 56,                  /* $accept  */
  YYSYMBOL_function = 57,                  /* function  */
  YYSYMBOL_function_header = 58,           /* function_header  */
  YYSYMBOL_parameters = 59,                /* parameters  */
  YYSYMBOL_optional_variable = 60,         /* optional_variable  */
  YYSYMBOL_variable = 61,                  /* variable  */
  YYSYMBOL_body = 62,                      /* body  */
  YYSYMBOL_optional_parameters = 63,       /* optional_parameters  */
  YYSYMBOL_parameter = 64,                 /* parameter  */
  YYSYMBOL_type = 65,                      /* type  */
  YYSYMBOL_list = 66,                      /* list  */
  YYSYMBOL_expressions = 67,               /* expressions  */
  YYSYMBOL_expression = 68,                /* expression  */
  YYSYMBOL_statement_ = 69,                /* statement_  */
  YYSYMBOL_statement = 70,                 /* statement  */
  YYSYMBOL_fold_statement = 71,            /* fold_statement  */
  YYSYMBOL_direction = 72,                 /* direction  */
  YYSYMBOL_operator = 73,                  /* operator  */
  YYSYMBOL_list_choice = 74,               /* list_choice  */
  YYSYMBOL_if_statement = 75,              /* if_statement  */
  YYSYMBOL_elsif_clauses = 76,             /* elsif_clauses  */
  YYSYMBOL_cases = 77,                     /* cases  */
  YYSYMBOL_case = 78,                      /* case  */
  YYSYMBOL_condition = 79,                 /* condition  */
  YYSYMBOL_logical_operator = 80,          /* logical_operator  */
  YYSYMBOL_relation = 81,                  /* relation  */
  YYSYMBOL_term = 82,                      /* term  */
  YYSYMBOL_primary = 83,                   /* primary  */
  YYSYMBOL_arithmetic_operator = 84        /* arithmetic_operator  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   198

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  67
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  152

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   305


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      54,    55,     2,     2,    53,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    52,    51,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    54,    54,    59,    62,    65,    68,    71,    72,    73,
      76,    85,   100,   103,   104,   107,   110,   111,   112,   115,
     118,   121,   132,   133,   136,   137,   140,   141,   142,   143,
     144,   147,   157,   157,   160,   160,   163,   163,   166,   167,
     170,   171,   174,   175,   176,   179,   180,   184,   185,   186,
     187,   190,   190,   193,   194,   197,   198,   199,   202,   203,
     204,   205,   206,   207,   208,   215,   221,   221
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER",
  "INT_LITERAL", "REAL_LITERAL", "BOOL_LITERAL", "NOTOP", "CHAR_LITERAL",
  "HEX_LITERAL", "FLOAT_LITERAL", "CASE", "CASES", "TRUE", "FALSE", "ELSE",
  "ENDIF", "IF", "ELSIF", "ADDOP", "MULOP", "ANDOP", "RELOP", "REMOP",
  "EXPOP", "OROP", "NEGOP", "ARROW", "THEN", "WHEN", "BEGIN_", "BOOLEAN",
  "CHARACTER", "END", "REDUCE", "ENDCASE", "ENDREDUCE", "ENDSWITCH",
  "FUNCTION", "INTEGER", "IS", "LIST", "OF", "OTHERS", "RETURNS", "SWITCH",
  "REAL", "FOLD", "ENDFOLD", "LEFT", "RIGHT", "';'", "':'", "','", "'('",
  "')'", "$accept", "function", "function_header", "parameters",
  "optional_variable", "variable", "body", "optional_parameters",
  "parameter", "type", "list", "expressions", "expression", "statement_",
  "statement", "fold_statement", "direction", "operator", "list_choice",
  "if_statement", "elsif_clauses", "cases", "case", "condition",
  "logical_operator", "relation", "term", "primary", "arithmetic_operator", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-77)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-44)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      13,   -38,    15,    27,    29,   -77,    74,   -77,    -1,    44,
      36,    50,    32,   -77,   -77,    53,    67,   -77,   -77,   107,
     107,   107,    74,    46,   104,    66,    70,   -77,   -77,   -77,
      12,    41,    12,    41,   102,    41,   143,   109,    86,   -77,
     -77,   145,   -77,   -77,   -77,   -77,   -77,    98,   115,   -77,
     122,   117,   -77,    41,    12,    12,   136,   113,   -77,   143,
      82,   108,   -77,   -77,   151,    99,    41,   -77,   -77,    41,
     123,   -77,    41,    41,   -77,   -77,   107,    75,   106,    90,
      78,    61,    41,   105,   -77,    67,    12,    41,    30,   -77,
     -77,     7,   -77,   143,   145,   143,   -77,   -77,   -77,   135,
     125,   -77,   -77,   143,   -77,    19,    90,     2,   126,    47,
     -77,    41,   -77,   130,   127,   -77,    67,    12,   164,    41,
     -77,   129,   178,   156,   -77,   -20,   143,   -77,   133,   169,
     119,    67,   143,   -77,   159,    75,    41,   -77,   -77,   -77,
      67,   171,    75,   137,   143,   172,   -77,   138,   154,   -77,
     -77,   -77
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     5,    14,     1,     0,     0,
       0,     0,     0,    14,     9,     0,     0,     7,     2,     0,
       0,     0,     0,     6,     0,     0,    65,    61,    63,    62,
       0,     0,     0,     0,     0,     0,    26,     0,     0,    30,
      29,    23,    57,    18,    16,    17,    15,     0,     0,    13,
       0,     0,    25,     0,     0,     0,     0,     0,    49,    60,
       0,     0,    32,    33,     0,     0,     0,    66,    67,     0,
       0,    24,     0,     0,     4,     3,     0,     0,     0,    50,
       0,     0,     0,    51,    52,     0,     0,     0,     0,    34,
      35,     0,    58,     0,    22,    59,    12,    56,    55,     0,
       0,    64,    53,    54,    47,     0,    48,     0,     0,     0,
      37,     0,    36,     0,     0,    10,     0,     0,     0,     0,
      44,     0,     0,     0,    42,     0,    20,    31,     0,     0,
       0,     0,    27,    46,     0,     0,     0,    19,    11,    38,
       0,     0,     0,     0,    21,    40,    39,     0,     0,    41,
      45,    28
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   179,   173,   -13,
      79,   -77,   -30,   -76,   -73,   -77,   -77,   -77,   -77,   -77,
      49,   -77,   -77,   -26,   -77,   114,   132,   100,   -29
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,     4,    11,     9,    17,    18,    12,    13,    46,
     112,   125,    36,    37,    38,    39,    64,    91,   113,    40,
     118,   109,   124,    57,    86,    58,    41,    42,    69
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      56,    59,    56,    61,   100,    65,    60,    47,    48,   105,
     110,    51,    73,     5,     1,    26,    27,    28,     6,    54,
      29,    66,    67,    78,    56,    80,    68,     7,    79,    81,
       8,   108,    -8,   136,   116,   137,    93,   117,    31,    95,
     129,   -43,    93,    93,    26,    27,    28,    15,   121,    29,
      14,     2,   103,    56,   119,   141,    56,   107,   122,    -8,
     106,   111,   143,    99,   145,    73,    55,    31,    25,   147,
      26,    27,    28,   -43,    16,    29,    21,    10,    26,    27,
      28,   126,    83,    29,    30,    22,    84,    56,    19,   132,
     123,   130,    30,    31,    20,    35,    32,    66,    67,    22,
      82,    31,    68,    83,    32,    24,   144,    84,    26,    27,
      28,    83,    33,    29,    34,    84,   102,    52,    66,    67,
      33,    35,    34,    68,    53,    66,    67,    66,    67,    35,
      68,    31,    68,    92,    83,    87,    43,    71,    84,    43,
      83,    85,    70,    44,    84,    50,    44,   140,    88,    74,
      45,    62,    63,    45,    92,    66,    67,    77,    82,    55,
      68,   101,    66,    67,    76,    67,    75,    68,    72,    68,
      89,    90,    97,    98,    96,   114,   115,   120,   127,   131,
     133,   111,   134,   135,   138,   139,   142,   146,   148,   150,
     117,   151,    23,   128,   149,    49,     0,   104,    94
};

static const yytype_int16 yycheck[] =
{
      30,    31,    32,    33,    77,    35,    32,    20,    21,    85,
       3,    24,    41,    51,     1,     3,     4,     5,     3,     7,
       8,    19,    20,    53,    54,    55,    24,     0,    54,    55,
       1,     1,     3,    53,    15,    55,    66,    18,    26,    69,
     116,    11,    72,    73,     3,     4,     5,     3,     1,     8,
      51,    38,    82,    83,    52,   131,    86,    87,    11,    30,
      86,    54,   135,    76,   140,    94,    54,    26,     1,   142,
       3,     4,     5,    43,    30,     8,    44,     3,     3,     4,
       5,   111,    21,     8,    17,    53,    25,   117,    52,   119,
      43,   117,    17,    26,    44,    54,    29,    19,    20,    53,
      22,    26,    24,    21,    29,    52,   136,    25,     3,     4,
       5,    21,    45,     8,    47,    25,    55,    51,    19,    20,
      45,    54,    47,    24,    54,    19,    20,    19,    20,    54,
      24,    26,    24,    55,    21,    53,    32,    51,    25,    32,
      21,    28,    33,    39,    25,    41,    39,    28,    40,    51,
      46,    49,    50,    46,    55,    19,    20,    40,    22,    54,
      24,    55,    19,    20,    42,    20,    51,    24,    23,    24,
      19,    20,    72,    73,    51,    40,    51,    51,    48,    15,
      51,    54,     4,    27,    51,    16,    27,    16,    51,    51,
      18,    37,    13,   114,   145,    22,    -1,    83,    66
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    38,    57,    58,    51,     3,     0,     1,    60,
       3,    59,    63,    64,    51,     3,    30,    61,    62,    52,
      44,    44,    53,    63,    52,     1,     3,     4,     5,     8,
      17,    26,    29,    45,    47,    54,    68,    69,    70,    71,
      75,    82,    83,    32,    39,    46,    65,    65,    65,    64,
      41,    65,    51,    54,     7,    54,    68,    79,    81,    68,
      79,    68,    49,    50,    72,    68,    19,    20,    24,    84,
      33,    51,    23,    84,    51,    51,    42,    40,    68,    79,
      68,    79,    22,    21,    25,    28,    80,    53,    40,    19,
      20,    73,    55,    68,    82,    68,    51,    83,    83,    65,
      70,    55,    55,    68,    81,    69,    79,    68,     1,    77,
       3,    54,    66,    74,    40,    51,    15,    18,    76,    52,
      51,     1,    11,    43,    78,    67,    68,    48,    66,    69,
      79,    15,    68,    51,     4,    27,    53,    55,    51,    16,
      28,    69,    27,    70,    68,    69,    16,    70,    51,    76,
      51,    37
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    56,    57,    58,    58,    58,    59,    60,    60,    60,
      61,    61,    62,    63,    63,    64,    65,    65,    65,    66,
      67,    67,    68,    68,    69,    69,    70,    70,    70,    70,
      70,    71,    72,    72,    73,    73,    74,    74,    75,    75,
      76,    76,    77,    77,    77,    78,    78,    79,    79,    79,
      79,    80,    80,    81,    81,    82,    82,    82,    83,    83,
      83,    83,    83,    83,    83,    83,    84,    84
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     6,     6,     2,     2,     2,     0,     2,
       6,     8,     4,     3,     0,     3,     1,     1,     1,     3,
       1,     3,     3,     1,     2,     2,     1,     6,     9,     1,
       1,     5,     1,     1,     1,     1,     1,     1,     7,     8,
       0,     5,     2,     0,     2,     5,     2,     3,     3,     1,
       2,     1,     1,     3,     3,     3,     3,     1,     3,     3,
       2,     1,     1,     1,     4,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* function: function_header optional_variable body  */
#line 54 "parser.y"
                                               {
		checkFunctionAssignment(functionReturnType, (yyvsp[0].type), "function return");
	}
#line 1546 "parser.tab.c"
    break;

  case 3: /* function_header: FUNCTION IDENTIFIER optional_parameters RETURNS type ';'  */
#line 59 "parser.y"
                                                                  {
		functionReturnType = (yyvsp[-1].type);
	}
#line 1554 "parser.tab.c"
    break;

  case 4: /* function_header: FUNCTION IDENTIFIER parameters RETURNS type ';'  */
#line 62 "parser.y"
                                                        {
		functionReturnType = (yyvsp[-1].type);
	}
#line 1562 "parser.tab.c"
    break;

  case 5: /* function_header: error ';'  */
#line 65 "parser.y"
                  {(yyval.type) = MISMATCH;}
#line 1568 "parser.tab.c"
    break;

  case 8: /* optional_variable: %empty  */
#line 72 "parser.y"
           { (yyval.type) = NONE; }
#line 1574 "parser.tab.c"
    break;

  case 9: /* optional_variable: error ';'  */
#line 73 "parser.y"
             {(yyval.type) = MISMATCH;}
#line 1580 "parser.tab.c"
    break;

  case 10: /* variable: IDENTIFIER ':' type IS statement ';'  */
#line 76 "parser.y"
                                             {
		Types typeCheck;
		if (scalars.find((yyvsp[-5].iden), typeCheck) || lists.find((yyvsp[-5].iden), typeCheck)) {
			appendError(GENERAL_SEMANTIC, "Semantic Error, Duplicate Scalar " + string((yyvsp[-5].iden)));
		} else {
			checkAssignment((yyvsp[-3].type), (yyvsp[-1].type), "Variable Initialization"); 
			scalars.insert((yyvsp[-5].iden), (yyvsp[-3].type));
		}
	}
#line 1594 "parser.tab.c"
    break;

  case 11: /* variable: IDENTIFIER ':' LIST OF type IS list ';'  */
#line 85 "parser.y"
                                                {
		Types typeCheck;
		if (scalars.find((yyvsp[-7].iden), typeCheck) || lists.find((yyvsp[-7].iden), typeCheck)) {
			appendError(GENERAL_SEMANTIC, "Semantic Error, Duplicate List " + string((yyvsp[-7].iden)));
		} else {
		    if ((yyvsp[-3].type) != (yyvsp[-1].type)) { 
		    	if (!errorExists("Semantic Error, List Element Types Do Not Match")) {
				    appendError(GENERAL_SEMANTIC, "List Type Does Not Match Element Types");
				}
		    }
		    lists.insert((yyvsp[-7].iden), (yyvsp[-3].type));
		}
	}
#line 1612 "parser.tab.c"
    break;

  case 12: /* body: BEGIN_ statement_ END ';'  */
#line 100 "parser.y"
                                  {(yyval.type) = (yyvsp[-2].type);}
#line 1618 "parser.tab.c"
    break;

  case 15: /* parameter: IDENTIFIER ':' type  */
#line 107 "parser.y"
                        {symbols.insert((yyvsp[-2].iden), (yyvsp[0].type));}
#line 1624 "parser.tab.c"
    break;

  case 16: /* type: INTEGER  */
#line 110 "parser.y"
                {(yyval.type) = INT_TYPE;}
#line 1630 "parser.tab.c"
    break;

  case 17: /* type: REAL  */
#line 111 "parser.y"
             {(yyval.type) = REAL_TYPE;}
#line 1636 "parser.tab.c"
    break;

  case 18: /* type: CHARACTER  */
#line 112 "parser.y"
                  {(yyval.type) = CHAR_TYPE;}
#line 1642 "parser.tab.c"
    break;

  case 19: /* list: '(' expressions ')'  */
#line 115 "parser.y"
                            {(yyval.type) = (yyvsp[-1].type);}
#line 1648 "parser.tab.c"
    break;

  case 20: /* expressions: expression  */
#line 118 "parser.y"
               { 
        (yyval.type) = (yyvsp[0].type); // $$ is now a Types value
    }
#line 1656 "parser.tab.c"
    break;

  case 21: /* expressions: expressions ',' expression  */
#line 121 "parser.y"
                                 {
        if (typeToString((yyvsp[-2].type)) != typeToString((yyvsp[0].type))) { 
            appendError(GENERAL_SEMANTIC, "List Element Types Do Not Match");
            (yyval.type) = MISMATCH; 
        } else {
            (yyval.type) = (yyvsp[0].type); 
        }
    }
#line 1669 "parser.tab.c"
    break;

  case 22: /* expression: expression ADDOP term  */
#line 132 "parser.y"
                              {(yyval.type) = checkArithmetic((yyvsp[-2].type), (yyvsp[0].type));}
#line 1675 "parser.tab.c"
    break;

  case 25: /* statement_: error ';'  */
#line 137 "parser.y"
                  {(yyval.type) = MISMATCH;}
#line 1681 "parser.tab.c"
    break;

  case 27: /* statement: WHEN condition ',' expression ':' expression  */
#line 141 "parser.y"
                                                     {(yyval.type) = checkWhen((yyvsp[-2].type), (yyvsp[0].type));}
#line 1687 "parser.tab.c"
    break;

  case 28: /* statement: SWITCH expression IS cases OTHERS ARROW statement ';' ENDSWITCH  */
#line 142 "parser.y"
                                                                        {(yyval.type) = checkSwitch((yyvsp[-7].type), (yyvsp[-5].type), (yyvsp[-2].type));}
#line 1693 "parser.tab.c"
    break;

  case 31: /* fold_statement: FOLD direction operator list_choice ENDFOLD  */
#line 147 "parser.y"
                                                {
        if ((yyvsp[-1].type) == CHAR_TYPE) {
            appendError(GENERAL_SEMANTIC, "Fold Requires A Numeric List");
            (yyval.type) = MISMATCH;
        } else {
            (yyval.type) = (yyvsp[-1].type);
        }
    }
#line 1706 "parser.tab.c"
    break;

  case 36: /* list_choice: list  */
#line 163 "parser.y"
         {(yyval.type) = (yyvsp[0].type); }
#line 1712 "parser.tab.c"
    break;

  case 37: /* list_choice: IDENTIFIER  */
#line 163 "parser.y"
                                 {(yyval.type) = find(scalars, (yyvsp[0].iden), "Scalar");}
#line 1718 "parser.tab.c"
    break;

  case 38: /* if_statement: IF condition THEN statement_ ELSE statement_ ENDIF  */
#line 166 "parser.y"
                                                       { (yyval.type) =  checkIFThen((yyvsp[-5].type), (yyvsp[-3].type), (yyvsp[-1].type));}
#line 1724 "parser.tab.c"
    break;

  case 39: /* if_statement: IF condition THEN statement_ elsif_clauses ELSE statement_ ENDIF  */
#line 167 "parser.y"
                                                                     { (yyval.type) = checkIFThenElsifElse((yyvsp[-6].type), (yyvsp[-4].type), (yyvsp[-3].type), (yyvsp[-1].type));}
#line 1730 "parser.tab.c"
    break;

  case 40: /* elsif_clauses: %empty  */
#line 170 "parser.y"
           { (yyval.type) = NONE; }
#line 1736 "parser.tab.c"
    break;

  case 41: /* elsif_clauses: ELSIF condition THEN statement_ elsif_clauses  */
#line 171 "parser.y"
                                                  { (yyval.type) = (yyvsp[-3].type) ? (yyvsp[-1].type) : (yyvsp[0].type); }
#line 1742 "parser.tab.c"
    break;

  case 42: /* cases: cases case  */
#line 174 "parser.y"
                   {(yyval.type) = checkCases((yyvsp[-1].type), (yyvsp[0].type));}
#line 1748 "parser.tab.c"
    break;

  case 43: /* cases: %empty  */
#line 175 "parser.y"
               {(yyval.type) = NONE;}
#line 1754 "parser.tab.c"
    break;

  case 44: /* cases: error ';'  */
#line 176 "parser.y"
                  {(yyval.type) = MISMATCH;}
#line 1760 "parser.tab.c"
    break;

  case 45: /* case: CASE INT_LITERAL ARROW statement ';'  */
#line 179 "parser.y"
                                             {(yyval.type) = (yyvsp[-1].type);}
#line 1766 "parser.tab.c"
    break;

  case 46: /* case: error ';'  */
#line 180 "parser.y"
                  {(yyval.type) = MISMATCH;}
#line 1772 "parser.tab.c"
    break;

  case 50: /* condition: NOTOP condition  */
#line 187 "parser.y"
                        { (yyval.type) = (yyvsp[0].type); }
#line 1778 "parser.tab.c"
    break;

  case 53: /* relation: '(' condition ')'  */
#line 193 "parser.y"
                         {(yyval.type) = (yyvsp[-1].type);}
#line 1784 "parser.tab.c"
    break;

  case 54: /* relation: expression RELOP expression  */
#line 194 "parser.y"
                                    {(yyval.type) = checkRelation((yyvsp[-2].type), (yyvsp[0].type));}
#line 1790 "parser.tab.c"
    break;

  case 55: /* term: term arithmetic_operator primary  */
#line 197 "parser.y"
                                         {(yyval.type) = checkArithmetic((yyvsp[-2].type), (yyvsp[0].type));}
#line 1796 "parser.tab.c"
    break;

  case 56: /* term: term REMOP primary  */
#line 198 "parser.y"
                           { (yyval.type) = checkModulusTypes((yyvsp[-2].type), (yyvsp[0].type));}
#line 1802 "parser.tab.c"
    break;

  case 58: /* primary: '(' expression ')'  */
#line 202 "parser.y"
                           {(yyval.type) = (yyvsp[-1].type);}
#line 1808 "parser.tab.c"
    break;

  case 60: /* primary: NEGOP expression  */
#line 204 "parser.y"
                     { (yyval.type) = checkNegation((yyvsp[0].type)); }
#line 1814 "parser.tab.c"
    break;

  case 64: /* primary: IDENTIFIER '(' expression ')'  */
#line 208 "parser.y"
                                      { 
		if ((yyvsp[-1].type) != INT_TYPE){
		appendError(GENERAL_SEMANTIC, "List Subscript Must Be Integer");
	} else { 
		(yyval.type) = find(lists, (yyvsp[-3].iden), "List");
		}
	}
#line 1826 "parser.tab.c"
    break;

  case 65: /* primary: IDENTIFIER  */
#line 215 "parser.y"
                    { if (!scalars.find((yyvsp[0].iden), (yyval.type)) && !lists.find((yyvsp[0].iden), (yyval.type))) {
            appendError(GENERAL_SEMANTIC, "Semantic Error, Undeclared Scalar " + string((yyvsp[0].iden)));
        }
    }
#line 1835 "parser.tab.c"
    break;


#line 1839 "parser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 223 "parser.y"

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
