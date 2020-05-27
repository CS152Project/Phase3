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

#define YY_NO_UNPUT
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
void yyerror(const char *msg);
extern FILE * yyin;
extern int currLine;
extern int currPos;
int yylex(void); 

#line 79 "parser.tab.c" /* yacc.c:339  */

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
    ADD = 309,
    SUB = 310,
    MUlT = 311,
    UMINUS = 312
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 14 "calc.y" /* yacc.c:355  */
   
  struct _typeId
    {
      char *name;
      int val;
    } type_id;  

#line 185 "parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 202 "parser.tab.c" /* yacc.c:358  */

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
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  96
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  210

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   312

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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    51,    51,    52,    56,    57,    60,    65,    66,    68,
      70,    72,    75,    77,    79,    81,    83,    85,    89,    91,
      94,    96,    98,   100,   102,   105,   107,   109,   111,   113,
     115,   117,   119,   121,   123,   125,   127,   131,   133,   136,
     138,   141,   143,   145,   147,   149,   151,   153,   155,   157,
     159,   163,   165,   167,   169,   171,   173,   175,   179,   181,
     183,   185,   187,   189,   191,   195,   197,   199,   201,   205,
     207,   209,   211,   213,   215,   217,   220,   224,   226,   228,
     230,   232,   234,   236,   238,   240,   242,   244,   246,   248,
     253,   255,   257,   259,   261,   263,   265
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
  "FALSE", "RETURN", "ASSIGN", "IDENT", "NUMBER", "ADD", "SUB", "MUlT",
  "UMINUS", "$accept", "program", "functions", "function", "declarations",
  "declaration", "ident", "statements", "statement", "bool_expression",
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
     305,   306,   307,   308,   309,   310,   311,   312
};
# endif

#define YYPACT_NINF -93

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-93)))

#define YYTABLE_NINF -21

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      11,   -11,    48,    11,    11,   106,   -93,   -93,   -93,    32,
      29,   124,    88,    93,    82,    89,   206,    99,    71,   111,
     206,   227,   102,    77,   -93,   -93,   -93,    36,   -93,   124,
     -93,   -93,   -93,   -93,   125,   112,    94,   162,   134,   230,
      -3,    78,     8,    17,    37,   -93,    50,    50,   161,    27,
     131,   173,   105,   142,   158,   188,   230,    27,     6,   214,
     -93,     6,   -93,     6,   183,   187,    15,    65,    52,   -93,
     -93,     5,   -93,   200,   189,   184,   194,   -93,   -93,   247,
     144,    12,   219,   230,    27,   -93,   114,   -93,   230,   207,
      27,   243,   -93,   -93,   250,    37,    42,   196,   121,   126,
     130,   139,   252,    27,   -93,   -93,   299,   251,   234,    72,
     -93,   -93,   247,    27,   230,    50,    50,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,    27,   151,   157,   160,   164,   169,
     230,   246,   260,   242,   264,   -93,    78,   -93,   -93,   253,
     -93,   -93,     6,   -93,   280,   252,   -93,   252,   -93,   321,
     -93,   252,   -93,   275,   -93,   -93,   -93,   305,   276,    27,
     277,   154,   -93,   -93,   -93,   321,   -93,   321,   -93,   252,
     -93,   252,   -93,   252,   -93,   274,   263,   284,   286,   281,
      50,   -93,   -93,   -93,   -93,   -93,   -93,   230,   -93,    50,
      27,   174,   -93,   303,   288,   -93,   306,   318,   314,    37,
     -93,   -93,   -93,   -93,   267,    27,   298,   230,   309,   -93
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     2,     4,     0,     1,     3,     5,     0,
       0,     0,    18,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     9,    15,    19,     0,    10,    11,
       8,    16,    17,    12,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    35,     0,     0,     0,     0,
      58,     0,     0,     0,     0,     0,     0,     0,    32,    65,
      31,    34,    33,     0,     0,     0,     0,     0,     0,    46,
      47,    58,    92,     0,     0,    37,    39,    91,    76,     0,
      69,    77,     0,     0,     0,    36,     0,     6,     0,     0,
       0,     0,    13,    23,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    95,    94,     0,     0,     0,     0,
      42,    43,     0,     0,     0,     0,     0,    57,    51,    52,
      53,    54,    55,    56,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    24,    22,    21,    25,     0,
      60,    67,    68,    66,     0,    87,    81,    88,    83,    74,
      72,    89,    85,     0,    49,    48,    93,     0,     0,     0,
       0,     0,    38,    40,    45,    73,    70,    75,    71,    82,
      78,    84,    79,    86,    80,     0,     0,    62,    59,     0,
       0,    96,    50,    44,    41,    90,    26,     0,    28,     0,
       0,     0,    14,     0,     0,    29,     0,     0,     0,     0,
      27,    63,    64,    61,     0,     0,     0,     0,     0,    30
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -93,   335,   320,   -93,   179,   -93,   285,   -43,   -93,   -35,
     225,   226,   229,   -39,   -37,   -55,   -48,   -92,   165
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     4,    13,    14,    73,    51,    52,    74,
      75,    76,   124,    77,    60,    78,    79,    80,    81
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      53,    85,    94,    59,    59,    59,    62,    64,   150,    58,
      18,    95,    82,    93,     1,    54,   102,    53,    61,   108,
     112,   127,   128,    86,    57,   -18,   129,   105,    65,    55,
      11,   134,   107,   166,   168,   103,   132,    11,    63,    66,
     131,     5,   138,   142,    53,   135,   137,    84,     6,    53,
      53,    65,    -7,    65,    10,   153,    59,    59,   141,   143,
      50,   108,    66,    -7,    66,   160,   106,    50,   104,    50,
      67,   161,   109,   157,   158,    53,   164,    66,    32,    71,
      72,    12,    56,    20,    66,    67,    21,   175,    12,    50,
      22,    53,    67,    18,    50,    23,    57,    68,    69,    70,
     110,   111,    71,    72,    71,    72,    88,    33,    34,    89,
       9,   184,    68,    69,    70,   133,    19,    71,    72,    68,
      69,    70,   145,    12,    71,    72,    66,   147,    16,    25,
      17,   149,    31,    66,    84,   196,   198,    27,    66,    37,
     151,    84,    66,    36,   194,   193,    84,    38,    53,    86,
      84,    66,   165,    40,   195,   125,   126,   206,   167,    84,
      59,   169,   204,    66,   208,   171,    71,    72,    53,    66,
     173,    84,    66,    71,    72,   197,    66,    84,    71,    72,
      84,    66,    71,    72,    84,    83,    66,   186,   187,    84,
      39,    71,    72,    90,    84,    24,    98,    99,   100,    28,
      30,   101,    87,    71,    72,    57,    35,    11,   136,    71,
      72,    91,    71,    72,    42,    43,    71,    72,    92,    96,
     113,    71,    72,    44,    45,   114,    71,    72,    29,    -7,
     115,    41,   -20,    -7,    97,   117,   -20,    42,    43,   116,
     -20,   -20,    46,   130,    47,    48,    44,    45,   117,   144,
      -7,    98,    99,   100,    -7,   156,   101,    49,    12,    50,
      57,   177,   139,   146,   148,    46,   152,    47,    48,   140,
      57,   176,   155,   118,   119,   120,   121,   122,   123,    12,
      49,   156,    50,   178,   180,   179,   118,   119,   120,   121,
     122,   123,   170,   172,   174,    15,   181,   183,   185,   188,
     189,    15,   190,    26,   191,    15,    15,   199,    98,    99,
     100,   192,    15,   101,    98,    99,   100,    57,   205,   101,
     154,   200,   207,    57,     8,   201,   182,    98,    99,   100,
      98,    99,   101,   203,   209,   101,    57,   202,     7,    57,
     162,   159,   163
};

static const yytype_uint8 yycheck[] =
{
      39,    49,    57,    42,    43,    44,    43,    44,   100,     1,
       5,     5,    47,    56,     3,    18,     1,    56,     1,    67,
      68,     9,    10,    18,    18,    20,    14,    66,     1,    32,
       1,    86,    67,   125,   126,    20,    84,     1,     1,    12,
      83,    52,    90,     1,    83,    88,    89,    20,     0,    88,
      89,     1,    23,     1,    22,   103,    95,    96,    95,    96,
      52,   109,    12,    27,    12,   113,     1,    52,    53,    52,
      20,   114,    20,     1,   109,   114,   124,    12,     1,    52,
      53,    52,     4,     1,    12,    20,     4,   130,    52,    52,
       1,   130,    20,     5,    52,     6,    18,    47,    48,    49,
      48,    49,    52,    53,    52,    53,     1,    30,    31,     4,
       4,   159,    47,    48,    49,     1,    23,    52,    53,    47,
      48,    49,     1,    52,    52,    53,    12,     1,     4,    30,
       6,     1,    30,    12,    20,   190,   191,    26,    12,    27,
       1,    20,    12,    18,   187,   180,    20,    53,   187,    18,
      20,    12,     1,    19,   189,    11,    12,   205,     1,    20,
     199,     1,   199,    12,   207,     1,    52,    53,   207,    12,
       1,    20,    12,    52,    53,     1,    12,    20,    52,    53,
      20,    12,    52,    53,    20,    24,    12,    33,    34,    20,
      28,    52,    53,    51,    20,    16,     9,    10,    11,    20,
      21,    14,    29,    52,    53,    18,    27,     1,     1,    52,
      53,    53,    52,    53,     7,     8,    52,    53,    30,     5,
      20,    52,    53,    16,    17,    36,    52,    53,     1,    23,
      46,     1,    25,    27,    51,     1,    29,     7,     8,    45,
      33,    34,    35,    24,    37,    38,    16,    17,     1,    53,
      23,     9,    10,    11,    27,    21,    14,    50,    52,    52,
      18,    19,    19,    98,    99,    35,   101,    37,    38,    19,
      18,    25,    21,    39,    40,    41,    42,    43,    44,    52,
      50,    21,    52,    19,     4,    32,    39,    40,    41,    42,
      43,    44,   127,   128,   129,    10,    21,    21,    21,    25,
      37,    16,    18,    18,    18,    20,    21,     4,     9,    10,
      11,    30,    27,    14,     9,    10,    11,    18,    51,    14,
      21,    33,    24,    18,     4,    19,    21,     9,    10,    11,
       9,    10,    14,    19,    25,    14,    18,    19,     3,    18,
     115,   112,   116
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    59,    60,    61,    52,     0,    59,    60,     4,
      22,     1,    52,    62,    63,    64,     4,     6,     5,    23,
       1,     4,     1,     6,    62,    30,    64,    26,    62,     1,
      62,    30,     1,    30,    31,    62,    18,    27,    53,    28,
      19,     1,     7,     8,    16,    17,    35,    37,    38,    50,
      52,    65,    66,    71,    18,    32,     4,    18,     1,    71,
      72,     1,    72,     1,    72,     1,    12,    20,    47,    48,
      49,    52,    53,    64,    67,    68,    69,    71,    73,    74,
      75,    76,    67,    24,    20,    74,    18,    29,     1,     4,
      51,    53,    30,    65,    73,     5,     5,    51,     9,    10,
      11,    14,     1,    20,    53,    71,     1,    67,    74,    20,
      48,    49,    74,    20,    36,    46,    45,     1,    39,    40,
      41,    42,    43,    44,    70,    11,    12,     9,    10,    14,
      24,    65,    74,     1,    73,    65,     1,    65,    74,    19,
      19,    72,     1,    72,    53,     1,    76,     1,    76,     1,
      75,     1,    76,    74,    21,    21,    21,     1,    67,    70,
      74,    65,    68,    69,    74,     1,    75,     1,    75,     1,
      76,     1,    76,     1,    76,    65,    25,    19,    19,    32,
       4,    21,    21,    21,    74,    21,    33,    34,    25,    37,
      18,    18,    30,    67,    65,    67,    73,     1,    73,     4,
      33,    19,    19,    19,    72,    51,    74,    24,    65,    25
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    59,    60,    60,    61,    62,    62,    62,
      62,    62,    63,    63,    63,    63,    63,    63,    64,    64,
      65,    65,    65,    65,    65,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    67,    67,    68,
      68,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    70,    70,    70,    70,    70,    70,    70,    71,    71,
      71,    71,    71,    71,    71,    72,    72,    72,    72,    73,
      73,    73,    73,    73,    73,    73,    74,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      76,    76,    76,    76,    76,    76,    76
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     0,     2,    12,     0,     3,     3,
       3,     3,     3,     8,    11,     3,     3,     3,     1,     3,
       2,     3,     3,     3,     3,     3,     5,     7,     5,     6,
      13,     2,     2,     2,     2,     1,     2,     1,     3,     1,
       3,     4,     2,     2,     4,     3,     1,     1,     3,     3,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       4,     7,     4,     7,     7,     1,     3,     3,     3,     1,
       3,     3,     3,     3,     3,     3,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       4,     1,     1,     3,     2,     2,     4
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
#line 51 "calc.y" /* yacc.c:1646  */
    {}
#line 1445 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 53 "calc.y" /* yacc.c:1646  */
    {}
#line 1451 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 56 "calc.y" /* yacc.c:1646  */
    {}
#line 1457 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 58 "calc.y" /* yacc.c:1646  */
    {printf("functions->function functions\n");}
#line 1463 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 61 "calc.y" /* yacc.c:1646  */
    { 
        }
#line 1470 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 65 "calc.y" /* yacc.c:1646  */
    {}
#line 1476 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 67 "calc.y" /* yacc.c:1646  */
    {}
#line 1482 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 69 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: Missing declaration at line %d\n", currLine);}
#line 1488 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 71 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: Missing SEMICOLON at line %d\n", currLine);}
#line 1494 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 73 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: Missing declarations at line %d\n", currLine);}
#line 1500 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 76 "calc.y" /* yacc.c:1646  */
    {printf("declaration->identifiers SEMICOLON INTEGER\n");}
#line 1506 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 78 "calc.y" /* yacc.c:1646  */
    {printf("declaration->identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");}
#line 1512 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 80 "calc.y" /* yacc.c:1646  */
    {printf("declaration->identifiers SEMICOLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");}
#line 1518 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 82 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing identifier at line %d\n", currLine);}
#line 1524 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 84 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing COLON at line %d\n", currLine);}
#line 1530 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 86 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing INTEGER at line %d\n", currLine);}
#line 1536 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 90 "calc.y" /* yacc.c:1646  */
    {printf("ident->IDENT\n");}
#line 1542 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 92 "calc.y" /* yacc.c:1646  */
    {printf("ident->IDENT COMMA ident\n");}
#line 1548 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 95 "calc.y" /* yacc.c:1646  */
    {printf("statements->statement SEMICOLON\n");}
#line 1554 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 97 "calc.y" /* yacc.c:1646  */
    {printf("statement->statement SEMICOLON statements\n");}
#line 1560 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 99 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing statements at line %d\n", currLine);}
#line 1566 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 101 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing statement at line %d\n", currLine);}
#line 1572 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 103 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing SEMICOLON at line %d\n", currLine);}
#line 1578 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 106 "calc.y" /* yacc.c:1646  */
    {printf("= %s, %d\n", (yyvsp[-2].type_id).name, (yyvsp[0].type_id).val);}
#line 1584 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 108 "calc.y" /* yacc.c:1646  */
    {printf("statement->IF bool_expression THEN statements SEMICOLON ENDIF\n");}
#line 1590 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 110 "calc.y" /* yacc.c:1646  */
    {printf("statement->IF bool_expression THEN statements SEMICOLON ENDIF\n");}
#line 1596 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 112 "calc.y" /* yacc.c:1646  */
    {printf("statement->WHILE bool_expression BEGINLOOP statements SEMICOLON ENDLOOP\n");}
#line 1602 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 114 "calc.y" /* yacc.c:1646  */
    {printf("statement->DO BEGINLOOP statements SEMICOLON ENDLOOP WHILE bool_expression\n");}
#line 1608 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 116 "calc.y" /* yacc.c:1646  */
    {printf("statement->FOR vars ASSIGN NUMBER SEMICOLON bool_expression SEMICOLON vars ASSIGN expressions BEGINLOOP statements SEMICOLON ENDLOOP\n");}
#line 1614 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 118 "calc.y" /* yacc.c:1646  */
    {printf(".< %s\n", (yyvsp[0].type_id).name);}
#line 1620 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 120 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: no variables at line %d\n", currLine);}
#line 1626 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 122 "calc.y" /* yacc.c:1646  */
    {printf(".> %s\n", (yyvsp[0].type_id).name); std::string name = "bob";}
#line 1632 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 124 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: no variable at line %d\n", currLine);}
#line 1638 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 126 "calc.y" /* yacc.c:1646  */
    {printf("statement->CONTINUE\n");}
#line 1644 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 128 "calc.y" /* yacc.c:1646  */
    {printf("statement->RETURN expressions\n");}
#line 1650 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 132 "calc.y" /* yacc.c:1646  */
    {printf("bool_expression->relation_and_expression\n");}
#line 1656 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 134 "calc.y" /* yacc.c:1646  */
    {printf("bool_expression->relation_and_expression OR relation_and_expression\n");}
#line 1662 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 137 "calc.y" /* yacc.c:1646  */
    {printf("relation_and_expression->relation_expression\n");}
#line 1668 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 139 "calc.y" /* yacc.c:1646  */
    {printf("relation_and_expressions->relation_expression OR relation_expression\n");}
#line 1674 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 142 "calc.y" /* yacc.c:1646  */
    {printf("relation_expression->NOT expressions comp expressions\n");}
#line 1680 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 144 "calc.y" /* yacc.c:1646  */
    {printf("relation_expression->NOT TRUE\n");}
#line 1686 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 146 "calc.y" /* yacc.c:1646  */
    {printf("relation_expression->NOT FALSE\n");}
#line 1692 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 148 "calc.y" /* yacc.c:1646  */
    {printf("relation_expression->NOT L_PAREN bool_expressions R_PAREN\n");}
#line 1698 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 150 "calc.y" /* yacc.c:1646  */
    {printf("relation_expression->expressions comp expressions\n");}
#line 1704 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 152 "calc.y" /* yacc.c:1646  */
    {printf("relation_expression->TRUE\n");}
#line 1710 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 154 "calc.y" /* yacc.c:1646  */
    {printf("relation_expression->FALSE\n");}
#line 1716 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 156 "calc.y" /* yacc.c:1646  */
    {printf("relation_expression->L_PAREN bool_expressions R_PAREN\n");}
#line 1722 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 158 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing bool_expression in line %d\n", currLine);}
#line 1728 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 160 "calc.y" /* yacc.c:1646  */
    {printf("synax error: missing bool_expression in line %d\n", currLine);}
#line 1734 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 164 "calc.y" /* yacc.c:1646  */
    {printf("comp->EQ\n");}
#line 1740 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 166 "calc.y" /* yacc.c:1646  */
    {printf("comp->NEQ\n");}
#line 1746 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 168 "calc.y" /* yacc.c:1646  */
    {printf("comp->LT\n");}
#line 1752 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 170 "calc.y" /* yacc.c:1646  */
    {printf("comp->GT\n");}
#line 1758 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 172 "calc.y" /* yacc.c:1646  */
    {printf("comp->GTE\n");}
#line 1764 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 174 "calc.y" /* yacc.c:1646  */
    {printf("comp->LTE\n");}
#line 1770 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 176 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing EQ, NEQ, LT, GT, GTE or LTE in line %d\n", currLine);}
#line 1776 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 180 "calc.y" /* yacc.c:1646  */
    {(yyval.type_id).name = (yyvsp[0].type_id).name;}
#line 1782 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 182 "calc.y" /* yacc.c:1646  */
    {std::string code = ""; code += (yyvsp[-3].type_id).name; code += "["; char ch [1024]; sprintf(ch, "%d", (yyvsp[-1].type_id).val); code += ch; code += "]"; std::cout << code << std::endl; (yyval.type_id).name = (char *)code.c_str();}
#line 1788 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 184 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing identifier in line %d\n", currLine);}
#line 1794 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 186 "calc.y" /* yacc.c:1646  */
    {std::string code = ""; code += (yyvsp[-6].type_id).name; code += "["; char ch [1024]; sprintf(ch, "%d", (yyvsp[-4].type_id).val); code += ch; code += "]"; code += "["; sprintf(ch, "%d", (yyvsp[-1].type_id).val); code += ch; code += "]"; std::cout << code << std::endl; (yyval.type_id).name = (char *)code.c_str();}
#line 1800 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 188 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing expression in line %d\n", currLine);}
#line 1806 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 190 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing expression in line %d\n", currLine);}
#line 1812 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 192 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing expression in line %d\n", currLine);}
#line 1818 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 196 "calc.y" /* yacc.c:1646  */
    {(yyval.type_id).name = (yyvsp[0].type_id).name;}
#line 1824 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 198 "calc.y" /* yacc.c:1646  */
    {}
#line 1830 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 200 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing variable in line %d\n", currLine);}
#line 1836 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 202 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing variables in line %d\n", currLine);}
#line 1842 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 206 "calc.y" /* yacc.c:1646  */
    {(yyval.type_id).val = (yyvsp[0].type_id).val;}
#line 1848 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 208 "calc.y" /* yacc.c:1646  */
    { }
#line 1854 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 210 "calc.y" /* yacc.c:1646  */
    {printf("expression->multiplicative_expression MINUS multiplicative_expression\n");}
#line 1860 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 212 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: Missing first term for addition at line %d\n", currLine);}
#line 1866 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 214 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: Missing second term for addition at line %d\n", currLine);}
#line 1872 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 216 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: No terms for PLUS available at line %d\n", currLine);}
#line 1878 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 218 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: Missing second term for subtraction at line %d\n", currLine);}
#line 1884 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 221 "calc.y" /* yacc.c:1646  */
    {(yyval.type_id).val = (yyvsp[0].type_id).val;}
#line 1890 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 225 "calc.y" /* yacc.c:1646  */
    {(yyval.type_id).val = (yyvsp[0].type_id).val;}
#line 1896 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 227 "calc.y" /* yacc.c:1646  */
    {printf("multiplicative_expression->term MULT term\n");}
#line 1902 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 229 "calc.y" /* yacc.c:1646  */
    {printf("multiplicative_expression->term DIV term\n");}
#line 1908 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 231 "calc.y" /* yacc.c:1646  */
    {printf("multiplicative_expression->term PER term\n");}
#line 1914 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 233 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: Missing first term for multiplication at line %d\n", currLine);}
#line 1920 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 235 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: Missing second term for multiplication at line %d\n", currLine);}
#line 1926 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 237 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: Missing first term for division at line %d\n", currLine);}
#line 1932 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 239 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: Missing second term for division at line %d\n", currLine);}
#line 1938 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 241 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: Missing first term for modulus at line %d\n", currLine);}
#line 1944 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 243 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: Missing second term for modulus at line %d\n", currLine);}
#line 1950 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 245 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: No terms for MULT available at line %d\n", currLine);}
#line 1956 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 247 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: No terms for DIV available at line %d\n", currLine);}
#line 1962 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 249 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: No terms for PER available at line %d\n", currLine);}
#line 1968 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 254 "calc.y" /* yacc.c:1646  */
    {printf("term->identifier L_PAREN expressions R_PAREN\n");}
#line 1974 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 256 "calc.y" /* yacc.c:1646  */
    {printf("term->Var\n");}
#line 1980 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 258 "calc.y" /* yacc.c:1646  */
    {(yyval.type_id).val = (yyvsp[0].type_id).val;}
#line 1986 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 260 "calc.y" /* yacc.c:1646  */
    {printf("term->L_PAREN expressions R_PAREN\n");}
#line 1992 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 262 "calc.y" /* yacc.c:1646  */
    {printf("term->MINUS var\n");}
#line 1998 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 264 "calc.y" /* yacc.c:1646  */
    {}
#line 2004 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 266 "calc.y" /* yacc.c:1646  */
    {printf("term->MINUS L_PAREN expressions R_PAREN\n");}
#line 2010 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2014 "parser.tab.c" /* yacc.c:1646  */
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
#line 269 "calc.y" /* yacc.c:1906  */


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
