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
#line 1 "syntax_tree.y" /* yacc.c:339  */

#include<unistd.h>
#include<stdio.h>   
#include "syntax_tree.h"

#line 72 "syntax_tree.tab.c" /* yacc.c:339  */

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
   by #include "syntax_tree.tab.h".  */
#ifndef YY_YY_SYNTAX_TREE_TAB_H_INCLUDED
# define YY_YY_SYNTAX_TREE_TAB_H_INCLUDED
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
    DEC = 258,
    OCT = 259,
    HEX = 260,
    id = 261,
    ILHEX = 262,
    ILOCT = 263,
    ADD = 264,
    SUB = 265,
    MUL = 266,
    DIV = 267,
    LE = 268,
    GE = 269,
    EQ = 270,
    NEQ = 271,
    LT = 272,
    GT = 273,
    SLP = 274,
    SRP = 275,
    SEMI = 276,
    IF = 277,
    ELSE = 278,
    WHILE = 279,
    DO = 280,
    BEGIN = 281,
    END = 282,
    THEN = 283
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 7 "syntax_tree.y" /* yacc.c:355  */

    	tnode type_tnode;
	double d;

#line 146 "syntax_tree.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SYNTAX_TREE_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 163 "syntax_tree.tab.c" /* yacc.c:358  */

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
#define YYFINAL  19
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   64

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  29
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  10
/* YYNRULES -- Number of rules.  */
#define YYNRULES  29
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  65

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   283

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
      25,    26,    27,    28
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    38,    38,    58,    67,    85,    99,   112,   140,   158,
     185,   198,   225,   250,   270,   290,   310,   330,   349,   370,
     387,   404,   411,   416,   433,   452,   457,   464,   471,   478
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DEC", "OCT", "HEX", "id", "ILHEX",
  "ILOCT", "ADD", "SUB", "MUL", "DIV", "LE", "GE", "EQ", "NEQ", "LT", "GT",
  "SLP", "SRP", "SEMI", "IF", "ELSE", "WHILE", "DO", "BEGIN", "END",
  "THEN", "$accept", "SS", "P", "L", "S", "W", "C", "E", "T", "F", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283
};
# endif

#define YYPACT_NINF -24

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-24)))

#define YYTABLE_NINF -11

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
       3,    -9,    10,    10,    11,   -24,     3,    13,    10,   -24,
     -24,   -24,   -24,    10,    16,    33,    19,   -24,     7,   -24,
     -24,   -24,    46,    -2,     4,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,     3,   -24,    24,    10,    10,
     -24,    18,    19,    19,    46,    46,    46,    46,    46,    46,
     -24,   -24,   -24,    10,    29,    27,     3,    -6,     4,     4,
     -24,    40,   -24,     4,   -24
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     2,     3,     0,     0,    27,
      26,    28,    29,     0,     0,     0,    21,    22,     0,     1,
       4,     5,     6,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    25,     0,     0,     0,
       8,     0,    19,    20,    17,    16,    15,    18,    14,    13,
      23,    24,     9,     0,     0,     0,     0,     6,     0,     0,
       7,     0,    12,     0,    11
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -24,   -24,    58,   -24,   -23,    -5,    -1,    -8,    34,    28
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     4,     5,     6,     7,    41,    14,    15,    16,    17
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      22,    40,    18,    25,    26,    23,     8,    25,    26,     1,
      37,    19,    52,     9,    10,    11,    12,   -10,    36,    44,
      45,    46,    47,    48,    49,     2,    38,     3,    39,    13,
      33,    34,    35,    60,    21,    40,    52,    54,    55,    53,
      60,    56,    25,    26,    24,    57,    27,    28,    29,    30,
      31,    32,    59,    61,    62,    25,    26,    58,    64,    42,
      43,    50,    51,    63,    20
};

static const yytype_uint8 yycheck[] =
{
       8,    24,     3,     9,    10,    13,    15,     9,    10,     6,
       6,     0,    35,     3,     4,     5,     6,    23,    20,    27,
      28,    29,    30,    31,    32,    22,    22,    24,    24,    19,
      11,    12,    25,    56,    21,    58,    59,    38,    39,    15,
      63,    23,     9,    10,    28,    53,    13,    14,    15,    16,
      17,    18,    25,    58,    59,     9,    10,    28,    63,    25,
      26,    33,    34,    23,     6
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    22,    24,    30,    31,    32,    33,    15,     3,
       4,     5,     6,    19,    35,    36,    37,    38,    35,     0,
      31,    21,    36,    36,    28,     9,    10,    13,    14,    15,
      16,    17,    18,    11,    12,    25,    20,     6,    22,    24,
      33,    34,    37,    37,    36,    36,    36,    36,    36,    36,
      38,    38,    33,    15,    35,    35,    23,    36,    28,    25,
      33,    34,    34,    23,    34
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    29,    30,    31,    31,    32,    33,    33,    33,    33,
      34,    34,    34,    35,    35,    35,    35,    35,    35,    36,
      36,    36,    37,    37,    37,    38,    38,    38,    38,    38
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     3,     6,     4,     4,
       3,     6,     4,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     3,     3,     3,     1,     1,     1,     1
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
#line 38 "syntax_tree.y" /* yacc.c:1646  */
    {	
		printf("SS:P\n");(yyval.type_tnode)=newAst("SS",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;
		strcat((yyval.type_tnode)->code,(yyvsp[0].type_tnode)->code);
		
		//??????????????????????????????label
		for(int i = 0; i < label_count; i++){
			char* rplabel = (char*)malloc(20);
			char* label = (char*)malloc(20);
			memset(rplabel, 0 ,sizeof(char)*20);
			memset(label, 0 ,sizeof(char)*20);
			sprintf(rplabel,"%s: \n%s:",label_Tran(i),label_Tran(i));
			sprintf(label,"%s:",label_Tran(i));
			strrpc((yyval.type_tnode)->code,rplabel,label);
		}
		
		
		printf("\n\n\n%s",(yyval.type_tnode)->code);
		}
#line 1288 "syntax_tree.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 58 "syntax_tree.y" /* yacc.c:1646  */
    {
		printf("P:L\n");(yyval.type_tnode)=newAst("P",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;
		
		//P.label = L.label
		(yyval.type_tnode)->label = (yyvsp[0].type_tnode)->label;
		
		strcat((yyval.type_tnode)->code,(yyvsp[0].type_tnode)->code);//P.code = L.code
		//printf("\n\n\n%s",$$->code);
		}
#line 1302 "syntax_tree.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 67 "syntax_tree.y" /* yacc.c:1646  */
    {
		printf("P:L P\n");(yyval.type_tnode)=newAst("P",2,(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;
		
		//P.begin = L.begin ; P.next = P1.next;
		(yyval.type_tnode)->label.l_begin = (yyvsp[-1].type_tnode)->label.l_begin;
		(yyval.type_tnode)->label.l_next = (yyvsp[-1].type_tnode)->label.l_next;		
		
		strcat((yyval.type_tnode)->code,(yyvsp[-1].type_tnode)->code);//P.code = L.code ||
		strcat((yyval.type_tnode)->code,(yyvsp[0].type_tnode)->code);//P1.code
		
		//???P1.begin??????L.next
		strrpc((yyval.type_tnode)->code,label_Tran((yyvsp[-1].type_tnode)->label.l_next),label_Tran((yyvsp[0].type_tnode)->label.l_begin));
		
		
		//printf("\n\n\n%s",$$->code);
		}
#line 1323 "syntax_tree.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 85 "syntax_tree.y" /* yacc.c:1646  */
    {
		printf("L:S SEMI\n");(yyval.type_tnode)=newAst("L",2,(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;	
		
		//L.label = S.label
		(yyval.type_tnode)->label = (yyvsp[-1].type_tnode)->label;
		
		strcat((yyval.type_tnode)->code,(yyvsp[-1].type_tnode)->code);//L.code = S.code		
		//gen(S.next ':')
		strcat((yyval.type_tnode)->code,label_Tran((yyvsp[-1].type_tnode)->label.l_next));
		strcat((yyval.type_tnode)->code,": \n");
		//printf("\n\n\n%s",$$->code);
		}
#line 1340 "syntax_tree.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 99 "syntax_tree.y" /* yacc.c:1646  */
    {
		printf("S:id = E\n");(yyval.type_tnode)=newAst("S",3,(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;
		newlabel(&((yyval.type_tnode)->label.l_next));//newlabel(s.next)
		newlabel(&((yyval.type_tnode)->label.l_begin));//newlabel(s.begin)
				
		strcat((yyval.type_tnode)->code,(yyvsp[0].type_tnode)->code);//S.code = E.code
		//gen(id.place ':=' E.place)
		strcat((yyval.type_tnode)->code,(yyvsp[-2].type_tnode)->content);
		strcat((yyval.type_tnode)->code," := ");
		strcat((yyval.type_tnode)->code,getPlaceStr((yyvsp[0].type_tnode)));
		strcat((yyval.type_tnode)->code,"\n");
		//printf("\n\n\n%s",$$->code);
		}
#line 1358 "syntax_tree.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 112 "syntax_tree.y" /* yacc.c:1646  */
    {
		printf("S:IF C THEN W ELSE S\n");(yyval.type_tnode)=newAst("S",6,(yyvsp[-5].type_tnode),(yyvsp[-4].type_tnode),(yyvsp[-3].type_tnode),(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;
		newlabel(&((yyval.type_tnode)->label.l_begin));//newlabel(s.begin)
		(yyval.type_tnode)->label.l_next = (yyvsp[0].type_tnode)->label.l_next;//S.next = S1.next
		
		strcat((yyval.type_tnode)->code,(yyvsp[-4].type_tnode)->code);//S.code = C.code ||
		//gen(C.true ':') ||
		strcat((yyval.type_tnode)->code,label_Tran((yyvsp[-4].type_tnode)->label.l_true));
		strcat((yyval.type_tnode)->code,": \n");
		strcat((yyval.type_tnode)->code,(yyvsp[-2].type_tnode)->code);// W.code
		//gen(???goto??? S.next)||
		strcat((yyval.type_tnode)->code,"goto ");
		strcat((yyval.type_tnode)->code,label_Tran((yyval.type_tnode)->label.l_next));
		strcat((yyval.type_tnode)->code,"\n");
		//gen(C.false ???:???)||
		strcat((yyval.type_tnode)->code,label_Tran((yyvsp[-4].type_tnode)->label.l_false));
		strcat((yyval.type_tnode)->code,": \n");
		//S1.code
		strcat((yyval.type_tnode)->code,(yyvsp[0].type_tnode)->code);

		//??????(W.next,S.next);
		strrpc((yyval.type_tnode)->code,label_Tran((yyvsp[-2].type_tnode)->label.l_next),label_Tran((yyval.type_tnode)->label.l_next));
		//??????(C.true,W.begin);
		strrpc((yyval.type_tnode)->code,label_Tran((yyvsp[-4].type_tnode)->label.l_true),label_Tran((yyvsp[-2].type_tnode)->label.l_begin));
		//??????(C.false,S1.begin);
		strrpc((yyval.type_tnode)->code,label_Tran((yyvsp[-4].type_tnode)->label.l_false),label_Tran((yyvsp[0].type_tnode)->label.l_begin));
		
		}
#line 1391 "syntax_tree.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 140 "syntax_tree.y" /* yacc.c:1646  */
    {
		printf("S:IF C THEN S\n");(yyval.type_tnode)=newAst("S",4,(yyvsp[-3].type_tnode),(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;
		newlabel(&((yyval.type_tnode)->label.l_begin));//newlabel(s.begin)
		(yyval.type_tnode)->label.l_next = (yyvsp[0].type_tnode)->label.l_next;//S.next = S1.next
		
		
		strcat((yyval.type_tnode)->code,(yyvsp[-2].type_tnode)->code);//S.code = C.code ||
		//gen(C.true ':') ||
		strcat((yyval.type_tnode)->code,label_Tran((yyvsp[-2].type_tnode)->label.l_true));
		strcat((yyval.type_tnode)->code,": \n");
		strcat((yyval.type_tnode)->code,(yyvsp[0].type_tnode)->code);// S1.code
		
		//???S.next ?????? C.false
		strrpc((yyval.type_tnode)->code,label_Tran((yyvsp[-2].type_tnode)->label.l_false),label_Tran((yyval.type_tnode)->label.l_next));
		//???S1.begin ?????? C.true
		strrpc((yyval.type_tnode)->code,label_Tran((yyvsp[-2].type_tnode)->label.l_true),label_Tran((yyvsp[0].type_tnode)->label.l_begin));
		
		}
#line 1414 "syntax_tree.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 158 "syntax_tree.y" /* yacc.c:1646  */
    {
		printf("S:WHILE C DO S\n");(yyval.type_tnode)=newAst("S",4,(yyvsp[-3].type_tnode),(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;
		
		(yyval.type_tnode)->label.l_next = (yyvsp[-2].type_tnode)->label.l_false;
		(yyval.type_tnode)->label.l_begin = (yyvsp[0].type_tnode)->label.l_next;
		
		//S.code = gen(S.begin ':') ||
		strcat((yyval.type_tnode)->code,label_Tran((yyval.type_tnode)->label.l_begin));
		strcat((yyval.type_tnode)->code,": \n");
		strcat((yyval.type_tnode)->code,(yyvsp[-2].type_tnode)->code);//C.code ||
		//gen(C.true ':') ||
		strcat((yyval.type_tnode)->code,label_Tran((yyvsp[-2].type_tnode)->label.l_true));
		strcat((yyval.type_tnode)->code,": \n");
		strcat((yyval.type_tnode)->code,(yyvsp[0].type_tnode)->code);//S1.code ||
		//gen('goto' S.begin)
		strcat((yyval.type_tnode)->code,"goto ");
		strcat((yyval.type_tnode)->code,label_Tran((yyval.type_tnode)->label.l_begin));
		strcat((yyval.type_tnode)->code,"\n");
		//printf("\n\n\n%s\n\n\n",$$->code);
		
		//S1.begin ?????? C.true
		strrpc((yyval.type_tnode)->code,label_Tran((yyvsp[-2].type_tnode)->label.l_true),label_Tran((yyvsp[0].type_tnode)->label.l_begin));
		//printf("\n\n\n%s",$$->code);
		
		}
#line 1444 "syntax_tree.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 185 "syntax_tree.y" /* yacc.c:1646  */
    {
		printf("W:id = E\n");(yyval.type_tnode)=newAst("W",3,(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;
		newlabel(&((yyval.type_tnode)->label.l_next));//newlabel(W.next)
		newlabel(&((yyval.type_tnode)->label.l_begin));//newlabel(W.begin)
				
		strcat((yyval.type_tnode)->code,(yyvsp[0].type_tnode)->code);//W.code = E.code
		//gen(id.place ':=' E.place)
		strcat((yyval.type_tnode)->code,(yyvsp[-2].type_tnode)->content);
		strcat((yyval.type_tnode)->code," := ");
		strcat((yyval.type_tnode)->code,getPlaceStr((yyvsp[0].type_tnode)));
		strcat((yyval.type_tnode)->code,"\n");
		//printf("\n\n\n%s",$$->code);		
		}
#line 1462 "syntax_tree.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 198 "syntax_tree.y" /* yacc.c:1646  */
    {
		printf("W:IF C THEN W ELSE W\n");(yyval.type_tnode)=newAst("W",6,(yyvsp[-5].type_tnode),(yyvsp[-4].type_tnode),(yyvsp[-3].type_tnode),(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;
		newlabel(&((yyval.type_tnode)->label.l_begin));//newlabel(W.begin)
		(yyval.type_tnode)->label.l_next = (yyvsp[0].type_tnode)->label.l_next;//W.next = W2.next
		
		strcat((yyval.type_tnode)->code,(yyvsp[-4].type_tnode)->code);//W.code = C.code ||
		//gen(C.true ':') ||
		strcat((yyval.type_tnode)->code,label_Tran((yyvsp[-4].type_tnode)->label.l_true));
		strcat((yyval.type_tnode)->code,": \n");
		strcat((yyval.type_tnode)->code,(yyvsp[-2].type_tnode)->code);// W1.code
		//gen(???goto??? W.next)||
		strcat((yyval.type_tnode)->code,"goto ");
		strcat((yyval.type_tnode)->code,label_Tran((yyval.type_tnode)->label.l_next));
		strcat((yyval.type_tnode)->code,"\n");
		//gen(C.false ???:???)||
		strcat((yyval.type_tnode)->code,label_Tran((yyvsp[-4].type_tnode)->label.l_false));
		strcat((yyval.type_tnode)->code,": \n");
		//W2.code
		strcat((yyval.type_tnode)->code,(yyvsp[0].type_tnode)->code);

		//??????(W1.next,W.next);
		strrpc((yyval.type_tnode)->code,label_Tran((yyvsp[-2].type_tnode)->label.l_next),label_Tran((yyval.type_tnode)->label.l_next));
		//??????(C.true,W1.begin);
		strrpc((yyval.type_tnode)->code,label_Tran((yyvsp[-4].type_tnode)->label.l_true),label_Tran((yyvsp[-2].type_tnode)->label.l_begin));
		//??????(C.false,W2.begin);
		strrpc((yyval.type_tnode)->code,label_Tran((yyvsp[-4].type_tnode)->label.l_false),label_Tran((yyvsp[0].type_tnode)->label.l_begin));
		}
#line 1494 "syntax_tree.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 225 "syntax_tree.y" /* yacc.c:1646  */
    {
		printf("W:WHILE C DO W\n");(yyval.type_tnode)=newAst("W",4,(yyvsp[-3].type_tnode),(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;
		(yyval.type_tnode)->label.l_next = (yyvsp[-2].type_tnode)->label.l_false;//W.next = C.false;
		(yyval.type_tnode)->label.l_begin = (yyvsp[0].type_tnode)->label.l_next;//W.begin = W1.next;
		
		//S.code = gen(W.begin ':') ||
		strcat((yyval.type_tnode)->code,label_Tran((yyval.type_tnode)->label.l_begin));
		strcat((yyval.type_tnode)->code,": \n");
		strcat((yyval.type_tnode)->code,(yyvsp[-2].type_tnode)->code);//C.code ||
		//gen(C.true ':') ||
		strcat((yyval.type_tnode)->code,label_Tran((yyvsp[-2].type_tnode)->label.l_true));
		strcat((yyval.type_tnode)->code,": \n");
		strcat((yyval.type_tnode)->code,(yyvsp[0].type_tnode)->code);//S1.code ||
		//gen('goto' W.begin)
		strcat((yyval.type_tnode)->code,"goto ");
		strcat((yyval.type_tnode)->code,label_Tran((yyval.type_tnode)->label.l_begin));
		strcat((yyval.type_tnode)->code,"\n");
		//printf("\n\n\n%s\n\n\n",$$->code);
		
		//W1.begin ?????? C.true
		strrpc((yyval.type_tnode)->code,label_Tran((yyvsp[-2].type_tnode)->label.l_true),label_Tran((yyvsp[0].type_tnode)->label.l_begin));
		//printf("\n\n\n%s",$$->code);
		}
#line 1522 "syntax_tree.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 250 "syntax_tree.y" /* yacc.c:1646  */
    {
		printf("C:E > E\n");(yyval.type_tnode)=newAst("C",3,(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;
		char temp[10];
		newlabel(&((yyval.type_tnode)->label.l_true));
		newlabel(&((yyval.type_tnode)->label.l_false));
		strcat((yyval.type_tnode)->code,(yyvsp[-2].type_tnode)->code);// C.code = E1.code ||
		strcat((yyval.type_tnode)->code,(yyvsp[0].type_tnode)->code);// E2.cide ||
		//gen(???if??? E1.place ???>??? E2.place ???goto??? C.true) || 
		strcat((yyval.type_tnode)->code,"if ");
		strcat((yyval.type_tnode)->code,getPlaceStr((yyvsp[-2].type_tnode)));
		strcat((yyval.type_tnode)->code," > ");
		strcat((yyval.type_tnode)->code,getPlaceStr((yyvsp[0].type_tnode)));
		strcat((yyval.type_tnode)->code," goto ");
		strcat((yyval.type_tnode)->code,label_Tran((yyval.type_tnode)->label.l_true));
		strcat((yyval.type_tnode)->code,"\n");
		//gen(???goto??? C.false)
		strcat((yyval.type_tnode)->code,"goto ");
		strcat((yyval.type_tnode)->code,label_Tran((yyval.type_tnode)->label.l_false));
		strcat((yyval.type_tnode)->code,"\n");
		}
#line 1547 "syntax_tree.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 270 "syntax_tree.y" /* yacc.c:1646  */
    {
		printf("C:E < E\n");(yyval.type_tnode)=newAst("C",3,(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;
		char temp[10];
		newlabel(&((yyval.type_tnode)->label.l_true));
		newlabel(&((yyval.type_tnode)->label.l_false));
		strcat((yyval.type_tnode)->code,(yyvsp[-2].type_tnode)->code);// C.code = E1.code ||
		strcat((yyval.type_tnode)->code,(yyvsp[0].type_tnode)->code);// E2.cide ||
		//gen(???if??? E1.place ???<??? E2.place ???goto??? C.true) || 
		strcat((yyval.type_tnode)->code,"if ");
		strcat((yyval.type_tnode)->code,getPlaceStr((yyvsp[-2].type_tnode)));
		strcat((yyval.type_tnode)->code," < ");
		strcat((yyval.type_tnode)->code,getPlaceStr((yyvsp[0].type_tnode)));
		strcat((yyval.type_tnode)->code," goto ");
		strcat((yyval.type_tnode)->code,label_Tran((yyval.type_tnode)->label.l_true));
		strcat((yyval.type_tnode)->code,"\n");
		//gen(???goto??? C.false)
		strcat((yyval.type_tnode)->code,"goto ");
		strcat((yyval.type_tnode)->code,label_Tran((yyval.type_tnode)->label.l_false));
		strcat((yyval.type_tnode)->code,"\n");
		}
#line 1572 "syntax_tree.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 290 "syntax_tree.y" /* yacc.c:1646  */
    {
		printf("C:E = E\n");(yyval.type_tnode)=newAst("C",3,(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;
		char temp[10];
		newlabel(&((yyval.type_tnode)->label.l_true));
		newlabel(&((yyval.type_tnode)->label.l_false));
		strcat((yyval.type_tnode)->code,(yyvsp[-2].type_tnode)->code);// C.code = E1.code ||
		strcat((yyval.type_tnode)->code,(yyvsp[0].type_tnode)->code);// E2.cide ||
		//gen(???if??? E1.place ???=??? E2.place ???goto??? C.true) || 
		strcat((yyval.type_tnode)->code,"if ");
		strcat((yyval.type_tnode)->code,getPlaceStr((yyvsp[-2].type_tnode)));
		strcat((yyval.type_tnode)->code," = ");
		strcat((yyval.type_tnode)->code,getPlaceStr((yyvsp[0].type_tnode)));
		strcat((yyval.type_tnode)->code," goto ");
		strcat((yyval.type_tnode)->code,label_Tran((yyval.type_tnode)->label.l_true));
		strcat((yyval.type_tnode)->code,"\n");
		//gen(???goto??? C.false)
		strcat((yyval.type_tnode)->code,"goto ");
		strcat((yyval.type_tnode)->code,label_Tran((yyval.type_tnode)->label.l_false));
		strcat((yyval.type_tnode)->code,"\n");
		}
#line 1597 "syntax_tree.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 310 "syntax_tree.y" /* yacc.c:1646  */
    {
		printf("C:E >= E\n");(yyval.type_tnode)=newAst("C",3,(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;
		char temp[10];
		newlabel(&((yyval.type_tnode)->label.l_true));
		newlabel(&((yyval.type_tnode)->label.l_false));
		strcat((yyval.type_tnode)->code,(yyvsp[-2].type_tnode)->code);// C.code = E1.code ||
		strcat((yyval.type_tnode)->code,(yyvsp[0].type_tnode)->code);// E2.cide ||
		//gen(???if??? E1.place ???>=??? E2.place ???goto??? C.true) || 
		strcat((yyval.type_tnode)->code,"if ");
		strcat((yyval.type_tnode)->code,getPlaceStr((yyvsp[-2].type_tnode)));
		strcat((yyval.type_tnode)->code," >= ");
		strcat((yyval.type_tnode)->code,getPlaceStr((yyvsp[0].type_tnode)));
		strcat((yyval.type_tnode)->code," goto ");
		strcat((yyval.type_tnode)->code,label_Tran((yyval.type_tnode)->label.l_true));
		strcat((yyval.type_tnode)->code,"\n");
		//gen(???goto??? C.false)
		strcat((yyval.type_tnode)->code,"goto ");
		strcat((yyval.type_tnode)->code,label_Tran((yyval.type_tnode)->label.l_false));
		strcat((yyval.type_tnode)->code,"\n");
		}
#line 1622 "syntax_tree.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 330 "syntax_tree.y" /* yacc.c:1646  */
    {
		printf("C:E <= E\n");(yyval.type_tnode)=newAst("C",3,(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;
		newlabel(&((yyval.type_tnode)->label.l_true));
		newlabel(&((yyval.type_tnode)->label.l_false));
		strcat((yyval.type_tnode)->code,(yyvsp[-2].type_tnode)->code);// C.code = E1.code ||
		strcat((yyval.type_tnode)->code,(yyvsp[0].type_tnode)->code);// E2.cide ||
		//gen(???if??? E1.place ???<=??? E2.place ???goto??? C.true) || 
		strcat((yyval.type_tnode)->code,"if ");
		strcat((yyval.type_tnode)->code,getPlaceStr((yyvsp[-2].type_tnode)));
		strcat((yyval.type_tnode)->code," <= ");
		strcat((yyval.type_tnode)->code,getPlaceStr((yyvsp[0].type_tnode)));
		strcat((yyval.type_tnode)->code," goto ");
		strcat((yyval.type_tnode)->code,label_Tran((yyval.type_tnode)->label.l_true));
		strcat((yyval.type_tnode)->code,"\n");
		//gen(???goto??? C.false)
		strcat((yyval.type_tnode)->code,"goto ");
		strcat((yyval.type_tnode)->code,label_Tran((yyval.type_tnode)->label.l_false));
		strcat((yyval.type_tnode)->code,"\n");
		}
#line 1646 "syntax_tree.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 349 "syntax_tree.y" /* yacc.c:1646  */
    {
		printf("C:E <> E\n");(yyval.type_tnode)=newAst("C",3,(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;
		newlabel(&((yyval.type_tnode)->label.l_true));
		newlabel(&((yyval.type_tnode)->label.l_false));
		strcat((yyval.type_tnode)->code,(yyvsp[-2].type_tnode)->code);// C.code = E1.code ||
		strcat((yyval.type_tnode)->code,(yyvsp[0].type_tnode)->code);// E2.cide ||
		//gen(???if??? E1.place ???<>??? E2.place ???goto??? C.true) || 
		strcat((yyval.type_tnode)->code,"if ");
		strcat((yyval.type_tnode)->code,getPlaceStr((yyvsp[-2].type_tnode)));
		strcat((yyval.type_tnode)->code," <> ");
		strcat((yyval.type_tnode)->code,getPlaceStr((yyvsp[0].type_tnode)));
		strcat((yyval.type_tnode)->code," goto ");
		strcat((yyval.type_tnode)->code,label_Tran((yyval.type_tnode)->label.l_true));
		strcat((yyval.type_tnode)->code,"\n");
		//gen(???goto??? C.false)
		strcat((yyval.type_tnode)->code,"goto ");
		strcat((yyval.type_tnode)->code,label_Tran((yyval.type_tnode)->label.l_false));
		strcat((yyval.type_tnode)->code,"\n");
		}
#line 1670 "syntax_tree.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 370 "syntax_tree.y" /* yacc.c:1646  */
    {
		printf("E:E+T\n");(yyval.type_tnode)=newAst("E",3,(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;
		//newtemp
		(yyval.type_tnode)->place.flag = 2;
		newtemp(&((yyval.type_tnode)->place.temp));
		
		//E.code = 
		strcat((yyval.type_tnode)->code,(yyvsp[-2].type_tnode)->code);//E1.code ||
		strcat((yyval.type_tnode)->code,(yyvsp[0].type_tnode)->code);//T.code
		//E.place ???:=??? E1.place ???+??? T.place
		strcat((yyval.type_tnode)->code,getPlaceStr((yyval.type_tnode)));
		strcat((yyval.type_tnode)->code," := ");
		strcat((yyval.type_tnode)->code,getPlaceStr((yyvsp[-2].type_tnode)));
		strcat((yyval.type_tnode)->code," + ");
		strcat((yyval.type_tnode)->code,getPlaceStr((yyvsp[0].type_tnode)));
		strcat((yyval.type_tnode)->code,"\n");
		}
#line 1692 "syntax_tree.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 387 "syntax_tree.y" /* yacc.c:1646  */
    {
		printf("E:E-T\n");(yyval.type_tnode)=newAst("E",3,(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;
		//newtemp
		(yyval.type_tnode)->place.flag = 2;
		newtemp(&((yyval.type_tnode)->place.temp));
		
		//E.code = 
		strcat((yyval.type_tnode)->code,(yyvsp[-2].type_tnode)->code);//E1.code ||
		strcat((yyval.type_tnode)->code,(yyvsp[0].type_tnode)->code);//T.code
		//E.place ???:=??? E1.place ???-??? T.place
		strcat((yyval.type_tnode)->code,getPlaceStr((yyval.type_tnode)));
		strcat((yyval.type_tnode)->code," := ");
		strcat((yyval.type_tnode)->code,getPlaceStr((yyvsp[-2].type_tnode)));
		strcat((yyval.type_tnode)->code," - ");
		strcat((yyval.type_tnode)->code,getPlaceStr((yyvsp[0].type_tnode)));
		strcat((yyval.type_tnode)->code,"\n");
		}
#line 1714 "syntax_tree.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 404 "syntax_tree.y" /* yacc.c:1646  */
    {
		printf("E:T\n");(yyval.type_tnode)=newAst("E",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;
		(yyval.type_tnode)->place = (yyvsp[0].type_tnode)->place;
		strcat((yyval.type_tnode)->code,(yyvsp[0].type_tnode)->code);
		}
#line 1724 "syntax_tree.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 411 "syntax_tree.y" /* yacc.c:1646  */
    {
		printf("T:F\n");(yyval.type_tnode)=newAst("T",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;
		(yyval.type_tnode)->place = (yyvsp[0].type_tnode)->place;//T.place = F.place
		strcat((yyval.type_tnode)->code,(yyvsp[0].type_tnode)->code);//T.code = F.code
		}
#line 1734 "syntax_tree.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 416 "syntax_tree.y" /* yacc.c:1646  */
    {
		printf("T:T*F\n");(yyval.type_tnode)=newAst("T",3,(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;
		//newtemp
		(yyval.type_tnode)->place.flag = 2;
		newtemp(&((yyval.type_tnode)->place.temp));
		
		//T.code = 
		strcat((yyval.type_tnode)->code,(yyvsp[-2].type_tnode)->code);//T1.code ||
		strcat((yyval.type_tnode)->code,(yyvsp[0].type_tnode)->code);//F.code
		//T.place ???:=??? T1.place ???*??? F.place
		strcat((yyval.type_tnode)->code,getPlaceStr((yyval.type_tnode)));
		strcat((yyval.type_tnode)->code," := ");
		strcat((yyval.type_tnode)->code,getPlaceStr((yyvsp[-2].type_tnode)));
		strcat((yyval.type_tnode)->code," * ");
		strcat((yyval.type_tnode)->code,getPlaceStr((yyvsp[0].type_tnode)));
		strcat((yyval.type_tnode)->code,"\n");
		}
#line 1756 "syntax_tree.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 433 "syntax_tree.y" /* yacc.c:1646  */
    {
		printf("T:T/F\n");(yyval.type_tnode)=newAst("T",3,(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;
		//newtemp
		(yyval.type_tnode)->place.flag = 2;
		newtemp(&((yyval.type_tnode)->place.temp));
		
		//T.code = 
		strcat((yyval.type_tnode)->code,(yyvsp[-2].type_tnode)->code);//T1.code ||
		strcat((yyval.type_tnode)->code,(yyvsp[0].type_tnode)->code);//F.code
		//T.place ???:=??? T1.place ???/??? F.place
		strcat((yyval.type_tnode)->code,getPlaceStr((yyval.type_tnode)));
		strcat((yyval.type_tnode)->code," := ");
		strcat((yyval.type_tnode)->code,getPlaceStr((yyvsp[-2].type_tnode)));
		strcat((yyval.type_tnode)->code," / ");
		strcat((yyval.type_tnode)->code,getPlaceStr((yyvsp[0].type_tnode)));
		strcat((yyval.type_tnode)->code,"\n");
		}
#line 1778 "syntax_tree.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 452 "syntax_tree.y" /* yacc.c:1646  */
    {
		printf("F:(E)\n");(yyval.type_tnode)=newAst("F",3,(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;
		(yyval.type_tnode)->place = (yyvsp[-1].type_tnode)->place;//F.place = E.place
		strcat((yyval.type_tnode)->code,(yyvsp[-1].type_tnode)->code);//F.code = E.code
		}
#line 1788 "syntax_tree.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 457 "syntax_tree.y" /* yacc.c:1646  */
    {
		printf("F:OCT\n");(yyval.type_tnode)=newAst("F",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;
		char *endptr;
		(yyval.type_tnode)->place.flag = 1;//??????????????????????????????flag???1
		(yyval.type_tnode)->place.value.flag = 1;//???????????????????????????value???flag???1
		(yyval.type_tnode)->place.value.v = (int)strtol((yyvsp[0].type_tnode)->content, &endptr, 8);//??????
		}
#line 1800 "syntax_tree.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 464 "syntax_tree.y" /* yacc.c:1646  */
    {
		printf("F:DEC\n");(yyval.type_tnode)=newAst("F",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;
		char *endptr;
		(yyval.type_tnode)->place.flag = 1;//??????????????????????????????flag???1
		(yyval.type_tnode)->place.value.flag = 0;//???????????????????????????value???flag???0
		(yyval.type_tnode)->place.value.v = (int)strtol((yyvsp[0].type_tnode)->content, &endptr, 10);//??????
		}
#line 1812 "syntax_tree.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 471 "syntax_tree.y" /* yacc.c:1646  */
    {
		printf("F:HEX\n");(yyval.type_tnode)=newAst("F",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;
		char *endptr;
		(yyval.type_tnode)->place.flag = 1;//??????????????????????????????flag???1
		(yyval.type_tnode)->place.value.flag = 2;//???????????????????????????value???flag???2
		(yyval.type_tnode)->place.value.v = (int)strtol((yyvsp[0].type_tnode)->content, &endptr, 16);//??????
		}
#line 1824 "syntax_tree.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 478 "syntax_tree.y" /* yacc.c:1646  */
    {
		printf("F:id\n");(yyval.type_tnode)=newAst("F",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;
		(yyval.type_tnode)->place.flag = 0;//??????????????????????????????flag???0
		strcpy((yyval.type_tnode)->place.id_name,(yyvsp[0].type_tnode)->content);//?????????????????????????????????
		}
#line 1834 "syntax_tree.tab.c" /* yacc.c:1646  */
    break;


#line 1838 "syntax_tree.tab.c" /* yacc.c:1646  */
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
#line 484 "syntax_tree.y" /* yacc.c:1906  */

