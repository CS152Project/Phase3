/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "calc.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include "string.h"
extern FILE * yyin;
extern int currLine;
extern int currPos;
int yylex();
bool no_error = true;
void yyerror(const char *msg);

#line 78 "parser.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.tab.h".  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    FUNCTION = 258,
    SEMICOLON = 259,
    COMMA = 260,
    COLON = 261,
    READ = 262,
    WRITE = 263,
    MULT = 264,
    DIV = 265,
    PLUS = 266,
    MINUS = 267,
    EQUAL = 268,
    PER = 269,
    END = 270,
    FOR = 271,
    CONTINUE = 272,
    L_SQUARE_BRACKET = 273,
    R_SQUARE_BRACKET = 274,
    L_PAREN = 275,
    R_PAREN = 276,
    BEGIN_PARAMS = 277,
    END_PARAMS = 278,
    BEGINLOOP = 279,
    ENDLOOP = 280,
    BEGIN_LOCALS = 281,
    END_LOCALS = 282,
    BEGIN_BODY = 283,
    END_BODY = 284,
    INTEGER = 285,
    ARRAY = 286,
    OF = 287,
    ENDIF = 288,
    ELSE = 289,
    IF = 290,
    THEN = 291,
    WHILE = 292,
    DO = 293,
    EQ = 294,
    NEQ = 295,
    LT = 296,
    GT = 297,
    GTE = 298,
    LTE = 299,
    AND = 300,
    OR = 301,
    NOT = 302,
    TRUE = 303,
    FALSE = 304,
    RETURN = 305,
    ASSIGN = 306,
    IDENT = 307,
    NUMBER = 308,
    UMINUS = 309
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 13 "calc.y" /* yacc.c:355  */

   char * identval;
   int iVal;

#line 178 "parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 195 "parser.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   342

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  95
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  209

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   309

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    33,    36,    40,    41,    44,    48,    49,    51,    53,
      55,    58,    60,    62,    64,    66,    68,    72,    74,    77,
      79,    81,    83,    85,    88,    90,    92,    94,    96,    98,
     100,   102,   104,   106,   108,   110,   114,   116,   119,   121,
     124,   126,   128,   130,   132,   134,   136,   138,   140,   142,
     146,   148,   150,   152,   154,   156,   158,   162,   164,   166,
     168,   170,   172,   174,   178,   180,   182,   184,   188,   190,
     192,   194,   196,   198,   200,   203,   207,   209,   211,   213,
     215,   217,   219,   221,   223,   225,   227,   229,   231,   236,
     238,   240,   242,   244,   246,   248
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FUNCTION", "SEMICOLON", "COMMA",
  "COLON", "READ", "WRITE", "MULT", "DIV", "PLUS", "MINUS", "EQUAL", "PER",
  "END", "FOR", "CONTINUE", "L_SQUARE_BRACKET", "R_SQUARE_BRACKET",
  "L_PAREN", "R_PAREN", "BEGIN_PARAMS", "END_PARAMS", "BEGINLOOP",
  "ENDLOOP", "BEGIN_LOCALS", "END_LOCALS", "BEGIN_BODY", "END_BODY",
  "INTEGER", "ARRAY", "OF", "ENDIF", "ELSE", "IF", "THEN", "WHILE", "DO",
  "EQ", "NEQ", "LT", "GT", "GTE", "LTE", "AND", "OR", "NOT", "TRUE",
  "FALSE", "RETURN", "ASSIGN", "IDENT", "NUMBER", "UMINUS", "$accept",
  "program", "functions", "function", "declarations", "declaration",
  "ident", "statements", "statement", "bool_expression",
  "relation_and_expression", "relation_expression", "comp", "var", "vars",
  "expression", "expressions", "multiplicative_expression", "term", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309
};
# endif

#define YYPACT_NINF -92

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-92)))

#define YYTABLE_NINF -20

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      11,   -11,    48,   -92,    11,   106,   -92,   -92,    32,    29,
     124,    88,    93,    82,    89,   206,    99,    71,   111,   206,
     227,   102,    77,   -92,   -92,   -92,    36,   -92,   124,   -92,
     -92,   -92,   -92,   125,   112,    94,   162,   134,   230,    -3,
      78,     8,    17,    37,   -92,    50,    50,   161,    27,   131,
     173,   105,   142,   158,   188,   230,    27,     6,   214,   -92,
       6,   -92,     6,   179,   187,    15,    65,    52,   -92,   -92,
       5,   -92,   200,   189,   193,   198,   -92,   -92,   247,   144,
      12,   210,   230,    27,   -92,   114,   -92,   230,   207,    27,
     243,   -92,   -92,   250,    37,    42,   196,   121,   126,   130,
     139,   252,    27,   -92,   -92,   299,   251,   234,    72,   -92,
     -92,   247,    27,   230,    50,    50,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,    27,   151,   157,   160,   164,   169,   230,
     246,   260,   242,   264,   -92,    78,   -92,   -92,   253,   -92,
     -92,     6,   -92,   280,   252,   -92,   252,   -92,   321,   -92,
     252,   -92,   275,   -92,   -92,   -92,   305,   276,    27,   277,
     154,   -92,   -92,   -92,   321,   -92,   321,   -92,   252,   -92,
     252,   -92,   252,   -92,   274,   263,   284,   289,   281,    50,
     -92,   -92,   -92,   -92,   -92,   -92,   230,   -92,    50,    27,
     174,   -92,   300,   285,   -92,   302,   318,   303,    37,   -92,
     -92,   -92,   -92,   273,    27,   301,   230,   308,   -92
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     2,     3,     0,     1,     4,     0,     0,
       0,    17,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     8,    14,    18,     0,     9,    10,     7,
      15,    16,    11,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    34,     0,     0,     0,     0,    57,
       0,     0,     0,     0,     0,     0,     0,    31,    64,    30,
      33,    32,     0,     0,     0,     0,     0,     0,    45,    46,
      57,    91,     0,     0,    36,    38,    90,    75,     0,    68,
      76,     0,     0,     0,    35,     0,     5,     0,     0,     0,
       0,    12,    22,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    94,    93,     0,     0,     0,     0,    41,
      42,     0,     0,     0,     0,     0,    56,    50,    51,    52,
      53,    54,    55,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    23,    21,    20,    24,     0,    59,
      66,    67,    65,     0,    86,    80,    87,    82,    73,    71,
      88,    84,     0,    48,    47,    92,     0,     0,     0,     0,
       0,    37,    39,    44,    72,    69,    74,    70,    81,    77,
      83,    78,    85,    79,     0,     0,    61,    58,     0,     0,
      95,    49,    43,    40,    89,    25,     0,    27,     0,     0,
       0,    13,     0,     0,    28,     0,     0,     0,     0,    26,
      62,    63,    60,     0,     0,     0,     0,     0,    29
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -92,   -92,   330,   -92,   180,   -92,   286,   -42,   -92,   -34,
     224,   225,   231,   -38,   -36,   -54,   -47,   -91,   166
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     4,    12,    13,    72,    50,    51,    73,
      74,    75,   123,    76,    59,    77,    78,    79,    80
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      52,    84,    93,    58,    58,    58,    61,    63,   149,    57,
      17,    94,    81,    92,     1,    53,   101,    52,    60,   107,
     111,   126,   127,    85,    56,   -17,   128,   104,    64,    54,
      10,   133,   106,   165,   167,   102,   131,    10,    62,    65,
     130,     5,   137,   141,    52,   134,   136,    83,     6,    52,
      52,    64,    -6,    64,     9,   152,    58,    58,   140,   142,
      49,   107,    65,    -6,    65,   159,   105,    49,   103,    49,
      66,   160,   108,   156,   157,    52,   163,    65,    31,    70,
      71,    11,    55,    19,    65,    66,    20,   174,    11,    49,
      21,    52,    66,    17,    49,    22,    56,    67,    68,    69,
     109,   110,    70,    71,    70,    71,    87,    32,    33,    88,
       8,   183,    67,    68,    69,   132,    18,    70,    71,    67,
      68,    69,   144,    11,    70,    71,    65,   146,    15,    24,
      16,   148,    30,    65,    83,   195,   197,    26,    65,    36,
     150,    83,    65,    35,   193,   192,    83,    37,    52,    85,
      83,    65,   164,    39,   194,   124,   125,   205,   166,    83,
      58,   168,   203,    65,   207,   170,    70,    71,    52,    65,
     172,    83,    65,    70,    71,   196,    65,    83,    70,    71,
      83,    65,    70,    71,    83,    82,    65,   185,   186,    83,
      38,    70,    71,    89,    83,    23,    97,    98,    99,    27,
      29,   100,    86,    70,    71,    56,    34,    10,   135,    70,
      71,    90,    70,    71,    41,    42,    70,    71,    91,    95,
     112,    70,    71,    43,    44,   113,    70,    71,    28,    -6,
      96,    40,   -19,    -6,   129,   116,   -19,    41,    42,   114,
     -19,   -19,    45,   115,    46,    47,    43,    44,   116,   143,
      -6,    97,    98,    99,    -6,   155,   100,    48,    11,    49,
      56,   176,   138,   145,   147,    45,   151,    46,    47,   139,
      56,   175,   154,   117,   118,   119,   120,   121,   122,    11,
      48,   155,    49,   177,   179,   178,   117,   118,   119,   120,
     121,   122,   169,   171,   173,    14,   180,   182,   184,   187,
     188,    14,   189,    25,   198,    14,    14,   190,    97,    98,
      99,   191,    14,   100,    97,    98,    99,    56,   199,   100,
     153,   200,   202,    56,   204,   206,   181,    97,    98,    99,
      97,    98,   100,   208,     7,   100,    56,   201,   161,    56,
     162,     0,   158
};

static const yytype_int16 yycheck[] =
{
      38,    48,    56,    41,    42,    43,    42,    43,    99,     1,
       5,     5,    46,    55,     3,    18,     1,    55,     1,    66,
      67,     9,    10,    18,    18,    20,    14,    65,     1,    32,
       1,    85,    66,   124,   125,    20,    83,     1,     1,    12,
      82,    52,    89,     1,    82,    87,    88,    20,     0,    87,
      88,     1,    23,     1,    22,   102,    94,    95,    94,    95,
      52,   108,    12,    27,    12,   112,     1,    52,    53,    52,
      20,   113,    20,     1,   108,   113,   123,    12,     1,    52,
      53,    52,     4,     1,    12,    20,     4,   129,    52,    52,
       1,   129,    20,     5,    52,     6,    18,    47,    48,    49,
      48,    49,    52,    53,    52,    53,     1,    30,    31,     4,
       4,   158,    47,    48,    49,     1,    23,    52,    53,    47,
      48,    49,     1,    52,    52,    53,    12,     1,     4,    30,
       6,     1,    30,    12,    20,   189,   190,    26,    12,    27,
       1,    20,    12,    18,   186,   179,    20,    53,   186,    18,
      20,    12,     1,    19,   188,    11,    12,   204,     1,    20,
     198,     1,   198,    12,   206,     1,    52,    53,   206,    12,
       1,    20,    12,    52,    53,     1,    12,    20,    52,    53,
      20,    12,    52,    53,    20,    24,    12,    33,    34,    20,
      28,    52,    53,    51,    20,    15,     9,    10,    11,    19,
      20,    14,    29,    52,    53,    18,    26,     1,     1,    52,
      53,    53,    52,    53,     7,     8,    52,    53,    30,     5,
      20,    52,    53,    16,    17,    36,    52,    53,     1,    23,
      51,     1,    25,    27,    24,     1,    29,     7,     8,    46,
      33,    34,    35,    45,    37,    38,    16,    17,     1,    53,
      23,     9,    10,    11,    27,    21,    14,    50,    52,    52,
      18,    19,    19,    97,    98,    35,   100,    37,    38,    19,
      18,    25,    21,    39,    40,    41,    42,    43,    44,    52,
      50,    21,    52,    19,     4,    32,    39,    40,    41,    42,
      43,    44,   126,   127,   128,     9,    21,    21,    21,    25,
      37,    15,    18,    17,     4,    19,    20,    18,     9,    10,
      11,    30,    26,    14,     9,    10,    11,    18,    33,    14,
      21,    19,    19,    18,    51,    24,    21,     9,    10,    11,
       9,    10,    14,    25,     4,    14,    18,    19,   114,    18,
     115,    -1,   111
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    56,    57,    58,    52,     0,    57,     4,    22,
       1,    52,    59,    60,    61,     4,     6,     5,    23,     1,
       4,     1,     6,    59,    30,    61,    26,    59,     1,    59,
      30,     1,    30,    31,    59,    18,    27,    53,    28,    19,
       1,     7,     8,    16,    17,    35,    37,    38,    50,    52,
      62,    63,    68,    18,    32,     4,    18,     1,    68,    69,
       1,    69,     1,    69,     1,    12,    20,    47,    48,    49,
      52,    53,    61,    64,    65,    66,    68,    70,    71,    72,
      73,    64,    24,    20,    71,    18,    29,     1,     4,    51,
      53,    30,    62,    70,     5,     5,    51,     9,    10,    11,
      14,     1,    20,    53,    68,     1,    64,    71,    20,    48,
      49,    71,    20,    36,    46,    45,     1,    39,    40,    41,
      42,    43,    44,    67,    11,    12,     9,    10,    14,    24,
      62,    71,     1,    70,    62,     1,    62,    71,    19,    19,
      69,     1,    69,    53,     1,    73,     1,    73,     1,    72,
       1,    73,    71,    21,    21,    21,     1,    64,    67,    71,
      62,    65,    66,    71,     1,    72,     1,    72,     1,    73,
       1,    73,     1,    73,    62,    25,    19,    19,    32,     4,
      21,    21,    21,    71,    21,    33,    34,    25,    37,    18,
      18,    30,    64,    62,    64,    70,     1,    70,     4,    33,
      19,    19,    19,    69,    51,    71,    24,    62,    25
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    55,    56,    57,    57,    58,    59,    59,    59,    59,
      59,    60,    60,    60,    60,    60,    60,    61,    61,    62,
      62,    62,    62,    62,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    64,    64,    65,    65,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      67,    67,    67,    67,    67,    67,    67,    68,    68,    68,
      68,    68,    68,    68,    69,    69,    69,    69,    70,    70,
      70,    70,    70,    70,    70,    71,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    73,
      73,    73,    73,    73,    73,    73
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,    12,     0,     3,     3,     3,
       3,     3,     8,    11,     3,     3,     3,     1,     3,     2,
       3,     3,     3,     3,     3,     5,     7,     5,     6,    13,
       2,     2,     2,     2,     1,     2,     1,     3,     1,     3,
       4,     2,     2,     4,     3,     1,     1,     3,     3,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     4,
       7,     4,     7,     7,     1,     3,     3,     3,     1,     3,
       3,     3,     3,     3,     3,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     4,
       1,     1,     3,     2,     2,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
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
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
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
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
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
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
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
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 2:
#line 37 "calc.y" /* yacc.c:1646  */
    {printf("program->functions\n");}
#line 1437 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 40 "calc.y" /* yacc.c:1646  */
    {printf("functions->epsilon\n");}
#line 1443 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 42 "calc.y" /* yacc.c:1646  */
    {printf("functions->function functions\n");}
#line 1449 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 45 "calc.y" /* yacc.c:1646  */
    {printf("function->FUNCTION IDENT SEMICOLON BEGIN_PARAMS declaration END_PARAMS BEGIN_LOCALS declaration END_LOCALS BEGIN_BODY statements END_BODY\n");}
#line 1455 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 48 "calc.y" /* yacc.c:1646  */
    {printf("declarations->epsilon\n");}
#line 1461 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 50 "calc.y" /* yacc.c:1646  */
    {printf("declarations->declaration SEMICOLON declarations\n");}
#line 1467 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 52 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: Missing declaration at line %d\n", currLine);}
#line 1473 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 54 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: Missing SEMICOLON at line %d\n", currLine);}
#line 1479 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 56 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: Missing declarations at line %d\n", currLine);}
#line 1485 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 59 "calc.y" /* yacc.c:1646  */
    {printf("declaration->identifiers SEMICOLON INTEGER\n");}
#line 1491 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 61 "calc.y" /* yacc.c:1646  */
    {printf("declaration->identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");}
#line 1497 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 63 "calc.y" /* yacc.c:1646  */
    {printf("declaration->identifiers SEMICOLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");}
#line 1503 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 65 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing identifier at line %d\n", currLine);}
#line 1509 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 67 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing COLON at line %d\n", currLine);}
#line 1515 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 69 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing INTEGER at line %d\n", currLine);}
#line 1521 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 73 "calc.y" /* yacc.c:1646  */
    {printf("ident->IDENT\n");}
#line 1527 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 75 "calc.y" /* yacc.c:1646  */
    {printf("ident->IDENT COMMA ident\n");}
#line 1533 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 78 "calc.y" /* yacc.c:1646  */
    {printf("statements->statement SEMICOLON\n");}
#line 1539 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 80 "calc.y" /* yacc.c:1646  */
    {printf("statement->statement SEMICOLON statements\n");}
#line 1545 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 82 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing statements at line %d\n", currLine);}
#line 1551 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 84 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing statement at line %d\n", currLine);}
#line 1557 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 86 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing SEMICOLON at line %d\n", currLine);}
#line 1563 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 89 "calc.y" /* yacc.c:1646  */
    {printf("statement->Var ASSIGN expression\n");}
#line 1569 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 91 "calc.y" /* yacc.c:1646  */
    {printf("statement->IF bool_expression THEN statements SEMICOLON ENDIF\n");}
#line 1575 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 93 "calc.y" /* yacc.c:1646  */
    {printf("statement->IF bool_expression THEN statements SEMICOLON ENDIF\n");}
#line 1581 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 95 "calc.y" /* yacc.c:1646  */
    {printf("statement->WHILE bool_expression BEGINLOOP statements SEMICOLON ENDLOOP\n");}
#line 1587 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 97 "calc.y" /* yacc.c:1646  */
    {printf("statement->DO BEGINLOOP statements SEMICOLON ENDLOOP WHILE bool_expression\n");}
#line 1593 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 99 "calc.y" /* yacc.c:1646  */
    {printf("statement->FOR vars ASSIGN NUMBER SEMICOLON bool_expression SEMICOLON vars ASSIGN expressions BEGINLOOP statements SEMICOLON ENDLOOP\n");}
#line 1599 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 101 "calc.y" /* yacc.c:1646  */
    {printf("statement->READ var\n");}
#line 1605 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 103 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: no variables at line %d\n", currLine);}
#line 1611 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 105 "calc.y" /* yacc.c:1646  */
    {printf("statement->WRITE vars\n");}
#line 1617 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 107 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: no variable at line %d\n", currLine);}
#line 1623 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 109 "calc.y" /* yacc.c:1646  */
    {printf("statement->CONTINUE\n");}
#line 1629 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 111 "calc.y" /* yacc.c:1646  */
    {printf("statement->RETURN expressions\n");}
#line 1635 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 115 "calc.y" /* yacc.c:1646  */
    {printf("bool_expression->relation_and_expression\n");}
#line 1641 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 117 "calc.y" /* yacc.c:1646  */
    {printf("bool_expression->relation_and_expression OR relation_and_expression\n");}
#line 1647 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 120 "calc.y" /* yacc.c:1646  */
    {printf("relation_and_expression->relation_expression\n");}
#line 1653 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 122 "calc.y" /* yacc.c:1646  */
    {printf("relation_and_expressions->relation_expression OR relation_expression\n");}
#line 1659 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 125 "calc.y" /* yacc.c:1646  */
    {printf("relation_expression->NOT expressions comp expressions\n");}
#line 1665 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 127 "calc.y" /* yacc.c:1646  */
    {printf("relation_expression->NOT TRUE\n");}
#line 1671 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 129 "calc.y" /* yacc.c:1646  */
    {printf("relation_expression->NOT FALSE\n");}
#line 1677 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 131 "calc.y" /* yacc.c:1646  */
    {printf("relation_expression->NOT L_PAREN bool_expressions R_PAREN\n");}
#line 1683 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 133 "calc.y" /* yacc.c:1646  */
    {printf("relation_expression->expressions comp expressions\n");}
#line 1689 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 135 "calc.y" /* yacc.c:1646  */
    {printf("relation_expression->TRUE\n");}
#line 1695 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 137 "calc.y" /* yacc.c:1646  */
    {printf("relation_expression->FALSE\n");}
#line 1701 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 139 "calc.y" /* yacc.c:1646  */
    {printf("relation_expression->L_PAREN bool_expressions R_PAREN\n");}
#line 1707 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 141 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing bool_expression in line %d\n", currLine);}
#line 1713 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 143 "calc.y" /* yacc.c:1646  */
    {printf("synax error: missing bool_expression in line %d\n", currLine);}
#line 1719 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 147 "calc.y" /* yacc.c:1646  */
    {printf("comp->EQ\n");}
#line 1725 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 149 "calc.y" /* yacc.c:1646  */
    {printf("comp->NEQ\n");}
#line 1731 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 151 "calc.y" /* yacc.c:1646  */
    {printf("comp->LT\n");}
#line 1737 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 153 "calc.y" /* yacc.c:1646  */
    {printf("comp->GT\n");}
#line 1743 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 155 "calc.y" /* yacc.c:1646  */
    {printf("comp->GTE\n");}
#line 1749 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 157 "calc.y" /* yacc.c:1646  */
    {printf("comp->LTE\n");}
#line 1755 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 159 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing EQ, NEQ, LT, GT, GTE or LTE in line %d\n", currLine);}
#line 1761 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 163 "calc.y" /* yacc.c:1646  */
    {printf("var->IDENT\n");}
#line 1767 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 165 "calc.y" /* yacc.c:1646  */
    {printf("var->ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET\n");}
#line 1773 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 167 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing identifier in line %d\n", currLine);}
#line 1779 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 169 "calc.y" /* yacc.c:1646  */
    {printf("var->ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET L_SQUARE_BRACKET expression R_SQUARE_BRACKET\n");}
#line 1785 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 171 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing expression in line %d\n", currLine);}
#line 1791 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 173 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing expression in line %d\n", currLine);}
#line 1797 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 175 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing expression in line %d\n", currLine);}
#line 1803 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 179 "calc.y" /* yacc.c:1646  */
    {printf("vars->var\n");}
#line 1809 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 181 "calc.y" /* yacc.c:1646  */
    {printf("vars->var COMMA vars\n");}
#line 1815 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 183 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing variable in line %d\n", currLine);}
#line 1821 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 185 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing variables in line %d\n", currLine);}
#line 1827 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 189 "calc.y" /* yacc.c:1646  */
    {printf("expression->multiplicative_expression\n");}
#line 1833 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 191 "calc.y" /* yacc.c:1646  */
    {printf("expression->multiplicative_expression PLUS multiplicative_expression\n");}
#line 1839 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 193 "calc.y" /* yacc.c:1646  */
    {printf("expression->multiplicative_expression MINUS multiplicative_expression\n");}
#line 1845 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 195 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: Missing first term for addition at line %d\n", currLine);}
#line 1851 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 197 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: Missing second term for addition at line %d\n", currLine);}
#line 1857 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 199 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: No terms for PLUS available at line %d\n", currLine);}
#line 1863 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 201 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: Missing second term for subtraction at line %d\n", currLine);}
#line 1869 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 204 "calc.y" /* yacc.c:1646  */
    {printf("expressions->expression\n");}
#line 1875 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 208 "calc.y" /* yacc.c:1646  */
    {printf("multiplicative_expression->terms\n");}
#line 1881 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 210 "calc.y" /* yacc.c:1646  */
    {printf("multiplicative_expression->term MULT term\n");}
#line 1887 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 212 "calc.y" /* yacc.c:1646  */
    {printf("multiplicative_expression->term DIV term\n");}
#line 1893 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 214 "calc.y" /* yacc.c:1646  */
    {printf("multiplicative_expression->term PER term\n");}
#line 1899 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 216 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: Missing first term for multiplication at line %d\n", currLine);}
#line 1905 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 218 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: Missing second term for multiplication at line %d\n", currLine);}
#line 1911 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 220 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: Missing first term for division at line %d\n", currLine);}
#line 1917 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 222 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: Missing second term for division at line %d\n", currLine);}
#line 1923 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 224 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: Missing first term for modulus at line %d\n", currLine);}
#line 1929 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 226 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: Missing second term for modulus at line %d\n", currLine);}
#line 1935 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 228 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: No terms for MULT available at line %d\n", currLine);}
#line 1941 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 230 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: No terms for DIV available at line %d\n", currLine);}
#line 1947 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 232 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: No terms for PER available at line %d\n", currLine);}
#line 1953 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 237 "calc.y" /* yacc.c:1646  */
    {printf("term->identifier L_PAREN expressions R_PAREN\n");}
#line 1959 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 239 "calc.y" /* yacc.c:1646  */
    {printf("term->Var\n");}
#line 1965 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 241 "calc.y" /* yacc.c:1646  */
    {printf("term->NUMBER\n");}
#line 1971 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 243 "calc.y" /* yacc.c:1646  */
    {printf("term->L_PAREN expressions R_PAREN\n");}
#line 1977 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 245 "calc.y" /* yacc.c:1646  */
    {printf("term->MINUS var\n");}
#line 1983 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 247 "calc.y" /* yacc.c:1646  */
    {printf("term->MINUS NUMBER\n");}
#line 1989 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 249 "calc.y" /* yacc.c:1646  */
    {printf("term->MINUS L_PAREN expressions R_PAREN\n");}
#line 1995 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 1999 "parser.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 252 "calc.y" /* yacc.c:1906  */


int main(int argc, char ** argv)
{
    if(argc >= 2)
    {
       yyin = fopen(argv[1], "r");
       if(yyin == NULL)
       { 
          yyin = stdin;
       }
    }  
    else 
    {
        yyin = stdin;
    }
    
    yyparse(); //calls yylex()
    return 1;

}

void yyerror(const char *msg){
   printf("Error in line %d, position %d: %s\n", currLine, currPos, msg);
}
