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
#line 2 "bison2.y" /* yacc.c:339  */

#include <cstdio>
#include <iostream>
using namespace std;

extern "C" int yylex();
extern "C" int yyparse();
extern "C" FILE *yyin;

void yyerror(const char *s);

#line 78 "bison2.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "bison2.tab.h".  */
#ifndef YY_YY_BISON2_TAB_H_INCLUDED
# define YY_YY_BISON2_TAB_H_INCLUDED
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
    N_SING = 258,
    N_PL = 259,
    V_PA = 260,
    CON = 261,
    ADJ = 262,
    ADJ_CMPR = 263,
    ADJ_INO = 264,
    ADJ_SUP = 265,
    PRO = 266,
    P = 267,
    CLITIC = 268,
    V_SA = 269,
    V_SP = 270,
    V_SM = 271,
    V_PM = 272,
    V_PP = 273,
    V_PRS = 274,
    ADV_TIME = 275,
    ADV = 276,
    ADV_LOC = 277,
    ADV_I = 278,
    ADV_INO = 279,
    ADV_NEG = 280,
    ADV_COMP = 281,
    DELM = 282,
    DET = 283,
    NUM = 284,
    V_AUX = 285,
    V_IMP = 286,
    pi = 287,
    V_SUB = 288
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 14 "bison2.y" /* yacc.c:355  */

    char *n_sing;
    char *v_pa;
    char *n_pl;
    char *con;
    char *adj;
    char *adj_cmpr;
    char *adj_ino;
    char *adj_sup;
    char *num;
    char *pro;
    char *p;
    char *clitic;
    char *v_sa;
    char *v_sp;
    char *v_sm;
    char *v_pp;
    char *v_pm;
    char *adv_time;
    char *adv;
    char *adv_loc;
    char *adv_ino;
    char *adv_neg;
    char *adv_comp;
    char *v_prs;
    char *adv_i;
    char *delm;
    char *det;
    char *v_aux;
    char *v_imp;
    char *pi;
    char *v_sub;

#line 186 "bison2.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_BISON2_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 203 "bison2.tab.c" /* yacc.c:358  */

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
#define YYFINAL  39
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   178

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  34
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  15
/* YYNRULES -- Number of rules.  */
#define YYNRULES  74
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  103

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   288

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
      25,    26,    27,    28,    29,    30,    31,    32,    33
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    81,    81,    84,    85,    86,    87,    90,    91,    92,
      93,    94,    95,    96,    97,    98,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   114,   115,   116,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   132,   133,   134,
     135,   136,   137,   138,   139,   143,   144,   145,   149,   150,
     154,   155,   159,   163,   164,   165,   166,   167,   168,   169,
     173,   174,   175,   176,   177,   178,   179,   183,   184,   185,
     186,   187,   188,   189,   190
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "N_SING", "N_PL", "V_PA", "CON", "ADJ",
  "ADJ_CMPR", "ADJ_INO", "ADJ_SUP", "PRO", "P", "CLITIC", "V_SA", "V_SP",
  "V_SM", "V_PM", "V_PP", "V_PRS", "ADV_TIME", "ADV", "ADV_LOC", "ADV_I",
  "ADV_INO", "ADV_NEG", "ADV_COMP", "DELM", "DET", "NUM", "V_AUX", "V_IMP",
  "pi", "V_SUB", "$accept", "S", "SENT", "NSINGLESUB", "NMULTISUB", "NCON",
  "NSINGGOZARE", "NMULTIGOZARE", "NMOSNAD", "NMAFOOL", "NRABTI", "NRABET",
  "NSINGV", "NMULTIV", "NADV", YY_NULLPTR
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
     285,   286,   287,   288
};
# endif

#define YYPACT_NINF -27

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-27)))

#define YYTABLE_NINF -60

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      58,     8,    10,   -27,    37,    31,     5,   -27,   -27,   -27,
     -27,   -27,    20,   -27,   -27,   -27,   -27,     6,     3,    79,
     100,   -27,   -27,   119,   119,   119,    42,    42,   149,    53,
      55,    54,    67,    93,    99,     0,   118,   121,   121,   -27,
     -27,     5,   -27,    20,    -1,    43,   -27,   -27,   155,   155,
     155,    73,   -27,   -27,   -27,   -27,   138,   138,   138,    14,
      37,   -27,    42,    42,    42,    42,    42,    42,    58,   -27,
     -27,   -27,   -27,   -27,   -27,   -27,   -27,   122,   123,   -27,
     -27,   -27,   -27,   117,   124,   133,   121,   121,   -27,   -27,
     -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   125,   -27,
     139,   -27,   -27
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    14,    22,    63,    47,    15,     0,    56,    57,    58,
      65,    64,    36,    71,    72,    73,    74,     0,     0,    45,
      46,     4,     5,     0,     0,     0,    35,    43,     0,    13,
      21,     0,     0,     0,     0,     0,     0,    50,    51,     1,
       2,    27,    48,    36,    45,    46,    23,     3,     0,     0,
       0,     0,    49,    66,    24,     6,     0,     0,     0,     0,
       0,    59,    33,    40,    31,    42,    34,    41,     0,    32,
      44,    60,    53,    54,    55,    62,    61,    12,    20,    67,
      68,    69,    70,     9,     0,    18,    26,    25,    59,    29,
      38,    28,    37,    30,    39,    52,    11,    19,     8,    10,
      17,     7,    16
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -27,   -27,    80,     4,    27,   -20,   128,   129,    77,    89,
      95,   -26,   -21,    -3,    -6
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    17,    18,    19,    20,    46,    21,    22,    23,    24,
      25,    69,    26,    27,    28
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      54,    70,    62,    64,    66,    41,    39,    83,     1,     2,
      37,    84,    42,    51,    59,    29,     5,    30,    54,    71,
      63,    65,    67,    44,    44,    54,   -59,    62,    64,    66,
      40,    75,    76,    38,    35,    36,    89,    90,    91,    92,
      93,    94,    51,    51,    51,    86,    45,    45,    68,    41,
      59,    59,    59,    63,    65,    67,    52,    31,    32,    33,
      34,     1,     2,     3,    77,     4,    78,    54,    87,     5,
       6,    79,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,     1,     2,    80,    41,     4,    72,    73,    74,
       5,     6,    42,     7,     8,     9,    48,    56,    43,    13,
      14,    15,    16,     1,     2,     3,    41,     4,    49,    57,
      81,     5,     6,    52,    50,    58,    82,    10,    11,    53,
      13,    14,    15,    16,     3,    85,    60,    41,    98,    96,
      97,    99,   101,     7,     8,     9,    10,    11,    61,    13,
      14,    15,    16,     3,   100,    60,   102,    47,    95,    55,
       0,     0,     0,     0,    71,    10,    11,    53,    13,    14,
      15,    16,    60,    72,    73,    74,    75,    76,     0,     7,
       8,     9,     0,     0,    88,    13,    14,    15,    16
};

static const yytype_int8 yycheck[] =
{
      20,    27,    23,    24,    25,     6,     0,     7,     3,     4,
       6,    11,    13,    19,    20,     7,    11,     7,    38,     5,
      23,    24,    25,    19,    20,    45,     6,    48,    49,    50,
      27,    17,    18,     6,     3,     4,    62,    63,    64,    65,
      66,    67,    48,    49,    50,    41,    19,    20,     6,     6,
      56,    57,    58,    56,    57,    58,    13,    20,    21,    22,
      23,     3,     4,     5,    11,     7,    11,    87,    41,    11,
      12,    17,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     3,     4,    17,     6,     7,    14,    15,    16,
      11,    12,    13,    14,    15,    16,    19,    20,    19,    20,
      21,    22,    23,     3,     4,     5,     6,     7,    19,    20,
      17,    11,    12,    13,    19,    20,    17,    17,    18,    19,
      20,    21,    22,    23,     5,     7,     7,     6,    11,     7,
       7,     7,     7,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,     5,    11,     7,     7,    19,    68,    20,
      -1,    -1,    -1,    -1,     5,    17,    18,    19,    20,    21,
      22,    23,     7,    14,    15,    16,    17,    18,    -1,    14,
      15,    16,    -1,    -1,    19,    20,    21,    22,    23
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     7,    11,    12,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    35,    36,    37,
      38,    40,    41,    42,    43,    44,    46,    47,    48,     7,
       7,    20,    21,    22,    23,     3,     4,    37,    38,     0,
      27,     6,    13,    19,    37,    38,    39,    40,    42,    43,
      44,    48,    13,    19,    39,    41,    42,    43,    44,    48,
       7,    19,    46,    47,    46,    47,    46,    47,     6,    45,
      45,     5,    14,    15,    16,    17,    18,    11,    11,    17,
      17,    17,    17,     7,    11,     7,    37,    38,    19,    45,
      45,    45,    45,    45,    45,    36,     7,     7,    11,     7,
      11,     7,     7
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    34,    35,    36,    36,    36,    36,    37,    37,    37,
      37,    37,    37,    37,    37,    37,    38,    38,    38,    38,
      38,    38,    38,    38,    38,    39,    39,    39,    40,    40,
      40,    40,    40,    40,    40,    40,    40,    41,    41,    41,
      41,    41,    41,    41,    41,    42,    42,    42,    43,    43,
      44,    44,    45,    46,    46,    46,    46,    46,    46,    46,
      47,    47,    47,    47,    47,    47,    47,    48,    48,    48,
      48,    48,    48,    48,    48
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     1,     1,     2,     5,     4,     3,
       4,     4,     3,     2,     1,     1,     5,     4,     3,     4,
       3,     2,     1,     2,     2,     2,     2,     1,     3,     3,
       3,     2,     2,     2,     2,     1,     1,     3,     3,     3,
       2,     2,     2,     1,     2,     1,     1,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     1,     1,     1,
       2,     2,     2,     1,     1,     1,     1,     3,     3,     3,
       3,     1,     1,     1,     1
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
        case 3:
#line 84 "bison2.y" /* yacc.c:1646  */
    { cout << "NSINGLESUB NSINGGOZARE " << endl; }
#line 1366 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 85 "bison2.y" /* yacc.c:1646  */
    { cout << "NSINGGOZARE" << endl; }
#line 1372 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 87 "bison2.y" /* yacc.c:1646  */
    {cout << "NPRE "<<" NADJ NPOST NADJ" <<endl;}
#line 1378 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 90 "bison2.y" /* yacc.c:1646  */
    { cout << "PRO N_SING ADJ PRO ADJ" << endl; }
#line 1384 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 91 "bison2.y" /* yacc.c:1646  */
    { cout << "PRO N_SING ADJ PRO" << endl; }
#line 1390 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 92 "bison2.y" /* yacc.c:1646  */
    { cout << "PRO N_SING ADJ " << endl; }
#line 1396 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 93 "bison2.y" /* yacc.c:1646  */
    { cout << "PRO N_SING PRO ADJ " << endl; }
#line 1402 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 94 "bison2.y" /* yacc.c:1646  */
    { cout << " N_SING ADJ PRO ADJ" << endl; }
#line 1408 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 95 "bison2.y" /* yacc.c:1646  */
    { cout << " N_SING ADJ PRO " << endl; }
#line 1414 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 96 "bison2.y" /* yacc.c:1646  */
    {cout <<"N_SING ADJ" <<endl;}
#line 1420 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 97 "bison2.y" /* yacc.c:1646  */
    {cout <<"N_SING" <<endl;}
#line 1426 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 98 "bison2.y" /* yacc.c:1646  */
    {cout <<"PRO" <<endl;}
#line 1432 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 102 "bison2.y" /* yacc.c:1646  */
    { cout << " PRO N_PL ADJ PRO ADJ" << endl; }
#line 1438 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 103 "bison2.y" /* yacc.c:1646  */
    { cout << " PRO N_PL ADJ PRO " << endl; }
#line 1444 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 104 "bison2.y" /* yacc.c:1646  */
    { cout << " PRO N_PL ADJ " << endl; }
#line 1450 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 105 "bison2.y" /* yacc.c:1646  */
    { cout << " N_PL ADJ PRO ADJ" << endl; }
#line 1456 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 106 "bison2.y" /* yacc.c:1646  */
    { cout << " N_PL ADJ PRO " << endl; }
#line 1462 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 107 "bison2.y" /* yacc.c:1646  */
    { cout << " N_PL ADJ " << endl; }
#line 1468 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 108 "bison2.y" /* yacc.c:1646  */
    { cout << " N_PL " << endl; }
#line 1474 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 109 "bison2.y" /* yacc.c:1646  */
    { cout << " NSINGLESUB NCON" << endl; }
#line 1480 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 110 "bison2.y" /* yacc.c:1646  */
    { cout << " NMULTISUB NCON" << endl; }
#line 1486 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 114 "bison2.y" /* yacc.c:1646  */
    { cout << " CON NMULTISUB" << endl; }
#line 1492 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 115 "bison2.y" /* yacc.c:1646  */
    { cout << " CON NSINGLESUB" << endl; }
#line 1498 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 116 "bison2.y" /* yacc.c:1646  */
    { cout << " CON " << endl; }
#line 1504 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 120 "bison2.y" /* yacc.c:1646  */
    { cout << " NMAFOOL NSINGV NRABET" << endl; }
#line 1510 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 121 "bison2.y" /* yacc.c:1646  */
    { cout << " MOSNAD NSINGV NRABET" << endl; }
#line 1516 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 122 "bison2.y" /* yacc.c:1646  */
    { cout << " NRABTI NSINGV NRABET" << endl; }
#line 1522 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 123 "bison2.y" /* yacc.c:1646  */
    { cout << " NMAFOOL NSINGV" << endl; }
#line 1528 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 124 "bison2.y" /* yacc.c:1646  */
    { cout << " NSINGV NRABET" << endl; }
#line 1534 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 125 "bison2.y" /* yacc.c:1646  */
    { cout << " NMOSNAD NSINGV " << endl; }
#line 1540 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 126 "bison2.y" /* yacc.c:1646  */
    { cout << " NRABET NSINGV " << endl; }
#line 1546 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 127 "bison2.y" /* yacc.c:1646  */
    {cout <<"NPRE "<<" NADJ NPOST NADJ" <<endl;}
#line 1552 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 128 "bison2.y" /* yacc.c:1646  */
    {cout <<"fel e esnadi " <<endl;}
#line 1558 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 132 "bison2.y" /* yacc.c:1646  */
    {cout <<"NMAFOOL NMULTIV NRABET" <<endl;}
#line 1564 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 133 "bison2.y" /* yacc.c:1646  */
    {cout <<"NMOSNAD NMULTIV NRABET" <<endl;}
#line 1570 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 134 "bison2.y" /* yacc.c:1646  */
    {cout <<"NRABTI NMULTIV NRABET" <<endl;}
#line 1576 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 135 "bison2.y" /* yacc.c:1646  */
    {cout <<"NMOSNAD NMULTIV " <<endl;}
#line 1582 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 136 "bison2.y" /* yacc.c:1646  */
    {cout <<"NRABET NMULTIV " <<endl;}
#line 1588 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 137 "bison2.y" /* yacc.c:1646  */
    {cout <<"NMAFOOL NMULTIV " <<endl;}
#line 1594 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 138 "bison2.y" /* yacc.c:1646  */
    {cout <<" NMULTIV " <<endl;}
#line 1600 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 139 "bison2.y" /* yacc.c:1646  */
    {cout <<" NMULTIV NRABET" <<endl;}
#line 1606 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 143 "bison2.y" /* yacc.c:1646  */
    {cout <<" NSINGLESUB" <<endl;}
#line 1612 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 144 "bison2.y" /* yacc.c:1646  */
    {cout <<" NMULTISUB" <<endl;}
#line 1618 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 145 "bison2.y" /* yacc.c:1646  */
    {cout <<"ADJ" <<endl;}
#line 1624 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 149 "bison2.y" /* yacc.c:1646  */
    {cout <<"NSINGLESUB CLITIC" <<endl;}
#line 1630 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 150 "bison2.y" /* yacc.c:1646  */
    {cout <<"NMULTISUB CLITIC" <<endl;}
#line 1636 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 154 "bison2.y" /* yacc.c:1646  */
    {cout <<"P  NSINGLESUB" <<endl;}
#line 1642 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 155 "bison2.y" /* yacc.c:1646  */
    {cout <<"P  NMULTISUB" <<endl;}
#line 1648 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 159 "bison2.y" /* yacc.c:1646  */
    {cout <<"CON SENT" <<endl;}
#line 1654 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 163 "bison2.y" /* yacc.c:1646  */
    {cout <<"NADV V_SA"<<endl;}
#line 1660 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 164 "bison2.y" /* yacc.c:1646  */
    {cout <<"NADV V_SP" <<endl;}
#line 1666 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 165 "bison2.y" /* yacc.c:1646  */
    {cout <<"NADV V_SM" <<endl;}
#line 1672 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 166 "bison2.y" /* yacc.c:1646  */
    {cout <<"V_SA" <<endl;}
#line 1678 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 167 "bison2.y" /* yacc.c:1646  */
    {cout <<"V_SP" <<endl;}
#line 1684 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 168 "bison2.y" /* yacc.c:1646  */
    {cout <<"V_SM" <<endl;}
#line 1690 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 169 "bison2.y" /* yacc.c:1646  */
    {cout <<"fel e esnadi " <<endl;}
#line 1696 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 173 "bison2.y" /* yacc.c:1646  */
    {cout <<"NADV V_PA" <<endl;}
#line 1702 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 174 "bison2.y" /* yacc.c:1646  */
    {cout <<"NADV V_PP" <<endl;}
#line 1708 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 175 "bison2.y" /* yacc.c:1646  */
    {cout <<"NADV V_PM" <<endl;}
#line 1714 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 176 "bison2.y" /* yacc.c:1646  */
    {cout <<"V_PA" <<endl;}
#line 1720 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 177 "bison2.y" /* yacc.c:1646  */
    {cout <<" V_PP" <<endl;}
#line 1726 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 178 "bison2.y" /* yacc.c:1646  */
    {cout <<"V_PM" <<endl;}
#line 1732 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 179 "bison2.y" /* yacc.c:1646  */
    {cout <<"fel e esnadi " <<endl;}
#line 1738 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 183 "bison2.y" /* yacc.c:1646  */
    {cout <<"ADJ ADV_TIME V_PM" <<endl;}
#line 1744 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 184 "bison2.y" /* yacc.c:1646  */
    {cout <<"ADJ ADV V_PM" <<endl;}
#line 1750 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 185 "bison2.y" /* yacc.c:1646  */
    {cout <<"ADJ ADV_LOC V_PM" <<endl;}
#line 1756 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 186 "bison2.y" /* yacc.c:1646  */
    {cout <<"ADJ ADV_I V_PM" <<endl;}
#line 1762 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 187 "bison2.y" /* yacc.c:1646  */
    {cout <<"ADV_TIME" <<endl;}
#line 1768 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 188 "bison2.y" /* yacc.c:1646  */
    {cout <<"ADV " <<endl;}
#line 1774 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 189 "bison2.y" /* yacc.c:1646  */
    {cout <<"ADV_LOC " <<endl;}
#line 1780 "bison2.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 190 "bison2.y" /* yacc.c:1646  */
    {cout <<"V_ADV_IPM" <<endl;}
#line 1786 "bison2.tab.c" /* yacc.c:1646  */
    break;


#line 1790 "bison2.tab.c" /* yacc.c:1646  */
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
#line 193 "bison2.y" /* yacc.c:1906  */


int main(int, char**) {

	FILE *myfile = fopen("flex.out", "r");

	if (!myfile) {
			cout << "I can't open file!" << endl;
			return -1;
		}

	yyin = myfile;

	// parse through the input until there is no more:
	do {
		yyparse();
	} while (!feof(yyin));
}

void yyerror(const char *s) {
	cout << "EEK, parse error!  Message: " << s << endl;
	// might as well halt now:
	exit(-1);
}

