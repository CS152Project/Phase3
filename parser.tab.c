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

/* #define YY_NO_UNPUT */ 
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <map>
#include <vector>
#include <fstream>
void yyerror(const char *msg);
extern FILE * yyin;
extern int currLine;
extern int currPos;
int yylex(void);
bool no_error = true;
std::string Temp();
std::string newLabel();
 
std::string Temp() // This is so we can generate temps 
{
   static int num_temps = 0;
   std::string temp = "__temp__" + std::to_string(num_temps++);
   return temp;
}
std::string newLabel()
   {
     static int num_labels = 0;
     std::string label = "__Label__" + std::to_string(num_labels++);
     return label;
   }
std::string final_code = ""; // global variable so we run the code
std::string filename = "";

#line 100 "parser.tab.c" /* yacc.c:339  */

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
    RETURN = 303,
    ASSIGN = 304,
    IDENT = 305,
    TRUE = 306,
    FALSE = 307,
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
#line 35 "calc.y" /* yacc.c:355  */
   
  struct _typeId
    {
      char *name;
      int val;
      int datatype;
    } type_id;  

#line 207 "parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 224 "parser.tab.c" /* yacc.c:358  */

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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   431

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  97
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  211

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
       0,    69,    69,    82,    85,    91,    92,    95,   109,   110,
     113,   115,   117,   120,   122,   124,   126,   128,   130,   134,
     136,   141,   142,   144,   146,   148,   151,   176,   179,   181,
     183,   185,   187,   195,   197,   205,   207,   209,   213,   215,
     313,   315,   414,   416,   418,   420,   422,   520,   522,   524,
     526,   528,   531,   533,   535,   537,   539,   541,   543,   547,
     549,   551,   553,   555,   557,   559,   563,   565,   567,   569,
     573,   575,   672,   771,   773,   775,   777,   780,   784,   786,
     885,   984,  1078,  1080,  1082,  1084,  1086,  1088,  1090,  1092,
    1094,  1099,  1101,  1103,  1105,  1107,  1109,  1111
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
  "EQ", "NEQ", "LT", "GT", "GTE", "LTE", "AND", "OR", "NOT", "RETURN",
  "ASSIGN", "IDENT", "TRUE", "FALSE", "NUMBER", "ADD", "SUB", "MUlT",
  "UMINUS", "$accept", "start_program", "program", "functions", "function",
  "declarations", "declaration", "ident", "statements", "statement",
  "bool_expression", "relation_and_expression", "relation_expression",
  "comp", "var", "vars", "expression", "expressions",
  "multiplicative_expression", "term", YY_NULLPTR
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

#define YYPACT_NINF -50

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-50)))

#define YYTABLE_NINF -22

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      11,   -34,    26,   -50,    11,    11,    37,   -50,   -50,   -50,
      21,   173,    29,    47,    56,   134,     9,     1,    90,    84,
     115,     1,    81,   116,     8,   -50,   -50,   -50,    71,   -50,
      29,   -50,   -50,   -50,   -50,   168,   126,   120,   166,   179,
     311,    63,    44,    30,    46,    99,   -50,    17,    17,   183,
      10,   182,   184,   189,   165,   169,   196,   230,    10,   108,
     224,   -50,   108,   -50,   108,   187,   413,    33,    65,    77,
       3,   -50,   -50,   -50,   212,   203,   194,   197,   -50,   -50,
     176,    91,   156,   221,   346,    10,   -50,    87,   -50,   230,
     265,    10,   229,   -50,   -50,   231,    99,   132,   199,    89,
     131,   135,   149,   238,    10,   -50,   -50,   379,   236,   290,
      72,   -50,   -50,   176,    10,   288,    17,    17,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,    10,   151,   155,   171,   175,
     177,   346,   233,   240,   274,   243,   -50,    44,   -50,   -50,
     237,   -50,   -50,   108,   -50,   266,   238,   -50,   238,   -50,
      96,   -50,   238,   -50,   250,   -50,   -50,   -50,   400,   253,
      10,   254,   146,   -50,   -50,   -50,   413,   -50,   413,   -50,
      96,   -50,    96,   -50,    96,   -50,   251,   242,   259,   268,
     257,    17,   -50,   -50,   -50,   -50,   -50,   -50,   369,   -50,
      17,    10,   191,   -50,   293,   273,   -50,   282,   355,   289,
      99,   -50,   -50,   -50,   -50,   258,    10,   285,   346,   291,
     -50
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     2,     3,     5,     0,     1,     4,     6,
       0,     0,     0,    19,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    16,    20,     0,    11,
      12,     9,    17,    18,    13,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    36,     0,     0,     0,
       0,    59,     0,     0,     0,     0,     0,     0,     0,    33,
      66,    32,    35,    34,     0,     0,     0,     0,     0,     0,
      59,    47,    48,    93,     0,     0,    38,    40,    92,    77,
       0,    70,    78,     0,     0,     0,    37,     0,     7,     0,
       0,     0,     0,    14,    24,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    96,    95,     0,     0,     0,
       0,    43,    44,     0,     0,     0,     0,     0,    58,    52,
      53,    54,    55,    56,    57,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    25,    23,    22,    26,
       0,    61,    68,    69,    67,     0,    88,    82,    89,    84,
      75,    73,    90,    86,     0,    50,    49,    94,     0,     0,
       0,     0,     0,    39,    41,    46,    74,    71,    76,    72,
      83,    79,    85,    80,    87,    81,     0,     0,    63,    60,
       0,     0,    97,    51,    45,    42,    91,    27,     0,    29,
       0,     0,     0,    15,     0,     0,    30,     0,     0,     0,
       0,    28,    64,    65,    62,     0,     0,     0,     0,     0,
      31
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -50,   -50,   306,   309,   -50,   322,   -50,   232,   -44,   -50,
     -36,   201,   207,   222,   -40,   -38,   -33,   -49,   105,   110
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     4,     5,    14,    15,    74,    52,    53,
      75,    76,    77,   125,    78,    61,    79,    80,    81,    82
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      54,    86,    12,    60,    60,    60,    63,    65,    19,    33,
      23,    66,    83,    94,     1,    24,     6,    54,    66,   109,
     113,    87,    67,   -19,    -8,    95,     7,   106,    -8,    67,
      85,    59,   108,    17,   103,    18,   133,    68,    34,    35,
     132,    10,   139,    11,    54,   136,   138,    62,    57,    54,
      54,    13,    19,   104,   135,   154,    60,    60,   142,   144,
      70,   109,    58,    73,    69,   161,   107,    70,    71,    72,
      73,   162,    12,   158,   159,    54,   165,    67,    66,    20,
      51,    55,    30,    51,    67,    68,   105,   176,   134,    67,
     146,    54,    68,   167,   169,    56,    51,   110,    -8,    67,
      64,    67,   126,   127,    -8,    99,   100,    85,    -8,    85,
     102,   185,    69,    96,    58,    70,    71,    72,    73,    69,
      26,    13,    70,    71,    72,    73,    58,    70,   111,   112,
      73,    13,   148,   143,    13,    21,   150,    70,    22,    70,
      73,    28,    73,    67,   195,   194,    32,    67,    54,    51,
     152,    85,   166,    38,   196,    85,   168,   207,   197,   199,
      60,    67,   205,    67,   209,   128,   129,    67,    54,    85,
     130,    85,   170,    39,    12,    85,   172,   118,   174,   187,
     188,    70,    51,    67,    73,    70,    37,    67,    73,    67,
      89,    85,   198,    90,    40,    85,    -8,    85,    41,    70,
      87,    70,    73,    67,    73,    70,   151,    84,    73,   147,
     149,    85,   153,    88,    91,   119,   120,   121,   122,   123,
     124,    70,    92,    13,    73,    70,    93,    70,    73,    97,
      73,    42,   114,   171,   173,   175,    98,    43,    44,   115,
     116,    70,   117,    16,    73,   131,    45,    46,   140,    16,
     141,    27,   145,    16,    16,   -21,    58,   156,   177,   -21,
      16,   157,   179,   -21,   -21,    47,   137,    48,    49,   180,
     181,   182,    43,    44,   184,   186,   189,   191,    50,   190,
      51,    45,    46,    99,   100,   101,   192,   193,   102,    42,
     -21,   118,    58,   178,   -21,    43,    44,   200,   -21,   -21,
      47,   202,    48,    49,    45,    46,   201,   206,   204,   208,
       8,   157,    42,    50,     9,    51,   210,   163,    43,    44,
       0,   -21,   -21,    47,   164,    48,    49,    45,    46,   119,
     120,   121,   122,   123,   124,   160,    50,     0,    51,    25,
     -21,     0,     0,    29,    31,     0,    47,    42,    48,    49,
      36,     0,     0,    43,    44,     0,     0,     0,     0,    50,
       0,    51,    45,    46,    99,   100,   101,     0,     0,   102,
      42,   -21,     0,    58,   203,     0,    43,    44,     0,     0,
       0,    47,     0,    48,    49,    45,    46,     0,    99,   100,
     101,     0,     0,   102,    50,     0,    51,    58,     0,     0,
     155,     0,   -21,     0,    47,     0,    48,    49,     0,    99,
     100,   101,     0,     0,   102,     0,     0,    50,    58,    51,
       0,   183,    99,   100,   101,     0,     0,   102,     0,     0,
       0,    58
};

static const yytype_int16 yycheck[] =
{
      40,    50,     1,    43,    44,    45,    44,    45,     5,     1,
       1,     1,    48,    57,     3,     6,    50,    57,     1,    68,
      69,    18,    12,    20,    23,    58,     0,    67,    27,    12,
      20,     1,    68,     4,     1,     6,    85,    20,    30,    31,
      84,     4,    91,    22,    84,    89,    90,     1,     4,    89,
      90,    50,     5,    20,    87,   104,    96,    97,    96,    97,
      50,   110,    18,    53,    47,   114,     1,    50,    51,    52,
      53,   115,     1,     1,   110,   115,   125,    12,     1,    23,
      50,    18,     1,    50,    12,    20,    53,   131,     1,    12,
       1,   131,    20,   126,   127,    32,    50,    20,    27,    12,
       1,    12,    11,    12,    23,     9,    10,    20,    27,    20,
      14,   160,    47,     5,    18,    50,    51,    52,    53,    47,
      30,    50,    50,    51,    52,    53,    18,    50,    51,    52,
      53,    50,     1,     1,    50,     1,     1,    50,     4,    50,
      53,    26,    53,    12,   188,   181,    30,    12,   188,    50,
       1,    20,     1,    27,   190,    20,     1,   206,   191,   192,
     200,    12,   200,    12,   208,     9,    10,    12,   208,    20,
      14,    20,     1,    53,     1,    20,     1,     1,     1,    33,
      34,    50,    50,    12,    53,    50,    18,    12,    53,    12,
       1,    20,     1,     4,    28,    20,    23,    20,    19,    50,
      18,    50,    53,    12,    53,    50,   101,    24,    53,    99,
     100,    20,   102,    29,    49,    39,    40,    41,    42,    43,
      44,    50,    53,    50,    53,    50,    30,    50,    53,     5,
      53,     1,    20,   128,   129,   130,    49,     7,     8,    36,
      46,    50,    45,    11,    53,    24,    16,    17,    19,    17,
      19,    19,    53,    21,    22,    25,    18,    21,    25,    29,
      28,    21,    19,    33,    34,    35,     1,    37,    38,    32,
       4,    21,     7,     8,    21,    21,    25,    18,    48,    37,
      50,    16,    17,     9,    10,    11,    18,    30,    14,     1,
      25,     1,    18,    19,    29,     7,     8,     4,    33,    34,
      35,    19,    37,    38,    16,    17,    33,    49,    19,    24,
       4,    21,     1,    48,     5,    50,    25,   116,     7,     8,
      -1,    33,    34,    35,   117,    37,    38,    16,    17,    39,
      40,    41,    42,    43,    44,   113,    48,    -1,    50,    17,
      29,    -1,    -1,    21,    22,    -1,    35,     1,    37,    38,
      28,    -1,    -1,     7,     8,    -1,    -1,    -1,    -1,    48,
      -1,    50,    16,    17,     9,    10,    11,    -1,    -1,    14,
       1,    25,    -1,    18,    19,    -1,     7,     8,    -1,    -1,
      -1,    35,    -1,    37,    38,    16,    17,    -1,     9,    10,
      11,    -1,    -1,    14,    48,    -1,    50,    18,    -1,    -1,
      21,    -1,    33,    -1,    35,    -1,    37,    38,    -1,     9,
      10,    11,    -1,    -1,    14,    -1,    -1,    48,    18,    50,
      -1,    21,     9,    10,    11,    -1,    -1,    14,    -1,    -1,
      -1,    18
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    59,    60,    61,    62,    50,     0,    60,    61,
       4,    22,     1,    50,    63,    64,    65,     4,     6,     5,
      23,     1,     4,     1,     6,    63,    30,    65,    26,    63,
       1,    63,    30,     1,    30,    31,    63,    18,    27,    53,
      28,    19,     1,     7,     8,    16,    17,    35,    37,    38,
      48,    50,    66,    67,    72,    18,    32,     4,    18,     1,
      72,    73,     1,    73,     1,    73,     1,    12,    20,    47,
      50,    51,    52,    53,    65,    68,    69,    70,    72,    74,
      75,    76,    77,    68,    24,    20,    75,    18,    29,     1,
       4,    49,    53,    30,    66,    74,     5,     5,    49,     9,
      10,    11,    14,     1,    20,    53,    72,     1,    68,    75,
      20,    51,    52,    75,    20,    36,    46,    45,     1,    39,
      40,    41,    42,    43,    44,    71,    11,    12,     9,    10,
      14,    24,    66,    75,     1,    74,    66,     1,    66,    75,
      19,    19,    73,     1,    73,    53,     1,    77,     1,    77,
       1,    76,     1,    77,    75,    21,    21,    21,     1,    68,
      71,    75,    66,    69,    70,    75,     1,    74,     1,    74,
       1,    76,     1,    76,     1,    76,    66,    25,    19,    19,
      32,     4,    21,    21,    21,    75,    21,    33,    34,    25,
      37,    18,    18,    30,    68,    66,    68,    74,     1,    74,
       4,    33,    19,    19,    19,    73,    49,    75,    24,    66,
      25
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    60,    60,    61,    61,    62,    63,    63,
      63,    63,    63,    64,    64,    64,    64,    64,    64,    65,
      65,    66,    66,    66,    66,    66,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    68,    68,
      69,    69,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    71,    71,    71,    71,    71,    71,    71,    72,
      72,    72,    72,    72,    72,    72,    73,    73,    73,    73,
      74,    74,    74,    74,    74,    74,    74,    75,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    77,    77,    77,    77,    77,    77,    77
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     0,     2,    12,     0,     3,
       3,     3,     3,     3,     8,    11,     3,     3,     3,     1,
       3,     0,     3,     3,     3,     3,     3,     5,     7,     5,
       6,    13,     2,     2,     2,     2,     1,     2,     1,     3,
       1,     3,     4,     2,     2,     4,     3,     1,     1,     3,
       3,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     4,     7,     4,     7,     7,     1,     3,     3,     3,
       1,     3,     3,     3,     3,     3,     3,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     4,     1,     1,     3,     2,     2,     4
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
#line 70 "calc.y" /* yacc.c:1646  */
    {if(no_error)
	           {
                    // printf("%s\n", $1.name);
		     std::ofstream file;
	             filename[filename.length() - 1] = 'l'; 
                     file.open (filename.c_str(), std::ios::app);
                     file << final_code;
	             file.close();        
                   }
                }
#line 1498 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 82 "calc.y" /* yacc.c:1646  */
    {
       // std::string tempMain = "";
       }
#line 1506 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 86 "calc.y" /* yacc.c:1646  */
    {
        (yyval.type_id).name = (yyvsp[-1].type_id).name;
       }
#line 1514 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 91 "calc.y" /* yacc.c:1646  */
    {}
#line 1520 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 93 "calc.y" /* yacc.c:1646  */
    {(yyval.type_id).name = (yyvsp[-1].type_id).name;}
#line 1526 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 96 "calc.y" /* yacc.c:1646  */
    {
       	  std::string *code = new std::string; // Intialize string code pointer
          code->append("func "); // add or append to func, should output func in mil file
	  code->append((yyvsp[-10].type_id).name); 
          code->append("\n"); // add new line
          final_code.insert(0, *code); 
          final_code.append("endfunc"); 
          final_code.append("\n");
	  std::cout << *code << std::endl;
          (yyval.type_id).name = (yyvsp[-10].type_id).name;
        }
#line 1542 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 109 "calc.y" /* yacc.c:1646  */
    {/*$$.name = "" */}
#line 1548 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 111 "calc.y" /* yacc.c:1646  */
    { 
          }
#line 1555 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 114 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: Missing declaration at line %d\n", currLine);}
#line 1561 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 116 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: Missing SEMICOLON at line %d\n", currLine);}
#line 1567 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 118 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: Missing declarations at line %d\n", currLine);}
#line 1573 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 121 "calc.y" /* yacc.c:1646  */
    {std::string x; x = (yyvsp[-2].type_id).name; std::string code = ""; code += ". "; code += x; code += "\n"; final_code.append(code); std::cout << code << std::endl;}
#line 1579 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 123 "calc.y" /* yacc.c:1646  */
    {std::string code = ""; code += (yyvsp[-7].type_id).name; code += ":"; code += " array "; code += "["; char ch [1024]; sprintf(ch, "%d", (yyvsp[-7].type_id).val); code += ch; code += "]"; code += " of "; code += " integer "; final_code.append(code); std:: cout << code << std::endl; (yyval.type_id).name = (char*)code.c_str();}
#line 1585 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 125 "calc.y" /* yacc.c:1646  */
    {std::string code = ""; code += (yyvsp[-10].type_id).name; code += ":"; code += " array "; code += "["; char ch [1024]; sprintf(ch, "%d", (yyvsp[-10].type_id).val); code += ch; code += "]"; code += "["; sprintf(ch, "%d", (yyvsp[-10].type_id).val); code += ch; code += "]"; code += " of "; code += " integer "; final_code.append(code); std:: cout << code << std::endl; (yyval.type_id).name = (char*)code.c_str();}
#line 1591 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 127 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing identifier at line %d\n", currLine);}
#line 1597 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 129 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing COLON at line %d\n", currLine);}
#line 1603 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 131 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing INTEGER at line %d\n", currLine);}
#line 1609 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 135 "calc.y" /* yacc.c:1646  */
    {(yyval.type_id).name = (yyvsp[0].type_id).name;}
#line 1615 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 137 "calc.y" /* yacc.c:1646  */
    {std::string *code = new std::string(); code->append((yyvsp[-2].type_id).name); code->append("\n"); code->append(". "); code->append((yyvsp[0].type_id).name); code->append("\n"); 
           (yyval.type_id).name = (char*)code->c_str();}
#line 1622 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 141 "calc.y" /* yacc.c:1646  */
    {}
#line 1628 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 143 "calc.y" /* yacc.c:1646  */
    {printf("statement->statement SEMICOLON statements\n");}
#line 1634 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 145 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing statements at line %d\n", currLine);}
#line 1640 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 147 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing statement at line %d\n", currLine);}
#line 1646 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 149 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing SEMICOLON at line %d\n", currLine);}
#line 1652 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 152 "calc.y" /* yacc.c:1646  */
    {if((yyvsp[0].type_id).datatype == 1) 
            {
               printf("= %s, %s\n", (yyvsp[-2].type_id).name, (yyvsp[0].type_id).name);
               std::string *code = new std::string(); //created a new string code pointer and intialized the code pointer
               code->append("= "); // add or append =, which should output to mil
               code->append((yyvsp[-2].type_id).name);  
               code->append(", "); 
               code->append((yyvsp[0].type_id).name);
               code->append("\n");
               final_code.append(*code); 
               
            }
            else
             {
               printf("= %s, %d\n", (yyvsp[-2].type_id).name, (yyvsp[0].type_id).val);
               std::string *code = new std::string(); //created a new string pointer called code and initialized code pointer
               code->append("= "); // append = to code, output to mil
               code->append((yyvsp[-2].type_id).name); // output to mil 
               code->append(", "); 
               code->append(std::to_string((yyvsp[0].type_id).val)); // first append then convert the string to a number
               code->append("\n");
               final_code.append(*code); 
             }
           }
#line 1681 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 177 "calc.y" /* yacc.c:1646  */
    {     
           }
#line 1688 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 180 "calc.y" /* yacc.c:1646  */
    {}
#line 1694 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 182 "calc.y" /* yacc.c:1646  */
    {printf("statement->WHILE bool_expression BEGINLOOP statements SEMICOLON ENDLOOP\n");}
#line 1700 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 184 "calc.y" /* yacc.c:1646  */
    {printf("statement->DO BEGINLOOP statements SEMICOLON ENDLOOP WHILE bool_expression\n");}
#line 1706 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 186 "calc.y" /* yacc.c:1646  */
    {printf("statement->FOR vars ASSIGN NUMBER SEMICOLON bool_expression SEMICOLON vars ASSIGN expressions BEGINLOOP statements SEMICOLON ENDLOOP\n");}
#line 1712 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 188 "calc.y" /* yacc.c:1646  */
    {printf(".< %s\n", (yyvsp[0].type_id).name);
          std::string *code = new std::string();
          code->append(".< ");
          code->append((yyvsp[0].type_id).name);
          code->append("\n");
          final_code.append(*code); 
         }
#line 1724 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 196 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: no variables at line %d\n", currLine);}
#line 1730 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 198 "calc.y" /* yacc.c:1646  */
    {printf(".> %s\n", (yyvsp[0].type_id).name);
          std::string *code = new std::string();
          code->append(".> ");
          code->append((yyvsp[0].type_id).name);
          code->append("\n");
          final_code.append(*code); 
         }
#line 1742 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 206 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: no variable at line %d\n", currLine);}
#line 1748 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 208 "calc.y" /* yacc.c:1646  */
    {printf(". continue\n");}
#line 1754 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 210 "calc.y" /* yacc.c:1646  */
    {printf("statement->RETURN expressions\n");}
#line 1760 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 214 "calc.y" /* yacc.c:1646  */
    {(yyval.type_id).name = (yyvsp[0].type_id).name; (yyval.type_id).datatype = 1;}
#line 1766 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 216 "calc.y" /* yacc.c:1646  */
    {if((yyvsp[-2].type_id).datatype == 1 || (yyvsp[0].type_id).datatype == 1)
                 {
                    std::string *code = new std::string; 
                    std::string *tmp = new std::string;
                    std::string *x = new std::string;
                    x->append(". ");
                    tmp->append(Temp());
                    x->append(*tmp);
                    x->append("\n");
                    final_code.append(*x);
                    code->append("|| ");
                    code->append(*tmp); 
                    code->append(", ");
                    code->append((yyvsp[-2].type_id).name);
                    code->append(", ");
                    code->append((yyvsp[0].type_id).name);
                    final_code.append(*code);
                    final_code.append("\n");
                    std::cout << *code << std::endl;
                    (yyval.type_id).name = (char *)(code->c_str());
                    (yyval.type_id).datatype = 1; 
                 } 
	        else if((yyvsp[-2].type_id).datatype == 1 || (yyvsp[0].type_id).datatype == 0)
                 {
                    std::string *code = new std::string;
	            std::string *tmp = new std::string;
                    std::string *x = new std::string; 
                    x->append(". ");
	            tmp->append(Temp());
                    x->append(*tmp);
                    x->append("\n");
                    final_code.append(*x);
	            code->append("|| " );
	            code->append(*tmp);
	            code->append(", ");
   	            code->append((yyvsp[-2].type_id).name);
	            code->append(", ");
                    char ch[1024];
	            sprintf(ch, "%d", (yyvsp[0].type_id).val);
		    code->append(ch);
	            std::cout << *code << std::endl;
                    final_code.append(*code);
                    final_code.append("\n");
		    (yyval.type_id).name = (char *)(tmp->c_str()); 
	            (yyval.type_id).datatype = 1; 
                 }      
               else if((yyvsp[-2].type_id).datatype == 0 || (yyvsp[0].type_id).datatype == 1)
                 {           
                    std::string *code = new std::string;
	            std::string *tmp = new std::string; 
                    std::string *x = new std::string;
                    x->append(". ");
	            tmp->append(Temp());
                    x->append(*tmp);
                    x->append("\n");
                    final_code.append(*x);
	      //    tmp->append(Temp());
	            code->append("|| ");
		    code->append(*tmp);
	            code->append(", ");
   		    code->append(std::to_string((yyvsp[-2].type_id).val));
		    code->append(", ");
		    code->append((yyvsp[0].type_id).name);
	            std::cout << *code << std::endl;
                    final_code.append(*code);
                    final_code.append("\n");
		    (yyval.type_id).name = (char *)(tmp->c_str());
	            (yyval.type_id).datatype = 1; 
                }  
	       else
                {    
	            std::string *code = new std::string;
	            std::string *tmp = new std::string; 
                    std::string *x = new std::string; 
                    x->append(". ");
	            tmp->append(Temp());
                    x->append(*tmp);
                    x->append("\n");
                    final_code.append(*x);
	      //    tmp->append(Temp());
	            code->append("|| ");
	            code->append(*tmp);
	            code->append(", ");
                    char ch[1024];
	            sprintf(ch, "%d", (yyvsp[-2].type_id).val);
	            code->append(ch);
	            code->append(", ");
                    sprintf(ch, "%d", (yyvsp[0].type_id).val);
	            code->append(ch);
	            std::cout << *code << std::endl;
                    final_code.append(*code);
                    final_code.append("\n");
	            (yyval.type_id).name = (char *)tmp->c_str();
                    (yyval.type_id).datatype = 1; 
                }
               }
#line 1867 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 314 "calc.y" /* yacc.c:1646  */
    {(yyval.type_id).name = (yyvsp[0].type_id).name; (yyval.type_id).datatype = 1;}
#line 1873 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 316 "calc.y" /* yacc.c:1646  */
    {if((yyvsp[-2].type_id).datatype == 1 && (yyvsp[0].type_id).datatype == 1)
                  {
                    std::string *code = new std::string; 
                    std::string *tmp = new std::string;
                    std::string *x = new std::string; 
                    x->append(". ");
                    tmp->append(Temp());
                    x->append(*tmp);
                    x->append("\n");
                  //  code->append(*tmp);
                    final_code.append(*x);
                    code->append("&& ");
                    code->append(*tmp); 
                    code->append(", ");
                    code->append((yyvsp[-2].type_id).name);
                    code->append(", ");
                    code->append((yyvsp[0].type_id).name);
                    final_code.append(*code);
                    final_code.append("\n");
                    std::cout << *code << std::endl;
                    (yyval.type_id).name = (char *)(code->c_str());
                    (yyval.type_id).datatype = 1; 
                 } 
	        else if((yyvsp[-2].type_id).datatype == 1 && (yyvsp[0].type_id).datatype == 0)
                 {
                    std::string *code = new std::string;
	            std::string *tmp = new std::string;
                    std::string *x = new std::string;
                    x->append(". ");
	            tmp->append(Temp());
                    x->append(*tmp);
                    x->append("\n");
                    final_code.append(*x);
	            code->append("&& " );
	            code->append(*tmp);
	            code->append(", ");
   	            code->append((yyvsp[-2].type_id).name);
	            code->append(", ");
                    char ch[1024];
	            sprintf(ch, "%d", (yyvsp[0].type_id).val);
		    code->append(ch);
	            std::cout << *code << std::endl;
                    final_code.append(*code);
                    final_code.append("\n");
		    (yyval.type_id).name = (char *)(tmp->c_str()); 
	            (yyval.type_id).datatype = 1; 
                 }      
               else if((yyvsp[-2].type_id).datatype == 0 && (yyvsp[0].type_id).datatype == 1)
                 {           
                    std::string *code = new std::string;
	            std::string *tmp = new std::string; 
                    std::string *x = new std::string;
                    x->append(". ");
	            tmp->append(Temp());
                    x->append(*tmp);
                    x->append("\n");
                    final_code.append(*x);
	      //    tmp->append(Temp());
	            code->append("&& ");
		    code->append(*tmp);
	            code->append(", ");
   		    code->append(std::to_string((yyvsp[-2].type_id).val));
		    code->append(", ");
		    code->append((yyvsp[0].type_id).name);
	            std::cout << *code << std::endl;
                    final_code.append(*code);
                    final_code.append("\n");
		    (yyval.type_id).name = (char *)(tmp->c_str());
	            (yyval.type_id).datatype = 1; 
                }  
	       else
                {    
	            std::string *code = new std::string;
	            std::string *tmp = new std::string; 
                    std::string *x = new std::string;
                    x->append(". ");
	            tmp->append(Temp());
                    x->append(*tmp);
                    x->append("\n");
                    final_code.append(*x);
	      //    tmp->append(Temp());
	            code->append("&& ");
	            code->append(*tmp);
	            code->append(", ");
                    char ch[1024];
	            sprintf(ch, "%d", (yyvsp[-2].type_id).val);
	            code->append(ch);
	            code->append(", ");
                    sprintf(ch, "%d", (yyvsp[0].type_id).val);
	            code->append(ch);
	            std::cout << *code << std::endl;
                    final_code.append(*code);
                    final_code.append("\n");
	            (yyval.type_id).name = (char *)tmp->c_str();
                    (yyval.type_id).datatype = 1; 
                }
              }
#line 1975 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 415 "calc.y" /* yacc.c:1646  */
    {printf("relation_expression->NOT expressions comp expressions\n");}
#line 1981 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 417 "calc.y" /* yacc.c:1646  */
    { }
#line 1987 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 419 "calc.y" /* yacc.c:1646  */
    {printf("relation_expression->NOT FALSE\n");}
#line 1993 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 421 "calc.y" /* yacc.c:1646  */
    {printf("relation_expression->NOT L_PAREN bool_expressions R_PAREN\n");}
#line 1999 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 423 "calc.y" /* yacc.c:1646  */
    {if((yyvsp[-2].type_id).datatype == 1 && (yyvsp[0].type_id).datatype == 1)
              { 
       	         std::string *code = new std::string;
             	 std::string *tmp = new std::string;
                 std::string *x = new std::string;
                 x->append(". ");
	         tmp->append(Temp());
                 x->append(*tmp);
                 x->append("\n");
                // code->append(*tmp);
                 final_code.append(*code);
               	 code->append((yyvsp[-1].type_id).name);
	         code->append(*tmp);
	         code->append(", ");
   	         code->append((yyvsp[-2].type_id).name);
	         code->append(", ");
		 code->append((yyvsp[0].type_id).name);
                 final_code.append(*code);
                 final_code.append("\n");
	         std::cout << *code << std::endl;
		 (yyval.type_id).name = (char *)(tmp->c_str());
                 (yyval.type_id).datatype = 1; 
             }   
	     else if((yyvsp[-2].type_id).datatype == 1 && (yyvsp[0].type_id).datatype == 0)
             {
                 std::string *code = new std::string;
	         std::string *tmp = new std::string;
                 std::string *x = new std::string;
                 x->append(". ");
	         tmp->append(Temp());
                 x->append(*tmp);
                 x->append("\n");
                 final_code.append(*x);
	         code->append((yyvsp[-1].type_id).name);
	         code->append(*tmp);
	         code->append(", ");
   	         code->append((yyvsp[-2].type_id).name);
	         code->append(", ");
                 char ch[1024];
	         sprintf(ch, "%d", (yyvsp[0].type_id).val);
		 code->append(ch);
	         std::cout << *code << std::endl;
                 final_code.append(*code);
                 final_code.append("\n");
		 (yyval.type_id).name = (char *)(tmp->c_str()); 
	         (yyval.type_id).datatype = 1; 
             }      
           else if((yyvsp[-2].type_id).datatype == 0 && (yyvsp[0].type_id).datatype == 1)
             {           
                 std::string *code = new std::string;
	         std::string *tmp = new std::string; 
                 std::string *x = new std::string;
                 x->append(". ");
	         tmp->append(Temp());
                 x->append(*tmp);
                 x->append("\n");
                 final_code.append(*x);
	      // tmp->append(Temp());
	         code->append((yyvsp[-1].type_id).name);
		 code->append(*tmp);
	         code->append(", ");
   		 code->append(std::to_string((yyvsp[-2].type_id).val));
		 code->append(", ");
		 code->append((yyvsp[0].type_id).name);
	         std::cout << *code << std::endl;
                 final_code.append(*code);
                 final_code.append("\n");
		 (yyval.type_id).name = (char *)(tmp->c_str());
	         (yyval.type_id).datatype = 1; 
             }  
	   else
             {    
	         std::string *code = new std::string;
	         std::string *tmp = new std::string; 
                 std::string *x = new std::string;
                 x->append(". ");
	         tmp->append(Temp());
                 x->append(*tmp);
                 x->append("\n");
                 final_code.append(*x);
	      // tmp->append(Temp());
	         code->append((yyvsp[-1].type_id).name);
	         code->append(*tmp);
	         code->append(", ");
                 char ch[1024];
	         sprintf(ch, "%d", (yyvsp[-2].type_id).val);
	         code->append(ch);
	         code->append(", ");
                 sprintf(ch, "%d", (yyvsp[0].type_id).val);
	         code->append(ch);
	         std::cout << *code << std::endl;
                 final_code.append(*code);
                 final_code.append("\n");
	         (yyval.type_id).name = (char *)tmp->c_str();
                 (yyval.type_id).datatype = 1; 
            }
          }
#line 2101 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 521 "calc.y" /* yacc.c:1646  */
    {(yyval.type_id).name = (yyvsp[0].type_id).name;}
#line 2107 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 523 "calc.y" /* yacc.c:1646  */
    {(yyval.type_id).name = (yyvsp[0].type_id).name;}
#line 2113 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 525 "calc.y" /* yacc.c:1646  */
    {printf("relation_expression->L_PAREN bool_expressions R_PAREN\n");}
#line 2119 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 527 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing bool_expression in line %d\n", currLine);}
#line 2125 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 529 "calc.y" /* yacc.c:1646  */
    {printf("synax error: missing bool_expression in line %d\n", currLine);}
#line 2131 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 532 "calc.y" /* yacc.c:1646  */
    {(yyval.type_id).name = (char *)("== ");}
#line 2137 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 534 "calc.y" /* yacc.c:1646  */
    {(yyval.type_id).name = (char *)("!= ");}
#line 2143 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 536 "calc.y" /* yacc.c:1646  */
    {(yyval.type_id).name = (char *)("< ");}
#line 2149 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 538 "calc.y" /* yacc.c:1646  */
    {(yyval.type_id).name = (char *)("> ");}
#line 2155 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 540 "calc.y" /* yacc.c:1646  */
    {(yyval.type_id).name = (char *)(">= ");}
#line 2161 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 542 "calc.y" /* yacc.c:1646  */
    {(yyval.type_id).name = (char *)("<= ");}
#line 2167 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 544 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing EQ, NEQ, LT, GT, GTE or LTE in line %d\n", currLine);}
#line 2173 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 548 "calc.y" /* yacc.c:1646  */
    {(yyval.type_id).name = (yyvsp[0].type_id).name; (yyval.type_id).datatype = 1;}
#line 2179 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 550 "calc.y" /* yacc.c:1646  */
    {std::string code = ""; code += (yyvsp[-3].type_id).name; code += "["; char ch [1024]; sprintf(ch, "%d", (yyvsp[-1].type_id).val); code += ch; code += "]"; std::cout << code << std::endl; (yyval.type_id).name = (char *)code.c_str(); (yyval.type_id).datatype = 1;}
#line 2185 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 552 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing identifier in line %d\n", currLine);}
#line 2191 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 554 "calc.y" /* yacc.c:1646  */
    {std::string code = ""; code += (yyvsp[-6].type_id).name; code += "["; char ch [1024]; sprintf(ch, "%d", (yyvsp[-4].type_id).val); code += ch; code += "]"; code += "["; sprintf(ch, "%d", (yyvsp[-1].type_id).val); code += ch; code += "]"; std::cout << code << std::endl; (yyval.type_id).name = (char *)code.c_str(); (yyval.type_id).datatype = 1;}
#line 2197 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 556 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing expression in line %d\n", currLine);}
#line 2203 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 558 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing expression in line %d\n", currLine);}
#line 2209 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 560 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing expression in line %d\n", currLine);}
#line 2215 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 564 "calc.y" /* yacc.c:1646  */
    {(yyval.type_id).name = (yyvsp[0].type_id).name; (yyval.type_id).datatype = 1;}
#line 2221 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 566 "calc.y" /* yacc.c:1646  */
    {}
#line 2227 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 568 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing variable in line %d\n", currLine);}
#line 2233 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 570 "calc.y" /* yacc.c:1646  */
    {printf("syntax error: missing variables in line %d\n", currLine);}
#line 2239 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 574 "calc.y" /* yacc.c:1646  */
    {(yyval.type_id).val = (yyvsp[0].type_id).val; (yyval.type_id).datatype = (yyvsp[0].type_id).datatype;}
#line 2245 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 576 "calc.y" /* yacc.c:1646  */
    {if((yyvsp[-2].type_id).datatype == 1 && (yyvsp[0].type_id).datatype == 1)
              { 
       	         std::string *code = new std::string;
         	 std::string *tmp = new std::string;
                 std::string *x = new std::string;
                 x->append(". ");
	         tmp->append(Temp());
                 x->append(*tmp);
                 x->append("\n");
                 final_code.append(*x);
               	 code->append("+ ");
	         code->append(*tmp);
	         code->append(", ");
   	         code->append((yyvsp[-2].type_id).name);
	         code->append(", ");
		 code->append((yyvsp[0].type_id).name);
                 final_code.append(*code);
                 final_code.append("\n");
	         std::cout << *code << std::endl;
		 (yyval.type_id).name = (char *)(tmp->c_str());
                 (yyval.type_id).datatype = 1;
             }
	   else if((yyvsp[-2].type_id).datatype == 1 && (yyvsp[0].type_id).datatype == 0)
             {
                 std::string *code = new std::string;
	         std::string *tmp = new std::string;
                 std::string *x = new std::string;
                 x->append(". ");
	         tmp->append(Temp());
                 x->append(*tmp);
                 x->append("\n");
                 final_code.append(*x);
	         code->append("+ ");
	         code->append(*tmp);
	         code->append(", ");
   	         code->append((yyvsp[-2].type_id).name);
	         code->append(", ");
                 char ch[1024];
	         sprintf(ch, "%d", (yyvsp[0].type_id).val);
		 code->append(ch);
	         std::cout << *code << std::endl;
                 final_code.append(*code);
                 final_code.append("\n");
		 (yyval.type_id).name = (char *)(tmp->c_str()); 
	         (yyval.type_id).datatype = 1; 
             }      
           else if((yyvsp[-2].type_id).datatype == 0 && (yyvsp[0].type_id).datatype == 1)
             {           
                 std::string *code = new std::string;
	         std::string *tmp = new std::string; 
                 std::string *x = new std::string;
                 x->append(". ");
	         tmp->append(Temp());
                 x->append(*tmp);
                 x->append("\n");
                 final_code.append(*x);
	      // tmp->append(Temp());
	         code->append("+ ");
		 code->append(*tmp);
	         code->append(", ");
   		 code->append(std::to_string((yyvsp[-2].type_id).val));
		 code->append(", ");
		 code->append((yyvsp[0].type_id).name);
	         std::cout << *code << std::endl;
                 final_code.append(*code);
                 final_code.append("\n");
		 (yyval.type_id).name = (char *)(tmp->c_str());
	         (yyval.type_id).datatype = 1; 
             }  
	   else
             {    
	         std::string *code = new std::string;
	         std::string *tmp = new std::string; 
                 std::string *x = new std::string;
                 x->append(". ");
	         tmp->append(Temp());
                 x->append(*tmp);
                 x->append("\n");
                 final_code.append(*x);
	      // tmp->append(Temp());
	         code->append("+ ");
	         code->append(*tmp);
	         code->append(", ");
                 char ch[1024];
	         sprintf(ch, "%d", (yyvsp[-2].type_id).val);
	         code->append(ch);
	         code->append(", ");
                 sprintf(ch, "%d", (yyvsp[0].type_id).val);
	         code->append(ch);
	         std::cout << *code << std::endl;
                 final_code.append(*code);
                 final_code.append("\n");
	         (yyval.type_id).name = (char *)tmp->c_str();
                 (yyval.type_id).datatype = 1; 
            }
         }
#line 2346 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 673 "calc.y" /* yacc.c:1646  */
    {if((yyvsp[-2].type_id).datatype == 1 && (yyvsp[0].type_id).datatype == 1)
              { 
       	         std::string *code = new std::string;
         	 std::string *tmp = new std::string; 
                 std::string *x = new std::string;
                 x->append(". ");
	         tmp->append(Temp());
                 x->append(*tmp);
                 x->append("\n");
                 final_code.append(*x);
	      // tmp->append(Temp());
               	 code->append("- ");
	         code->append(*tmp);
	         code->append(", ");
   	         code->append((yyvsp[-2].type_id).name);
	         code->append(", ");
		 code->append((yyvsp[0].type_id).name);
	         std::cout << *code << std::endl;
                 final_code.append(*code);
                 final_code.append("\n");
		 (yyval.type_id).name = (char *)(tmp->c_str());
                 (yyval.type_id).datatype = 1;
             }
	   else if((yyvsp[-2].type_id).datatype == 1 && (yyvsp[0].type_id).datatype == 0)
             {
                 std::string *code = new std::string;
	         std::string *tmp = new std::string; 
                 std::string *x = new std::string;
                 x->append(". ");
	         tmp->append(Temp());
                 x->append(*tmp);
                 x->append("\n");
                 final_code.append(*x);
	       //  tmp->append(Temp());
	         code->append("- ");
	         code->append(*tmp);
	         code->append(", ");
   	         code->append((yyvsp[-2].type_id).name);
	         code->append(", ");
                 char ch[1024];
	         sprintf(ch, "%d", (yyvsp[0].type_id).val);
		 code->append(ch);
	         std::cout << *code << std::endl;
                 final_code.append(*code);
                 final_code.append("\n");
		 (yyval.type_id).name = (char *)(tmp->c_str()); 
	         (yyval.type_id).datatype = 1; 
             }      
           else if((yyvsp[-2].type_id).datatype == 0 && (yyvsp[0].type_id).datatype == 1)
             {           
                 std::string *code = new std::string;
	         std::string *tmp = new std::string;
                 std::string *x = new std::string;
                 x->append(". ");
	         tmp->append(Temp());
                 x->append(*tmp);
                 x->append("\n");
                 final_code.append(*x);
	     //  tmp->append(Temp());
	         code->append("- ");
		 code->append(*tmp);
	         code->append(", ");
   		 code->append(std::to_string((yyvsp[-2].type_id).val));
		 code->append(", ");
		 code->append((yyvsp[0].type_id).name);
	         std::cout << *code << std::endl;
                 final_code.append(*code);
                 final_code.append("\n");
		 (yyval.type_id).name = (char *)(tmp->c_str());
	         (yyval.type_id).datatype = 1; 
             }  
	   else
             {    
	         std::string *code = new std::string;
	         std::string *tmp = new std::string;
                 std::string *x = new std::string;
                 x->append(". ");
	         tmp->append(Temp());
                 x->append(*tmp);
                 x->append("\n");
                 final_code.append(*x);
	     //  tmp->append(Temp());
	         code->append("-");
	         code->append(*tmp);
	         code->append(", ");
                 char ch[1024];
	         sprintf(ch, "%d", (yyvsp[-2].type_id).val);
	         code->append(ch);
	         code->append(", ");
                 sprintf(ch, "%d", (yyvsp[0].type_id).val);
	         code->append(ch);
	         std::cout << *code << std::endl;
                 final_code.append(*code);
                 final_code.append("\n");
	         (yyval.type_id).name = (char *)tmp->c_str();
                 (yyval.type_id).datatype = 1; 
            }
           }
#line 2449 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 772 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: Missing first term for addition at line %d\n", currLine);}
#line 2455 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 774 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: Missing second term for addition at line %d\n", currLine);}
#line 2461 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 776 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: No terms for PLUS available at line %d\n", currLine);}
#line 2467 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 778 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: Missing second term for subtraction at line %d\n", currLine);}
#line 2473 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 781 "calc.y" /* yacc.c:1646  */
    {(yyval.type_id).val = (yyvsp[0].type_id).val; (yyval.type_id).datatype = (yyvsp[0].type_id).datatype;}
#line 2479 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 785 "calc.y" /* yacc.c:1646  */
    {(yyval.type_id).val = (yyvsp[0].type_id).val; (yyval.type_id).datatype = (yyvsp[0].type_id).datatype;}
#line 2485 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 787 "calc.y" /* yacc.c:1646  */
    {if((yyvsp[-2].type_id).datatype == 1 && (yyvsp[0].type_id).datatype == 1)
                           { 
			     std::string *code = new std::string;
			     std::string *tmp = new std::string; 
                             std::string *x = new std::string;
                             x->append(". ");
	                     tmp->append(Temp());
                             x->append(*tmp);
                             x->append("\n");
                             final_code.append(*x);
			 //  tmp->append(Temp());
			     code->append("* ");
			     code->append(*tmp);
			     code->append(", ");
   			     code->append((yyvsp[-2].type_id).name);
			     code->append(", ");
			     code->append((yyvsp[0].type_id).name);
			     std::cout << *code << std::endl;
			     final_code.append(*code);
                             final_code.append("\n");
		             (yyval.type_id).name = (char *)(tmp->c_str());
			     (yyval.type_id).datatype = 1;
			   }
			   else if((yyvsp[-2].type_id).datatype == 1 && (yyvsp[0].type_id).datatype == 0)
                            {    
			     std::string *code = new std::string;
			     std::string *tmp = new std::string;
                             std::string *x = new std::string;
                             x->append(". ");
	                     tmp->append(Temp());
                             x->append(*tmp);
                             x->append("\n");
                             final_code.append(*x);
			  // tmp->append(Temp());
			     code->append("* ");
			     code->append(*tmp);
			     code->append(", ");
   			     code->append((yyvsp[-2].type_id).name);
			     code->append(", ");
			     char ch[1024];
			     sprintf(ch, "%d", (yyvsp[0].type_id).val);
			     code->append(ch);
			     std::cout << *code << std::endl;
                             final_code.append(*code);
                             final_code.append("\n");
		             (yyval.type_id).name = (char *)(tmp->c_str()); 
			     (yyval.type_id).datatype = 1; 
                            }      
                           else if((yyvsp[-2].type_id).datatype == 0 && (yyvsp[0].type_id).datatype == 1)
                            { 
		               
			     std::string *code = new std::string;
			     std::string *tmp = new std::string;  
                             std::string *x = new std::string;
                             x->append(". ");
	                     tmp->append(Temp());
                             x->append(*tmp);
                             x->append("\n");
                             final_code.append(*x);
			 //  tmp->append(Temp());
			     code->append("* ");
			     code->append(*tmp);
			     code->append(", ");
   			     code->append(std::to_string((yyvsp[-2].type_id).val));
			     code->append(", ");
			     code->append((yyvsp[0].type_id).name);
			     std::cout << *code << std::endl;
                             final_code.append(*code);
                             final_code.append("\n");
		             (yyval.type_id).name = (char *)(tmp->c_str());
			     (yyval.type_id).datatype = 1; 
                            }  
		             else
                             {    
			     std::string *code = new std::string;
			     std::string *tmp = new std::string; 
                             std::string *x = new std::string;
                             x->append(". ");
	                     tmp->append(Temp());
                             x->append(*tmp);
                             x->append("\n");
                             final_code.append(*x);
			     code->append("* ");
			     code->append(*tmp);
			     code->append(", ");
                             char ch[1024];
			     sprintf(ch, "%d", (yyvsp[-2].type_id).val);
			     code->append(ch);
			     code->append(", ");
                             sprintf(ch, "%d", (yyvsp[0].type_id).val);
			     code->append(ch);
			     std::cout << *code << std::endl; 
                             final_code.append(*code);
                             final_code.append("\n");
		             (yyval.type_id).name = (char *)tmp->c_str();
			     (yyval.type_id).datatype = 1; 
                             }
			   }
#line 2588 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 886 "calc.y" /* yacc.c:1646  */
    { if((yyvsp[-2].type_id).datatype == 1 && (yyvsp[0].type_id).datatype == 1)
                           { 
			     std::string *code = new std::string;
			     std::string *tmp = new std::string;  
                             std::string *x = new std::string;
                             x->append(". ");
	                     tmp->append(Temp());
                             x->append(*tmp);
                             x->append("\n");
                             final_code.append(*x);
			     code->append("/ ");
			     code->append(*tmp);
			     code->append(", ");
   			     code->append((yyvsp[-2].type_id).name);
			     code->append(", ");
			     code->append((yyvsp[0].type_id).name);
			     std::cout << *code << std::endl; 
                             final_code.append(*code);
                             final_code.append("\n");
		             (yyval.type_id).name = (char *)(tmp->c_str());
			     (yyval.type_id).datatype = 1;
			   }
			   else if((yyvsp[-2].type_id).datatype == 1 && (yyvsp[0].type_id).datatype == 0)
                            {    
			     std::string *code = new std::string;
			     std::string *tmp = new std::string; 
                             std::string *x = new std::string;
                             x->append(". ");
	                     tmp->append(Temp());
                             x->append(*tmp);
                             x->append("\n");
                             final_code.append(*x);
			     tmp->append(Temp());
			     code->append("/ ");
			     code->append(*tmp);
			     code->append(", ");
   			     code->append((yyvsp[-2].type_id).name);
			     code->append(", ");
			     char ch[1024];
			     sprintf(ch, "%d", (yyvsp[0].type_id).val);
			     code->append(ch);
			     std::cout << *code << std::endl; 
                             final_code.append(*code);
                             final_code.append("\n");
		             (yyval.type_id).name = (char *)(tmp->c_str()); 
			     (yyval.type_id).datatype = 1; 
                            }      
                           else if((yyvsp[-2].type_id).datatype == 0 && (yyvsp[0].type_id).datatype == 1)
                            { 
		               
			     std::string *code = new std::string;
			     std::string *tmp = new std::string; 
                             std::string *x = new std::string;
                             x->append(". ");
	                     tmp->append(Temp());
                             x->append(*tmp);
                             x->append("\n");
                             final_code.append(*x);
			  // tmp->append(Temp());
			     code->append("/ ");
			     code->append(*tmp);
			     code->append(", ");
   			     code->append(std::to_string((yyvsp[-2].type_id).val));
			     code->append(", ");
			     code->append((yyvsp[0].type_id).name);
			     std::cout << *code << std::endl; 
                             final_code.append(*code);
                             final_code.append("\n");
		             (yyval.type_id).name = (char *)(tmp->c_str());
			     (yyval.type_id).datatype = 1; 
                            }  
		             else
                             {    
			     std::string *code = new std::string;
			     std::string *tmp = new std::string; 
                             std::string *x = new std::string;
                             x->append(". ");
	                     tmp->append(Temp());
                             x->append(*tmp);
                             x->append("\n");
                             final_code.append(*x);
			  // tmp->append(Temp());
			     code->append("/ ");
			     code->append(*tmp);
			     code->append(", ");
                             char ch[1024];
			     sprintf(ch, "%d", (yyvsp[-2].type_id).val);
			     code->append(ch);
			     code->append(", ");
                             sprintf(ch, "%d", (yyvsp[0].type_id).val);
			     code->append(ch);
			     std::cout << *code << std::endl; 
                             final_code.append(*code);
                             final_code.append("\n");
		             (yyval.type_id).name = (char *)tmp->c_str();
			     (yyval.type_id).datatype = 1; 
                             }
                         }
#line 2691 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 985 "calc.y" /* yacc.c:1646  */
    {if((yyvsp[-2].type_id).datatype == 1 && (yyvsp[0].type_id).datatype == 1)
                           { 
			     std::string *code = new std::string;
			     std::string *tmp = new std::string;
                             std::string *x = new std::string;
                             x->append(". ");
	                     tmp->append(Temp());
                             x->append(*tmp);
                             x->append("\n");
                             final_code.append(*x);
			 //  tmp->append(Temp());
			     code->append("% ");
			     code->append(*tmp);
			     code->append(", ");
   			     code->append((yyvsp[-2].type_id).name);
			     code->append(", ");
			     code->append((yyvsp[0].type_id).name);
			     std::cout << *code << std::endl; 
                             final_code.append(*code);
                             final_code.append("\n");
		             (yyval.type_id).name = (char *)(tmp->c_str());
			     (yyval.type_id).datatype = 1;
			   }
			   else if((yyvsp[-2].type_id).datatype == 1 && (yyvsp[0].type_id).datatype == 0)
                            {    
			     std::string *code = new std::string;
			     std::string *tmp = new std::string;
                             std::string *x = new std::string;
                             x->append(". ");
	                     tmp->append(Temp());
                             x->append(*tmp);
                             x->append("\n");
                             final_code.append(*x);
			 //  tmp->append(Temp());
			     code->append("% ");
			     code->append(*tmp);
			     code->append(", ");
   			     code->append((yyvsp[-2].type_id).name);
			     code->append(", ");
			     char ch[1024];
			     sprintf(ch, "%d", (yyvsp[0].type_id).val);
			     code->append(ch);
			     std::cout << *code << std::endl; 
                             final_code.append(*code);
                             final_code.append("\n");
		             (yyval.type_id).name = (char *)(tmp->c_str()); 
			     (yyval.type_id).datatype = 1; 
                            }      
                           else if((yyvsp[-2].type_id).datatype == 0 && (yyvsp[0].type_id).datatype == 1)
                            { 
		               
			     std::string *code = new std::string;
			     std::string *tmp = new std::string;
			     tmp->append(Temp());
			     code->append("% ");
			     code->append(*tmp);
			     code->append(", ");
   			     code->append(std::to_string((yyvsp[-2].type_id).val));
			     code->append(", ");
			     code->append((yyvsp[0].type_id).name);
			     std::cout << *code << std::endl; 
                             final_code.append(*code);
                             final_code.append("\n");
		             (yyval.type_id).name = (char *)(tmp->c_str());
			     (yyval.type_id).datatype = 1; 
                            }  
		             else
                             {    
			     std::string *code = new std::string;
			     std::string *tmp = new std::string; 
                             std::string *x = new std::string;
                             x->append(". ");
	                     tmp->append(Temp());
                             x->append(*tmp);
                             x->append("\n");
                             final_code.append(*x);
		       //    tmp->append(Temp());
			     code->append("% ");
			     code->append(*tmp);
			     code->append(", ");
                             char ch[1024];
			     sprintf(ch, "%d", (yyvsp[-2].type_id).val);
			     code->append(ch);
			     code->append(", ");
                             sprintf(ch, "%d", (yyvsp[0].type_id).val);
			     code->append(ch);
			     std::cout << *code << std::endl; 
                             final_code.append(*code);
                             final_code.append("\n");
		             (yyval.type_id).name = (char *)tmp->c_str();
			     (yyval.type_id).datatype = 1; 
                             }
			}
#line 2789 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 1079 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: Missing first term for multiplication at line %d\n", currLine);}
#line 2795 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 1081 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: Missing second term for multiplication at line %d\n", currLine);}
#line 2801 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 1083 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: Missing first term for division at line %d\n", currLine);}
#line 2807 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 1085 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: Missing second term for division at line %d\n", currLine);}
#line 2813 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 1087 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: Missing first term for modulus at line %d\n", currLine);}
#line 2819 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 1089 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: Missing second term for modulus at line %d\n", currLine);}
#line 2825 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 1091 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: No terms for MULT available at line %d\n", currLine);}
#line 2831 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 1093 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: No terms for DIV available at line %d\n", currLine);}
#line 2837 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 1095 "calc.y" /* yacc.c:1646  */
    {printf("Syntax error: No terms for PER available at line %d\n", currLine);}
#line 2843 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 1100 "calc.y" /* yacc.c:1646  */
    {std::string code = ""; code += (yyvsp[-3].type_id).name; code += ("("); char ch [1024]; sprintf(ch, "%d", (yyvsp[-1].type_id).val); code += ch; code += (") "); (yyval.type_id).name = (char *)(code.c_str());}
#line 2849 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 1102 "calc.y" /* yacc.c:1646  */
    {(yyval.type_id).name = (yyvsp[0].type_id).name; (yyval.type_id).datatype = 1;}
#line 2855 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 1104 "calc.y" /* yacc.c:1646  */
    {(yyval.type_id).val = (yyvsp[0].type_id).val; (yyval.type_id).datatype = 0;}
#line 2861 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 1106 "calc.y" /* yacc.c:1646  */
    {std::string code = ""; code += "("; char ch [1024]; sprintf(ch, "%d", (yyvsp[-1].type_id).val); code += ch; code += ") "; (yyval.type_id).name = (char *)code.c_str();}
#line 2867 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 1108 "calc.y" /* yacc.c:1646  */
    {}
#line 2873 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 1110 "calc.y" /* yacc.c:1646  */
    {std::string code = ""; code += "-"; char ch [1024]; sprintf(ch, "%d", (yyvsp[0].type_id).val); code += ch; (yyval.type_id).name = (char *)code.c_str();}
#line 2879 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 1112 "calc.y" /* yacc.c:1646  */
    {std::string code = ""; code += "-"; code += "("; char ch [1024]; sprintf(ch, "%d", (yyvsp[-1].type_id).val); code += ch; code += ") "; (yyval.type_id).name = (char *)code.c_str();}
#line 2885 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2889 "parser.tab.c" /* yacc.c:1646  */
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
#line 1115 "calc.y" /* yacc.c:1906  */


int main(int argc, char ** argv)
{
    if(argc >= 2)
    {
       yyin = fopen(argv[1], "r");
       if(yyin == NULL)
       { 
          yyin = stdin;
       }
       filename = argv[1];
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
};
   
