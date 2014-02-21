/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 25 "awkgram.y"

#include <stdio.h>
#include <string.h>
#include "awk.h"

void checkdup(Node *list, Cell *item);
int yywrap(void) { return(1); }

Node	*beginloc = 0;
Node	*endloc = 0;
int	infunc	= 0;	/* = 1 if in arglist or body of func */
int	inloop	= 0;	/* = 1 if in while, for, do */
char	*curfname = 0;	/* current function name */
Node	*arglist = 0;	/* list of args for current function */


/* Line 268 of yacc.c  */
#line 88 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     FIRSTTOKEN = 258,
     PROGRAM = 259,
     PASTAT = 260,
     PASTAT2 = 261,
     XBEGIN = 262,
     XEND = 263,
     NL = 264,
     ARRAY = 265,
     MATCH = 266,
     NOTMATCH = 267,
     MATCHOP = 268,
     FINAL = 269,
     DOT = 270,
     ALL = 271,
     CCL = 272,
     NCCL = 273,
     CHAR = 274,
     OR = 275,
     STAR = 276,
     QUEST = 277,
     PLUS = 278,
     EMPTYRE = 279,
     AND = 280,
     BOR = 281,
     APPEND = 282,
     EQ = 283,
     GE = 284,
     GT = 285,
     LE = 286,
     LT = 287,
     NE = 288,
     IN = 289,
     ARG = 290,
     BLTIN = 291,
     BREAK = 292,
     CLOSE = 293,
     CONTINUE = 294,
     DELETE = 295,
     DO = 296,
     EXIT = 297,
     FOR = 298,
     FUNC = 299,
     SUB = 300,
     GSUB = 301,
     IF = 302,
     INDEX = 303,
     LSUBSTR = 304,
     MATCHFCN = 305,
     NEXT = 306,
     NEXTFILE = 307,
     ADD = 308,
     MINUS = 309,
     MULT = 310,
     DIVIDE = 311,
     MOD = 312,
     ASSIGN = 313,
     ASGNOP = 314,
     ADDEQ = 315,
     SUBEQ = 316,
     MULTEQ = 317,
     DIVEQ = 318,
     MODEQ = 319,
     POWEQ = 320,
     PRINT = 321,
     PRINTF = 322,
     SPRINTF = 323,
     ELSE = 324,
     INTEST = 325,
     CONDEXPR = 326,
     POSTINCR = 327,
     PREINCR = 328,
     POSTDECR = 329,
     PREDECR = 330,
     VAR = 331,
     IVAR = 332,
     VARNF = 333,
     CALL = 334,
     NUMBER = 335,
     STRING = 336,
     REGEXPR = 337,
     FROM = 338,
     TO = 339,
     BY = 340,
     GETLINE = 341,
     SUBSTR = 342,
     SPLIT = 343,
     RETURN = 344,
     WHILE = 345,
     CAT = 346,
     UMINUS = 347,
     NOT = 348,
     POWER = 349,
     INCR = 350,
     DECR = 351,
     INDIRECT = 352,
     LASTTOKEN = 353
   };
#endif
/* Tokens.  */
#define FIRSTTOKEN 258
#define PROGRAM 259
#define PASTAT 260
#define PASTAT2 261
#define XBEGIN 262
#define XEND 263
#define NL 264
#define ARRAY 265
#define MATCH 266
#define NOTMATCH 267
#define MATCHOP 268
#define FINAL 269
#define DOT 270
#define ALL 271
#define CCL 272
#define NCCL 273
#define CHAR 274
#define OR 275
#define STAR 276
#define QUEST 277
#define PLUS 278
#define EMPTYRE 279
#define AND 280
#define BOR 281
#define APPEND 282
#define EQ 283
#define GE 284
#define GT 285
#define LE 286
#define LT 287
#define NE 288
#define IN 289
#define ARG 290
#define BLTIN 291
#define BREAK 292
#define CLOSE 293
#define CONTINUE 294
#define DELETE 295
#define DO 296
#define EXIT 297
#define FOR 298
#define FUNC 299
#define SUB 300
#define GSUB 301
#define IF 302
#define INDEX 303
#define LSUBSTR 304
#define MATCHFCN 305
#define NEXT 306
#define NEXTFILE 307
#define ADD 308
#define MINUS 309
#define MULT 310
#define DIVIDE 311
#define MOD 312
#define ASSIGN 313
#define ASGNOP 314
#define ADDEQ 315
#define SUBEQ 316
#define MULTEQ 317
#define DIVEQ 318
#define MODEQ 319
#define POWEQ 320
#define PRINT 321
#define PRINTF 322
#define SPRINTF 323
#define ELSE 324
#define INTEST 325
#define CONDEXPR 326
#define POSTINCR 327
#define PREINCR 328
#define POSTDECR 329
#define PREDECR 330
#define VAR 331
#define IVAR 332
#define VARNF 333
#define CALL 334
#define NUMBER 335
#define STRING 336
#define REGEXPR 337
#define FROM 338
#define TO 339
#define BY 340
#define GETLINE 341
#define SUBSTR 342
#define SPLIT 343
#define RETURN 344
#define WHILE 345
#define CAT 346
#define UMINUS 347
#define NOT 348
#define POWER 349
#define INCR 350
#define DECR 351
#define INDIRECT 352
#define LASTTOKEN 353




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 41 "awkgram.y"

	Node	*p;
	Cell	*cp;
	int      i;
	char	*s;



/* Line 293 of yacc.c  */
#line 329 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 341 "y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   4970

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  115
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  189
/* YYNRULES -- Number of states.  */
#define YYNSTATES  380

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   353

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   107,     2,     2,
      12,    16,   106,   104,    10,   105,     2,    15,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    97,    14,
       2,     2,     2,    96,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    18,     2,    19,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    11,    13,    17,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    98,    99,   100,   101,   102,   103,   108,   109,   110,
     111,   112,   113,   114
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    12,    14,    17,    19,
      22,    24,    27,    29,    32,    33,    46,    47,    58,    59,
      68,    69,    82,    83,    94,    96,    98,   103,   105,   108,
     110,   113,   114,   116,   117,   119,   120,   122,   124,   128,
     130,   132,   137,   142,   150,   154,   159,   164,   165,   175,
     177,   181,   183,   187,   191,   197,   201,   205,   209,   213,
     217,   223,   226,   228,   230,   234,   240,   244,   248,   252,
     256,   260,   264,   268,   272,   276,   280,   284,   290,   295,
     299,   302,   304,   306,   310,   314,   316,   320,   321,   323,
     327,   329,   331,   333,   335,   338,   341,   343,   346,   348,
     351,   352,   357,   359,   362,   367,   372,   377,   380,   386,
     389,   391,   393,   395,   398,   401,   404,   405,   406,   416,
     420,   423,   425,   430,   433,   437,   440,   443,   447,   450,
     453,   454,   458,   461,   463,   466,   468,   470,   475,   479,
     483,   487,   491,   495,   499,   502,   505,   508,   512,   517,
     519,   523,   528,   531,   534,   537,   540,   543,   548,   552,
     555,   557,   564,   571,   575,   582,   589,   591,   600,   609,
     616,   621,   623,   630,   637,   646,   655,   664,   671,   673,
     675,   680,   682,   685,   686,   688,   692,   694,   696,   698
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     116,     0,    -1,   135,    -1,     1,    -1,    35,    -1,   117,
       9,    -1,    36,    -1,   118,     9,    -1,    10,    -1,   119,
       9,    -1,    51,    -1,   120,     9,    -1,    79,    -1,   121,
       9,    -1,    -1,    53,    12,   134,    14,   132,   142,    14,
     132,   134,   152,   123,   155,    -1,    -1,    53,    12,   134,
      14,    14,   132,   134,   152,   124,   155,    -1,    -1,    53,
      12,   164,    44,   164,   152,   125,   155,    -1,    -1,    53,
      12,   164,    93,   161,    94,   161,    95,   161,   152,   126,
     155,    -1,    -1,    53,    12,   164,    93,   161,    94,   161,
     152,   127,   155,    -1,    86,    -1,    89,    -1,    57,    12,
     142,   152,    -1,    11,    -1,   130,     9,    -1,     9,    -1,
     131,     9,    -1,    -1,   131,    -1,    -1,   147,    -1,    -1,
     153,    -1,   133,    -1,   133,   139,   133,    -1,   142,    -1,
     136,    -1,   136,   130,   159,    17,    -1,   136,    10,   132,
     136,    -1,   136,    10,   132,   136,   130,   159,    17,    -1,
     130,   159,    17,    -1,     7,   130,   159,    17,    -1,     8,
     130,   159,    17,    -1,    -1,    54,   128,    12,   163,   152,
     138,   130,   159,    17,    -1,   137,    -1,   139,   133,   137,
      -1,   142,    -1,   140,   119,   142,    -1,   162,    69,   141,
      -1,   141,    96,   141,    97,   141,    -1,   141,   118,   141,
      -1,   141,   117,   141,    -1,   141,    23,   150,    -1,   141,
      23,   141,    -1,   141,    44,   164,    -1,    12,   143,    16,
      44,   164,    -1,   141,   161,    -1,   149,    -1,   161,    -1,
     162,    69,   142,    -1,   142,    96,   142,    97,   142,    -1,
     142,   118,   142,    -1,   142,   117,   142,    -1,   142,    38,
     142,    -1,   142,    39,   142,    -1,   142,    40,   142,    -1,
     142,    41,   142,    -1,   142,    42,   142,    -1,   142,    43,
     142,    -1,   142,    23,   150,    -1,   142,    23,   142,    -1,
     142,    44,   164,    -1,    12,   143,    16,    44,   164,    -1,
     142,    13,    98,   162,    -1,   142,    13,    98,    -1,   142,
     161,    -1,   149,    -1,   161,    -1,   142,   119,   142,    -1,
     143,   119,   142,    -1,   141,    -1,   144,   119,   141,    -1,
      -1,   144,    -1,    12,   143,    16,    -1,    76,    -1,    77,
      -1,     9,    -1,    14,    -1,   147,     9,    -1,   147,    14,
      -1,    17,    -1,   148,     9,    -1,   150,    -1,   109,   149,
      -1,    -1,    15,   151,    92,    15,    -1,    16,    -1,   152,
       9,    -1,   146,   145,    13,   161,    -1,   146,   145,    37,
     161,    -1,   146,   145,    40,   161,    -1,   146,   145,    -1,
      50,   164,    18,   140,    19,    -1,    50,   164,    -1,   142,
      -1,     1,    -1,   131,    -1,    14,   132,    -1,    47,   154,
      -1,    49,   154,    -1,    -1,    -1,   120,   156,   155,   157,
     102,    12,   142,    16,   154,    -1,    52,   142,   154,    -1,
      52,   154,    -1,   122,    -1,   129,   155,   121,   155,    -1,
     129,   155,    -1,   130,   159,   148,    -1,    61,   154,    -1,
      62,   154,    -1,   101,   142,   154,    -1,   101,   154,    -1,
     153,   154,    -1,    -1,   165,   158,   155,    -1,    14,   132,
      -1,   155,    -1,   159,   155,    -1,    55,    -1,    56,    -1,
     161,    15,    69,   161,    -1,   161,   104,   161,    -1,   161,
     105,   161,    -1,   161,   106,   161,    -1,   161,    15,   161,
      -1,   161,   107,   161,    -1,   161,   110,   161,    -1,   105,
     161,    -1,   104,   161,    -1,   109,   161,    -1,    46,    12,
      16,    -1,    46,    12,   140,    16,    -1,    46,    -1,    89,
      12,    16,    -1,    89,    12,   140,    16,    -1,    48,   161,
      -1,   112,   162,    -1,   111,   162,    -1,   162,   112,    -1,
     162,   111,    -1,    98,   162,    42,   161,    -1,    98,    42,
     161,    -1,    98,   162,    -1,    98,    -1,    58,    12,   142,
     119,   142,    16,    -1,    58,    12,   142,   119,   150,    16,
      -1,    12,   142,    16,    -1,    60,    12,   142,   119,   150,
      16,    -1,    60,    12,   142,   119,   142,    16,    -1,    90,
      -1,   100,    12,   142,   119,   164,   119,   142,    16,    -1,
     100,    12,   142,   119,   164,   119,   150,    16,    -1,   100,
      12,   142,   119,   164,    16,    -1,    78,    12,   140,    16,
      -1,    91,    -1,   160,    12,   150,   119,   142,    16,    -1,
     160,    12,   142,   119,   142,    16,    -1,   160,    12,   150,
     119,   142,   119,   162,    16,    -1,   160,    12,   142,   119,
     142,   119,   162,    16,    -1,    99,    12,   142,   119,   142,
     119,   142,    16,    -1,    99,    12,   142,   119,   142,    16,
      -1,   162,    -1,   164,    -1,   164,    18,   140,    19,    -1,
      87,    -1,   113,   161,    -1,    -1,    86,    -1,   163,   119,
      86,    -1,    86,    -1,    45,    -1,    88,    -1,   102,    12,
     142,   152,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   100,   100,   102,   106,   106,   110,   110,   114,   114,
     118,   118,   122,   122,   126,   126,   128,   128,   130,   130,
     132,   132,   134,   134,   139,   140,   144,   148,   148,   152,
     152,   156,   157,   161,   162,   167,   168,   172,   173,   177,
     181,   182,   183,   184,   185,   186,   188,   190,   190,   195,
     196,   200,   201,   205,   206,   208,   210,   212,   213,   218,
     219,   220,   221,   222,   226,   227,   229,   231,   233,   234,
     235,   236,   237,   238,   239,   240,   245,   246,   247,   250,
     253,   254,   255,   259,   260,   264,   265,   269,   270,   271,
     275,   275,   279,   279,   279,   279,   283,   283,   287,   289,
     293,   293,   297,   297,   301,   304,   307,   310,   311,   312,
     313,   314,   318,   319,   323,   325,   327,   327,   327,   329,
     330,   331,   332,   333,   334,   335,   338,   341,   342,   343,
     344,   344,   345,   349,   350,   354,   354,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   384,   387,   388,   390,   395,   396,   398,   400,
     402,   403,   404,   406,   411,   413,   418,   420,   422,   426,
     427,   428,   429,   433,   434,   435,   441,   442,   443,   448
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FIRSTTOKEN", "PROGRAM", "PASTAT",
  "PASTAT2", "XBEGIN", "XEND", "NL", "','", "'{'", "'('", "'|'", "';'",
  "'/'", "')'", "'}'", "'['", "']'", "ARRAY", "MATCH", "NOTMATCH",
  "MATCHOP", "FINAL", "DOT", "ALL", "CCL", "NCCL", "CHAR", "OR", "STAR",
  "QUEST", "PLUS", "EMPTYRE", "AND", "BOR", "APPEND", "EQ", "GE", "GT",
  "LE", "LT", "NE", "IN", "ARG", "BLTIN", "BREAK", "CLOSE", "CONTINUE",
  "DELETE", "DO", "EXIT", "FOR", "FUNC", "SUB", "GSUB", "IF", "INDEX",
  "LSUBSTR", "MATCHFCN", "NEXT", "NEXTFILE", "ADD", "MINUS", "MULT",
  "DIVIDE", "MOD", "ASSIGN", "ASGNOP", "ADDEQ", "SUBEQ", "MULTEQ", "DIVEQ",
  "MODEQ", "POWEQ", "PRINT", "PRINTF", "SPRINTF", "ELSE", "INTEST",
  "CONDEXPR", "POSTINCR", "PREINCR", "POSTDECR", "PREDECR", "VAR", "IVAR",
  "VARNF", "CALL", "NUMBER", "STRING", "REGEXPR", "FROM", "TO", "BY",
  "'?'", "':'", "GETLINE", "SUBSTR", "SPLIT", "RETURN", "WHILE", "CAT",
  "'+'", "'-'", "'*'", "'%'", "UMINUS", "NOT", "POWER", "INCR", "DECR",
  "INDIRECT", "LASTTOKEN", "$accept", "program", "and", "bor", "comma",
  "do", "else", "for", "$@1", "$@2", "$@3", "$@4", "$@5", "funcname", "if",
  "lbrace", "nl", "opt_nl", "opt_pst", "opt_simple_stmt", "pas", "pa_pat",
  "pa_stat", "$@6", "pa_stats", "patlist", "ppattern", "pattern", "plist",
  "pplist", "prarg", "print", "pst", "rbrace", "re", "reg_expr", "$@7",
  "rparen", "simple_stmt", "st", "stmt", "$@8", "$@9", "$@10", "stmtlist",
  "subop", "term", "var", "varlist", "varname", "while", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
      44,   123,    40,   124,    59,    47,    41,   125,    91,    93,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,    63,    58,   341,   342,
     343,   344,   345,   346,    43,    45,    42,    37,   347,   348,
     349,   350,   351,   352,   353
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   115,   116,   116,   117,   117,   118,   118,   119,   119,
     120,   120,   121,   121,   123,   122,   124,   122,   125,   122,
     126,   122,   127,   122,   128,   128,   129,   130,   130,   131,
     131,   132,   132,   133,   133,   134,   134,   135,   135,   136,
     137,   137,   137,   137,   137,   137,   137,   138,   137,   139,
     139,   140,   140,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   141,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   143,   143,   144,   144,   145,   145,   145,
     146,   146,   147,   147,   147,   147,   148,   148,   149,   149,
     151,   150,   152,   152,   153,   153,   153,   153,   153,   153,
     153,   153,   154,   154,   155,   155,   156,   157,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     158,   155,   155,   159,   159,   160,   160,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   162,
     162,   162,   162,   163,   163,   163,   164,   164,   164,   165
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     0,    12,     0,    10,     0,     8,
       0,    12,     0,    10,     1,     1,     4,     1,     2,     1,
       2,     0,     1,     0,     1,     0,     1,     1,     3,     1,
       1,     4,     4,     7,     3,     4,     4,     0,     9,     1,
       3,     1,     3,     3,     5,     3,     3,     3,     3,     3,
       5,     2,     1,     1,     3,     5,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     5,     4,     3,
       2,     1,     1,     3,     3,     1,     3,     0,     1,     3,
       1,     1,     1,     1,     2,     2,     1,     2,     1,     2,
       0,     4,     1,     2,     4,     4,     4,     2,     5,     2,
       1,     1,     1,     2,     2,     2,     0,     0,     9,     3,
       2,     1,     4,     2,     3,     2,     2,     3,     2,     2,
       0,     3,     2,     1,     2,     1,     1,     4,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     3,     4,     1,
       3,     4,     2,     2,     2,     2,     2,     4,     3,     2,
       1,     6,     6,     3,     6,     6,     1,     8,     8,     6,
       4,     1,     6,     6,     8,     8,     8,     6,     1,     1,
       4,     1,     2,     0,     1,     3,     1,     1,     1,     4
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     3,    92,    93,     0,    37,     2,    34,     1,     0,
       0,    27,     0,   100,   187,   149,     0,     0,   135,   136,
       0,     0,     0,   186,   181,   188,     0,   166,   171,   160,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    40,
      49,    33,    39,    81,    98,     0,    82,   178,   179,    94,
      95,     0,     0,     0,     0,     0,     0,     0,     0,   152,
     178,    24,    25,     0,     0,     0,     0,     0,     0,   159,
       0,     0,   145,   144,    99,   146,   154,   153,   182,   111,
      28,    31,     0,     0,     0,    10,     0,     0,     0,     0,
       0,    90,    91,     0,     0,   116,   121,     0,     0,   110,
      87,     0,   133,     0,   130,    31,     0,    38,     0,     0,
       4,     6,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    80,     0,     0,     0,     0,     0,     0,     0,
       0,   156,   155,     0,     0,     0,     8,   163,     0,     0,
       0,     0,   147,     0,    51,     0,   183,     0,     0,     0,
     150,     0,   158,     0,     0,     0,    29,    32,   132,    31,
     112,   114,   115,   109,     0,   120,     0,     0,   125,   126,
       0,   128,     0,    11,     0,   123,     0,     0,    85,    88,
     107,    62,    63,   178,   129,    44,   134,     0,     0,     0,
      50,    79,    75,    74,    68,    69,    70,    71,    72,    73,
      76,     0,     5,    67,     7,    66,     0,    98,     0,   141,
     138,   139,   140,   142,   143,    64,     0,    45,    46,     9,
      83,     0,    84,   101,   148,     0,   184,     0,     0,     0,
     170,   151,   157,     0,     0,    30,   113,     0,   119,     0,
      36,   179,     0,   127,     0,   117,    12,     0,    96,   124,
       0,     0,     0,     0,     0,     0,    61,     0,     0,     0,
       0,     0,   131,    42,    41,    78,     0,     0,     0,   137,
     180,    77,    52,   102,     0,    47,     0,    98,     0,    98,
       0,     0,     0,    31,     0,     0,    26,   189,     0,    13,
     122,    97,    89,     0,    58,    57,    59,     0,    56,    55,
      86,   104,   105,   106,    53,     0,    65,     0,     0,   185,
     103,     0,   161,   162,   165,   164,   177,     0,   169,     0,
     108,    31,     0,     0,     0,     0,     0,     0,     0,     0,
     173,     0,   172,     0,     0,     0,     0,    98,     0,     0,
      18,     0,     0,    60,     0,    54,    43,     0,     0,     0,
     176,   167,   168,     0,    31,     0,     0,     0,   175,   174,
      48,    16,     0,    19,     0,    22,     0,     0,     0,     0,
       0,   118,    17,    14,    20,    23,     0,     0,    15,    21
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,   120,   121,   225,    95,   247,    96,   376,   367,
     355,   377,   370,    63,    97,    98,   160,   158,     5,   239,
       6,    39,    40,   311,    41,   143,   178,    99,    54,   179,
     180,   100,     7,   249,    43,    44,    55,   275,   101,   161,
     102,   174,   288,   187,   103,    45,    46,    47,   227,    48,
     104
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -310
static const yytype_int16 yypact[] =
{
     743,  -310,  -310,  -310,    47,  1955,  -310,    50,  -310,    46,
      46,  -310,  4538,  -310,  -310,    59,  4857,   -17,  -310,  -310,
     105,   114,   122,  -310,  -310,  -310,   123,  -310,  -310,   288,
     124,   133,  4857,  4857,  4607,   218,   218,  4857,   848,    96,
    -310,    72,  3890,  -310,  -310,   141,   203,   -38,    98,  -310,
    -310,   848,   848,  2576,    30,    69,  4394,  4538,  4857,   203,
       3,  -310,  -310,   156,  4538,  4538,  4538,  4431,  4857,   127,
    4538,  4538,    62,    62,  -310,    62,  -310,  -310,  -310,  -310,
    -310,   191,   177,   177,   -21,  -310,  2100,   196,   197,   177,
     177,  -310,  -310,  2100,   205,   210,  -310,  1722,   848,  3890,
    4644,   177,  -310,   953,  -310,   191,   848,  1955,   132,  4538,
    -310,  -310,  4538,  4538,  4538,  4538,  4538,  4538,   -21,  4538,
    2162,  2224,   203,  4538,  4713,  4857,  4857,  4857,  4857,  4857,
    4538,  -310,  -310,  4538,  1058,  1163,  -310,  -310,  2286,   188,
    2286,   225,  -310,    80,  3890,  3086,   148,  2992,  2992,    85,
    -310,   117,   203,  4857,  2992,  2992,  -310,   237,  -310,   191,
     237,  -310,  -310,   232,  2038,  -310,  1791,  4538,  -310,  -310,
    2038,  -310,  4538,  -310,  1722,   172,  1268,  4538,  4263,   242,
      42,  -310,   203,   -34,  -310,  -310,  -310,  1722,  4538,  1373,
    -310,   218,  4130,  -310,  4130,  4130,  4130,  4130,  4130,  4130,
    -310,  3166,  -310,  4050,  -310,  3970,  2992,   242,  4857,    62,
      34,    34,    62,    62,    62,  3890,    24,  -310,  -310,  -310,
    3890,   -21,  3890,  -310,  -310,  2286,  -310,   161,  2286,  2286,
    -310,  -310,   203,  2286,    16,  -310,  -310,  4538,  -310,   239,
    -310,    -8,  3260,  -310,  3260,  -310,  -310,  1443,  -310,   245,
     178,  4750,   -21,  4750,  2348,  2410,   203,  2472,  4857,  4857,
    4857,  4750,  -310,    46,  -310,  -310,  4538,  2286,  2286,   203,
    -310,  -310,  3890,  -310,    -6,   248,  3354,   250,  3448,   252,
    2680,   185,    44,   198,   -21,  4857,   248,   248,   168,  -310,
    -310,  -310,   214,  4538,  4820,  -310,  -310,  4192,  4501,  4325,
    4263,   203,   203,   203,  4263,   848,  3890,  2784,  2888,  -310,
    -310,    46,  -310,  -310,  -310,  -310,  -310,  2286,  -310,  2286,
    -310,   191,  4538,   255,    53,   260,   -21,   186,  4750,  1548,
    -310,     5,  -310,     5,   848,  3542,  3636,   257,  1860,  3716,
     248,  4857,  4538,  -310,   214,  4263,  -310,   258,   263,  1653,
    -310,  -310,  -310,   255,   191,  1722,    -7,  3810,  -310,  -310,
    -310,   248,  1860,  -310,  4857,   248,   177,  1722,   255,    60,
    1722,  -310,  -310,   248,   248,  -310,  1722,  1722,  -310,  -310
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -310,  -310,  -148,   -84,   415,  -310,  -310,  -310,  -310,  -310,
    -310,  -310,  -310,  -310,  -310,    23,   -54,   -99,   246,  -309,
    -310,   101,   190,  -310,  -310,   -44,   104,   547,  -170,  -310,
    -310,  -310,  -310,  -310,   -30,  -108,  -310,  -120,  -164,   -45,
     219,  -310,  -310,  -310,   -40,  -310,   243,   -16,  -310,   -79,
    -310
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -36
static const yytype_int16 yytable[] =
{
      60,   193,   240,   219,    74,   163,   188,   250,   124,   273,
     133,   134,   135,    69,   219,   207,    60,    60,    60,    76,
      77,    60,   149,   151,    14,   219,    60,   157,    38,   353,
     254,   130,    51,    52,   136,   261,   284,    60,   162,   200,
     136,   165,    60,   270,   168,   169,   139,     8,   171,   124,
      14,   157,    60,   368,   136,   258,   184,    11,   176,    49,
     236,    14,   106,   320,    50,    23,   189,    25,   124,    61,
     181,    56,    62,   131,   132,   124,   273,   131,   132,   259,
     309,     2,   260,    60,   183,   285,     3,   241,   364,   216,
     136,    23,    24,    25,   255,   136,   224,   125,   126,   127,
     128,   230,    23,   129,    25,   157,   105,    11,    60,    60,
      60,    60,    60,    60,   131,   132,   133,    64,    37,   238,
     277,   279,   286,   327,   287,   243,    65,   136,    60,    60,
      38,    60,    60,   231,    66,    67,    70,    60,    60,    60,
     127,   128,   271,   295,   129,    71,   254,   341,    60,   254,
     254,   254,   254,   123,    60,   281,   254,   125,   126,   127,
     128,   141,    60,   129,   125,   126,   127,   128,   146,   153,
     129,   136,   129,   296,   240,   265,    60,   273,    60,    60,
      60,    60,    60,    60,   322,    60,   156,    60,   136,    60,
      60,   159,    60,   282,   292,   136,   136,   254,   240,    60,
     156,   318,   344,   340,    60,   323,    60,   156,   166,   167,
     255,   337,   321,   255,   255,   255,   255,   172,   124,   173,
     255,   181,   338,   181,   181,   181,    60,   181,    60,   157,
     191,   181,   221,   361,   226,   183,   365,   183,   183,   183,
     223,   183,    60,    60,    60,   183,   235,   343,   373,   374,
     237,   246,   136,   283,   291,   362,    60,   310,   326,    59,
      60,   255,    60,    14,    60,   329,   313,   157,   315,    60,
     325,   273,   342,   352,   358,    72,    73,    75,    60,   359,
      78,    60,    60,    60,    60,   122,   305,   107,    60,   263,
      60,    60,    60,     0,   349,     0,   122,   190,   181,     0,
     157,    75,     0,     0,    23,    24,    25,   125,   126,   127,
     128,   152,   183,   129,     0,   347,   175,   348,     0,    60,
      60,   371,   186,    60,     0,    60,     0,     0,     0,    60,
      68,    37,     0,    14,   334,     0,     0,     0,     0,     0,
       0,    60,   122,   182,     0,     0,     0,     0,    60,     0,
       0,     0,     0,   186,   186,   294,     0,   297,   298,   299,
       0,   300,     0,     0,     0,   304,     0,   209,   210,   211,
     212,   213,   214,     0,    23,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   122,   122,     0,
     122,   122,     0,   245,     0,   186,   232,   122,   122,     0,
       0,    37,     0,     0,     0,     0,   262,   122,   186,     0,
       0,     0,     0,   122,     0,     0,     0,     0,     0,     0,
       0,   256,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   345,     0,     0,   122,     0,   122,   122,   122,
     122,   122,   122,     0,   122,     0,   122,     0,   122,   122,
       0,   269,     0,     0,     0,     0,     0,     0,   122,     0,
       0,     0,     0,   122,     0,   122,   290,     0,   138,   140,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   122,     0,   122,     0,     0,
       0,     0,     0,     0,   182,     0,   182,   182,   182,     0,
     182,   301,   302,   303,   182,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   122,     0,     0,     0,   122,
       0,   122,     0,   122,     0,     0,     0,     0,   324,     0,
       0,     0,     0,     0,     0,     0,     0,   256,     0,     0,
     256,   256,   256,   256,     0,     0,     0,   256,   186,   122,
     122,   122,    42,     0,     0,     0,     0,     0,     0,    53,
       0,     0,   228,   229,     0,     0,     0,     0,   186,   233,
     234,   182,     0,     0,   363,     0,     0,     0,   122,   122,
       0,     0,   122,     0,   356,     0,   372,     0,   256,   375,
       0,     0,     0,     0,   257,   378,   379,     0,     0,     0,
     122,     0,     0,   144,   145,     0,     0,   369,     0,     0,
       0,   147,   148,   144,   144,     0,     0,   154,   155,     0,
       0,   267,   268,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   164,     0,     0,     0,     0,     0,     0,
     170,     0,   274,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    42,     0,   192,     0,     0,   194,
     195,   196,   197,   198,   199,   140,   201,   203,   205,     0,
     206,     0,     0,     0,     0,     0,     0,   215,     0,     0,
     144,     0,     0,     0,     0,   220,     0,   222,     0,     0,
       0,     0,     0,     0,     0,   317,   319,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   242,     0,     0,     0,     0,   244,
       0,     0,   331,   333,    53,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    42,     0,     0,     0,     0,
       0,     0,   140,   -33,     1,     0,     0,     0,     0,     0,
     -33,   -33,     2,     0,   -33,   -33,     0,     3,   -33,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   272,     0,     0,   276,   278,     0,     0,     0,
     280,     0,     0,     0,   144,     0,     0,     0,   -33,   -33,
       0,   -33,     0,     0,     0,     0,     0,   -33,   -33,   -33,
       0,   -33,     0,   -33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   306,   307,   308,     0,     0,     0,     0,
       0,   -33,     0,     0,     0,     0,     0,     0,     0,   -33,
     -33,   -33,   -33,   -33,   -33,     0,     0,     0,     0,     0,
      53,   -33,   -33,   -33,     0,     0,     0,   -33,   -33,    79,
       0,     0,   -33,     0,   -33,   -33,   -33,    80,     0,    11,
      12,     0,    81,    13,   335,     0,   336,     0,     0,   339,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   357,
       0,     0,     0,    14,    15,    82,    16,    83,    84,    85,
      86,    87,     0,    18,    19,    88,    20,     0,    21,    89,
      90,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    22,     0,     0,     0,
       0,     0,     0,     0,    23,    24,    25,    26,    27,    28,
       0,     0,     0,     0,     0,     0,    29,    30,    31,    93,
      94,     0,    32,    33,    79,     0,     0,    34,     0,    35,
      36,    37,     0,     0,    11,    12,     0,    81,    13,     0,
     185,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    14,    15,
      82,    16,    83,    84,    85,    86,    87,     0,    18,    19,
      88,    20,     0,    21,    89,    90,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    91,
      92,    22,     0,     0,     0,     0,     0,     0,     0,    23,
      24,    25,    26,    27,    28,     0,     0,     0,     0,     0,
       0,    29,    30,    31,    93,    94,     0,    32,    33,    79,
       0,     0,    34,     0,    35,    36,    37,     0,     0,    11,
      12,     0,    81,    13,     0,   217,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    14,    15,    82,    16,    83,    84,    85,
      86,    87,     0,    18,    19,    88,    20,     0,    21,    89,
      90,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    22,     0,     0,     0,
       0,     0,     0,     0,    23,    24,    25,    26,    27,    28,
       0,     0,     0,     0,     0,     0,    29,    30,    31,    93,
      94,     0,    32,    33,    79,     0,     0,    34,     0,    35,
      36,    37,     0,     0,    11,    12,     0,    81,    13,     0,
     218,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    14,    15,
      82,    16,    83,    84,    85,    86,    87,     0,    18,    19,
      88,    20,     0,    21,    89,    90,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    91,
      92,    22,     0,     0,     0,     0,     0,     0,     0,    23,
      24,    25,    26,    27,    28,     0,     0,     0,     0,     0,
       0,    29,    30,    31,    93,    94,     0,    32,    33,    79,
       0,     0,    34,     0,    35,    36,    37,     0,     0,    11,
      12,     0,    81,    13,     0,   248,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    14,    15,    82,    16,    83,    84,    85,
      86,    87,     0,    18,    19,    88,    20,     0,    21,    89,
      90,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    22,     0,     0,     0,
       0,     0,     0,     0,    23,    24,    25,    26,    27,    28,
       0,     0,     0,     0,     0,     0,    29,    30,    31,    93,
      94,     0,    32,    33,    79,     0,     0,    34,     0,    35,
      36,    37,     0,     0,    11,    12,     0,    81,    13,     0,
     264,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    14,    15,
      82,    16,    83,    84,    85,    86,    87,     0,    18,    19,
      88,    20,     0,    21,    89,    90,     0,     0,     0,     0,
       0,     0,     0,     0,    79,     0,     0,     0,     0,    91,
      92,    22,   289,     0,    11,    12,     0,    81,    13,    23,
      24,    25,    26,    27,    28,     0,     0,     0,     0,     0,
       0,    29,    30,    31,    93,    94,     0,    32,    33,     0,
       0,     0,    34,     0,    35,    36,    37,     0,    14,    15,
      82,    16,    83,    84,    85,    86,    87,     0,    18,    19,
      88,    20,     0,    21,    89,    90,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    91,
      92,    22,     0,     0,     0,     0,     0,     0,     0,    23,
      24,    25,    26,    27,    28,     0,     0,     0,     0,     0,
       0,    29,    30,    31,    93,    94,     0,    32,    33,    79,
       0,     0,    34,     0,    35,    36,    37,     0,     0,    11,
      12,     0,    81,    13,     0,   346,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    14,    15,    82,    16,    83,    84,    85,
      86,    87,     0,    18,    19,    88,    20,     0,    21,    89,
      90,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    22,     0,     0,     0,
       0,     0,     0,     0,    23,    24,    25,    26,    27,    28,
       0,     0,     0,     0,     0,     0,    29,    30,    31,    93,
      94,     0,    32,    33,    79,     0,     0,    34,     0,    35,
      36,    37,     0,     0,    11,    12,     0,    81,    13,     0,
     360,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    14,    15,
      82,    16,    83,    84,    85,    86,    87,     0,    18,    19,
      88,    20,     0,    21,    89,    90,     0,     0,     0,     0,
       0,     0,     0,    79,     0,     0,     0,     0,     0,    91,
      92,    22,     0,    11,    12,     0,    81,    13,     0,    23,
      24,    25,    26,    27,    28,     0,     0,     0,     0,     0,
       0,    29,    30,    31,    93,    94,     0,    32,    33,     0,
       0,     0,    34,     0,    35,    36,    37,    14,    15,    82,
      16,    83,    84,    85,    86,    87,     0,    18,    19,    88,
      20,     0,    21,    89,    90,     0,     0,     0,     0,     0,
       0,     0,    79,     0,     0,     0,     0,     0,    91,    92,
      22,     0,     0,    12,     0,   -35,    13,     0,    23,    24,
      25,    26,    27,    28,     0,     0,     0,     0,     0,     0,
      29,    30,    31,    93,    94,     0,    32,    33,     0,     0,
       0,    34,     0,    35,    36,    37,    14,    15,     0,    16,
       0,    84,     0,     0,     0,     0,    18,    19,     0,    20,
       0,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    79,     0,     0,     0,     0,     0,    91,    92,    22,
       0,     0,    12,     0,     0,    13,   -35,    23,    24,    25,
      26,    27,    28,     0,     0,     0,     0,     0,     0,    29,
      30,    31,     0,     0,     0,    32,    33,     0,     0,     0,
      34,     0,    35,    36,    37,    14,    15,     0,    16,     0,
      84,     0,     0,     0,     0,    18,    19,     0,    20,     0,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    91,    92,    22,     0,
       0,     0,     0,     0,     0,     0,    23,    24,    25,    26,
      27,    28,     0,     0,     0,     0,     0,     0,    29,    30,
      31,     0,     9,    10,    32,    33,    11,    12,     0,    34,
      13,    35,    36,    37,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      14,    15,     0,    16,     0,     0,     0,     0,     0,    17,
      18,    19,     0,    20,     0,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    22,     0,     0,     0,     0,     0,     0,
       0,    23,    24,    25,    26,    27,    28,   156,     0,     0,
      57,   108,   159,    29,    30,    31,     0,     0,     0,    32,
      33,   109,     0,     0,    34,     0,    35,    36,    37,     0,
       0,     0,     0,   110,   111,     0,   112,   113,   114,   115,
     116,   117,   118,    14,    15,     0,    16,     0,     0,     0,
       0,     0,     0,    18,    19,     0,    20,     0,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   156,
       0,     0,    12,     0,   159,    13,    22,     0,     0,     0,
       0,     0,     0,     0,    23,    24,    25,    26,    27,    28,
       0,     0,     0,     0,   119,     0,    29,    30,    31,     0,
       0,     0,    32,    33,     0,    14,    15,    58,    16,    35,
      36,    37,     0,     0,     0,    18,    19,     0,    20,     0,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   202,     0,     0,    12,     0,     0,    13,    22,     0,
       0,     0,     0,     0,     0,     0,    23,    24,    25,    26,
      27,    28,     0,     0,     0,     0,     0,     0,    29,    30,
      31,     0,     0,     0,    32,    33,     0,    14,    15,    34,
      16,    35,    36,    37,     0,     0,     0,    18,    19,     0,
      20,     0,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   204,     0,     0,    12,     0,     0,    13,
      22,     0,     0,     0,     0,     0,     0,     0,    23,    24,
      25,    26,    27,    28,     0,     0,     0,     0,     0,     0,
      29,    30,    31,     0,     0,     0,    32,    33,     0,    14,
      15,    34,    16,    35,    36,    37,     0,     0,     0,    18,
      19,     0,    20,     0,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   219,     0,     0,    12,     0,
       0,    13,    22,     0,     0,     0,     0,     0,     0,     0,
      23,    24,    25,    26,    27,    28,     0,     0,     0,     0,
       0,     0,    29,    30,    31,     0,     0,     0,    32,    33,
       0,    14,    15,    34,    16,    35,    36,    37,     0,     0,
       0,    18,    19,     0,    20,     0,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   202,     0,     0,
     293,     0,     0,    13,    22,     0,     0,     0,     0,     0,
       0,     0,    23,    24,    25,    26,    27,    28,     0,     0,
       0,     0,     0,     0,    29,    30,    31,     0,     0,     0,
      32,    33,     0,    14,    15,    34,    16,    35,    36,    37,
       0,     0,     0,    18,    19,     0,    20,     0,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   204,
       0,     0,   293,     0,     0,    13,    22,     0,     0,     0,
       0,     0,     0,     0,    23,    24,    25,    26,    27,    28,
       0,     0,     0,     0,     0,     0,    29,    30,    31,     0,
       0,     0,    32,    33,     0,    14,    15,    34,    16,    35,
      36,    37,     0,     0,     0,    18,    19,     0,    20,     0,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   219,     0,     0,   293,     0,     0,    13,    22,     0,
       0,     0,     0,     0,     0,     0,    23,    24,    25,    26,
      27,    28,     0,     0,     0,     0,     0,     0,    29,    30,
      31,     0,     0,     0,    32,    33,     0,    14,    15,    34,
      16,    35,    36,    37,     0,     0,     0,    18,    19,     0,
      20,     0,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      22,     0,     0,     0,     0,     0,     0,     0,    23,    24,
      25,    26,    27,    28,     0,     0,     0,     0,     0,     0,
      29,    30,    31,     0,     0,     0,    32,    33,     0,     0,
       0,    34,     0,    35,    36,    37,   136,     0,    57,   108,
       0,     0,   137,     0,     0,     0,     0,     0,     0,   109,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   110,   111,     0,   112,   113,   114,   115,   116,   117,
     118,    14,    15,     0,    16,     0,     0,     0,     0,     0,
       0,    18,    19,     0,    20,     0,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    22,     0,     0,     0,     0,     0,
       0,     0,    23,    24,    25,    26,    27,    28,     0,     0,
       0,     0,   119,     0,    29,    30,    31,     0,     0,     0,
      32,    33,     0,     0,     0,    58,     0,    35,    36,    37,
     136,     0,    57,   108,     0,     0,   316,     0,     0,     0,
       0,     0,     0,   109,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   110,   111,     0,   112,   113,
     114,   115,   116,   117,   118,    14,    15,     0,    16,     0,
       0,     0,     0,     0,     0,    18,    19,     0,    20,     0,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    22,     0,
       0,     0,     0,     0,     0,     0,    23,    24,    25,    26,
      27,    28,     0,     0,     0,     0,   119,     0,    29,    30,
      31,     0,     0,     0,    32,    33,     0,     0,     0,    58,
       0,    35,    36,    37,   136,     0,    57,   108,     0,     0,
     330,     0,     0,     0,     0,     0,     0,   109,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   110,
     111,     0,   112,   113,   114,   115,   116,   117,   118,    14,
      15,     0,    16,     0,     0,     0,     0,     0,     0,    18,
      19,     0,    20,     0,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    22,     0,     0,     0,     0,     0,     0,     0,
      23,    24,    25,    26,    27,    28,     0,     0,     0,     0,
     119,     0,    29,    30,    31,     0,     0,     0,    32,    33,
       0,     0,     0,    58,     0,    35,    36,    37,   136,     0,
      57,   108,     0,     0,   332,     0,     0,     0,     0,     0,
       0,   109,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   110,   111,     0,   112,   113,   114,   115,
     116,   117,   118,    14,    15,     0,    16,     0,     0,     0,
       0,     0,     0,    18,    19,     0,    20,     0,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    22,     0,     0,     0,
       0,     0,     0,     0,    23,    24,    25,    26,    27,    28,
       0,     0,     0,     0,   119,     0,    29,    30,    31,     0,
       0,     0,    32,    33,     0,     0,     0,    58,     0,    35,
      36,    37,   136,     0,    57,   108,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   109,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   110,   111,     0,
     112,   113,   114,   115,   116,   117,   118,    14,    15,     0,
      16,     0,     0,     0,     0,     0,     0,    18,    19,     0,
      20,     0,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      22,     0,     0,     0,     0,     0,     0,     0,    23,    24,
      25,    26,    27,    28,     0,     0,     0,     0,   119,     0,
      29,    30,    31,     0,     0,     0,    32,    33,    57,   108,
       0,    58,   137,    35,    36,    37,     0,     0,     0,   109,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   110,   111,     0,   112,   113,   114,   115,   116,   117,
     118,    14,    15,     0,    16,     0,     0,     0,     0,     0,
       0,    18,    19,     0,    20,     0,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    22,     0,     0,     0,     0,     0,
       0,     0,    23,    24,    25,    26,    27,    28,    57,   108,
       0,     0,   119,     0,    29,    30,    31,     0,     0,   109,
      32,    33,     0,     0,     0,    58,     0,    35,    36,    37,
       0,   110,   111,     0,   112,   113,   114,   115,   116,   117,
     118,    14,    15,     0,    16,     0,     0,     0,     0,     0,
       0,    18,    19,     0,    20,     0,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    22,     0,     0,     0,     0,     0,
       0,     0,    23,    24,    25,    26,    27,    28,     0,     0,
       0,     0,   119,   266,    29,    30,    31,     0,     0,     0,
      32,    33,    57,   108,     0,    58,   273,    35,    36,    37,
       0,     0,     0,   109,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   110,   111,     0,   112,   113,
     114,   115,   116,   117,   118,    14,    15,     0,    16,     0,
       0,     0,     0,     0,     0,    18,    19,     0,    20,     0,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    22,     0,
       0,     0,     0,     0,     0,     0,    23,    24,    25,    26,
      27,    28,     0,     0,     0,     0,   119,     0,    29,    30,
      31,     0,     0,     0,    32,    33,    57,   108,     0,    58,
     312,    35,    36,    37,     0,     0,     0,   109,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   110,
     111,     0,   112,   113,   114,   115,   116,   117,   118,    14,
      15,     0,    16,     0,     0,     0,     0,     0,     0,    18,
      19,     0,    20,     0,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    22,     0,     0,     0,     0,     0,     0,     0,
      23,    24,    25,    26,    27,    28,     0,     0,     0,     0,
     119,     0,    29,    30,    31,     0,     0,     0,    32,    33,
      57,   108,     0,    58,   314,    35,    36,    37,     0,     0,
       0,   109,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   110,   111,     0,   112,   113,   114,   115,
     116,   117,   118,    14,    15,     0,    16,     0,     0,     0,
       0,     0,     0,    18,    19,     0,    20,     0,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    22,     0,     0,     0,
       0,     0,     0,     0,    23,    24,    25,    26,    27,    28,
       0,     0,     0,     0,   119,     0,    29,    30,    31,     0,
       0,     0,    32,    33,    57,   108,     0,    58,   350,    35,
      36,    37,     0,     0,     0,   109,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   110,   111,     0,
     112,   113,   114,   115,   116,   117,   118,    14,    15,     0,
      16,     0,     0,     0,     0,     0,     0,    18,    19,     0,
      20,     0,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      22,     0,     0,     0,     0,     0,     0,     0,    23,    24,
      25,    26,    27,    28,     0,     0,     0,     0,   119,     0,
      29,    30,    31,     0,     0,     0,    32,    33,    57,   108,
       0,    58,   351,    35,    36,    37,     0,     0,     0,   109,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   110,   111,     0,   112,   113,   114,   115,   116,   117,
     118,    14,    15,     0,    16,     0,     0,     0,     0,     0,
       0,    18,    19,     0,    20,     0,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    22,     0,     0,     0,     0,     0,
       0,     0,    23,    24,    25,    26,    27,    28,    57,   108,
     354,     0,   119,     0,    29,    30,    31,     0,     0,   109,
      32,    33,     0,     0,     0,    58,     0,    35,    36,    37,
       0,   110,   111,     0,   112,   113,   114,   115,   116,   117,
     118,    14,    15,     0,    16,     0,     0,     0,     0,     0,
       0,    18,    19,     0,    20,     0,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    22,     0,     0,     0,     0,     0,
       0,     0,    23,    24,    25,    26,    27,    28,     0,     0,
       0,     0,   119,     0,    29,    30,    31,     0,     0,     0,
      32,    33,    57,   108,     0,    58,   366,    35,    36,    37,
       0,     0,     0,   109,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   110,   111,     0,   112,   113,
     114,   115,   116,   117,   118,    14,    15,     0,    16,     0,
       0,     0,     0,     0,     0,    18,    19,     0,    20,     0,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    22,     0,
       0,     0,     0,     0,     0,     0,    23,    24,    25,    26,
      27,    28,    57,   108,     0,     0,   119,     0,    29,    30,
      31,     0,     0,   109,    32,    33,     0,     0,     0,    58,
       0,    35,    36,    37,     0,   110,   111,     0,   112,   113,
     114,   115,   116,   117,   118,    14,    15,     0,    16,     0,
       0,     0,     0,     0,     0,    18,    19,     0,    20,     0,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    22,     0,
       0,     0,     0,     0,     0,     0,    23,    24,    25,    26,
      27,    28,    57,   108,     0,     0,   119,     0,    29,    30,
      31,     0,     0,   109,    32,    33,     0,     0,     0,    58,
       0,    35,    36,    37,     0,   110,     0,     0,   112,   113,
     114,   115,   116,   117,   118,    14,    15,     0,    16,     0,
       0,     0,     0,     0,     0,    18,    19,     0,    20,     0,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    22,     0,
       0,     0,     0,     0,     0,     0,    23,    24,    25,    26,
      27,    28,    57,   108,     0,     0,     0,     0,    29,    30,
      31,     0,     0,   109,    32,    33,     0,     0,     0,    58,
       0,    35,    36,    37,     0,     0,     0,     0,   112,   113,
     114,   115,   116,   117,   118,    14,    15,     0,    16,     0,
       0,     0,     0,     0,     0,    18,    19,     0,    20,     0,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    22,     0,
       0,     0,     0,     0,     0,     0,    23,    24,    25,    26,
      27,    28,    57,   -36,     0,     0,     0,     0,    29,    30,
      31,     0,     0,   -36,    32,    33,     0,     0,     0,    58,
       0,    35,    36,    37,     0,     0,     0,     0,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,    14,    15,     0,    16,     0,
       0,     0,     0,     0,     0,    18,    19,     0,    20,     0,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    57,     0,     0,     0,    22,     0,
       0,     0,     0,     0,     0,   251,    23,    24,    25,    26,
      27,    28,     0,     0,     0,     0,     0,   110,   111,    30,
      31,     0,     0,     0,    32,    33,   252,    14,    15,    58,
      16,    35,    36,    37,     0,     0,     0,    18,    19,     0,
      20,     0,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      22,     0,     0,     0,     0,    57,     0,     0,    23,    24,
      25,    26,    27,    28,     0,     0,   251,     0,   253,   328,
      29,    30,    31,     0,     0,     0,    32,    33,   110,   111,
       0,    58,     0,    35,    36,    37,     0,   252,    14,    15,
       0,    16,     0,     0,     0,     0,     0,     0,    18,    19,
       0,    20,     0,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    57,     0,     0,
       0,    22,     0,     0,     0,     0,     0,     0,   251,    23,
      24,    25,    26,    27,    28,     0,     0,     0,     0,   253,
     110,    29,    30,    31,     0,     0,     0,    32,    33,   252,
      14,    15,    58,    16,    35,    36,    37,     0,     0,     0,
      18,    19,     0,    20,     0,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    22,     0,     0,    12,     0,     0,    13,
     142,    23,    24,    25,    26,    27,    28,     0,     0,     0,
       0,     0,     0,    29,    30,    31,     0,     0,     0,    32,
      33,     0,     0,     0,    58,     0,    35,    36,    37,    14,
      15,     0,    16,    12,     0,     0,    13,   150,     0,    18,
      19,     0,    20,     0,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    22,     0,     0,     0,    14,    15,     0,    16,
      23,    24,    25,    26,    27,    28,    18,    19,     0,    20,
       0,    21,    29,    30,    31,     0,     0,     0,    32,    33,
       0,     0,     0,    34,     0,    35,    36,    37,     0,    22,
       0,     0,     0,    57,     0,     0,     0,    23,    24,    25,
      26,    27,    28,     0,   251,     0,     0,     0,     0,    29,
      30,    31,     0,     0,     0,    32,    33,     0,     0,     0,
      34,     0,    35,    36,    37,   252,    14,    15,     0,    16,
      12,     0,     0,    13,     0,     0,    18,    19,     0,    20,
       0,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    22,
       0,     0,     0,    14,    15,     0,    16,    23,    24,    25,
      26,    27,    28,    18,    19,     0,    20,     0,    21,    29,
      30,    31,     0,     0,     0,    32,    33,     0,     0,     0,
      58,     0,    35,    36,    37,     0,    22,     0,     0,    57,
       0,     0,    13,     0,    23,    24,    25,    26,    27,    28,
       0,     0,     0,     0,     0,     0,    29,    30,    31,     0,
       0,     0,    32,    33,     0,     0,     0,    34,     0,    35,
      36,    37,    14,    15,     0,    16,   177,     0,     0,    13,
       0,     0,    18,    19,     0,    20,     0,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    22,     0,     0,     0,    14,
      15,     0,    16,    23,    24,    25,    26,    27,    28,    18,
      19,     0,    20,     0,    21,    29,    30,    31,     0,     0,
       0,    32,    33,     0,     0,     0,    34,     0,    35,    36,
      37,     0,    22,     0,     0,    57,     0,     0,     0,     0,
      23,    24,    25,    26,    27,    28,     0,     0,     0,     0,
       0,     0,    29,    30,    31,     0,     0,     0,    32,    33,
       0,     0,     0,    34,     0,    35,    36,    37,    14,    15,
       0,    16,   293,     0,     0,    13,     0,     0,    18,    19,
       0,    20,     0,    21,     0,     0,     0,     0,     0,     0,
       0,     0,   208,     0,     0,     0,     0,     0,     0,     0,
       0,    22,     0,     0,     0,    14,    15,     0,    16,    23,
      24,    25,    26,    27,    28,    18,    19,     0,    20,     0,
      21,    29,    30,    31,     0,     0,     0,    32,    33,     0,
       0,     0,    58,     0,    35,    36,    37,     0,    22,     0,
       0,     0,    57,     0,     0,     0,    23,    24,    25,    26,
      27,    28,     0,   -36,     0,     0,     0,     0,    29,    30,
      31,     0,     0,     0,    32,    33,     0,     0,     0,    34,
       0,    35,    36,    37,   -36,    14,    15,     0,    16,    57,
       0,     0,     0,     0,     0,    18,    19,     0,    20,     0,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    22,     0,
       0,     0,    14,    15,     0,    16,    23,    24,    25,    26,
      27,    28,    18,    19,     0,    20,     0,    21,     0,    30,
      31,     0,     0,     0,    32,    33,     0,     0,     0,    58,
       0,    35,    36,    37,     0,    22,     0,     0,     0,     0,
       0,     0,     0,    23,    24,    25,    26,    27,    28,     0,
       0,     0,     0,     0,     0,    29,    30,    31,     0,     0,
       0,    32,    33,     0,     0,     0,    58,     0,    35,    36,
      37
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-310))

#define yytable_value_is_error(yytable_value) \
  ((yytable_value) == (-36))

static const yytype_int16 yycheck[] =
{
      16,   109,   166,     9,    34,    84,   105,   177,    15,    16,
      18,    51,    52,    29,     9,   123,    32,    33,    34,    35,
      36,    37,    66,    67,    45,     9,    42,    81,     5,   338,
     178,    69,     9,    10,    10,    69,    44,    53,    83,   118,
      10,    86,    58,    19,    89,    90,    16,     0,    93,    15,
      45,   105,    68,   362,    10,    13,   101,    11,    98,     9,
     159,    45,    39,    19,    14,    86,   106,    88,    15,    86,
     100,    12,    89,   111,   112,    15,    16,   111,   112,    37,
      86,     9,    40,    99,   100,    93,    14,   166,    95,   133,
      10,    86,    87,    88,   178,    10,    16,   104,   105,   106,
     107,    16,    86,   110,    88,   159,    10,    11,   124,   125,
     126,   127,   128,   129,   111,   112,    18,    12,   113,   164,
     228,   229,   242,   293,   244,   170,    12,    10,   144,   145,
     107,   147,   148,    16,    12,    12,    12,   153,   154,   155,
     106,   107,   221,   251,   110,    12,   294,    94,   164,   297,
     298,   299,   300,    12,   170,   234,   304,   104,   105,   106,
     107,    92,   178,   110,   104,   105,   106,   107,    12,    42,
     110,    10,   110,   252,   338,   191,   192,    16,   194,   195,
     196,   197,   198,   199,   283,   201,     9,   203,    10,   205,
     206,    14,   208,   237,    16,    10,    10,   345,   362,   215,
       9,    16,    16,   323,   220,   284,   222,     9,    12,    12,
     294,   319,    14,   297,   298,   299,   300,    12,    15,     9,
     304,   251,   321,   253,   254,   255,   242,   257,   244,   283,
      98,   261,    44,   353,    86,   251,   356,   253,   254,   255,
      15,   257,   258,   259,   260,   261,     9,   326,   368,   369,
      18,    79,    10,    14,     9,   354,   272,     9,    44,    16,
     276,   345,   278,    45,   280,   305,    16,   321,    16,   285,
     102,    16,    12,    16,    16,    32,    33,    34,   294,    16,
      37,   297,   298,   299,   300,    42,   263,    41,   304,   188,
     306,   307,   308,    -1,   334,    -1,    53,   107,   328,    -1,
     354,    58,    -1,    -1,    86,    87,    88,   104,   105,   106,
     107,    68,   328,   110,    -1,   331,    97,   333,    -1,   335,
     336,   366,   103,   339,    -1,   341,    -1,    -1,    -1,   345,
      42,   113,    -1,    45,   311,    -1,    -1,    -1,    -1,    -1,
      -1,   357,    99,   100,    -1,    -1,    -1,    -1,   364,    -1,
      -1,    -1,    -1,   134,   135,   251,    -1,   253,   254,   255,
      -1,   257,    -1,    -1,    -1,   261,    -1,   124,   125,   126,
     127,   128,   129,    -1,    86,    87,    88,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,   145,    -1,
     147,   148,    -1,   174,    -1,   176,   153,   154,   155,    -1,
      -1,   113,    -1,    -1,    -1,    -1,   187,   164,   189,    -1,
      -1,    -1,    -1,   170,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   178,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   328,    -1,    -1,   192,    -1,   194,   195,   196,
     197,   198,   199,    -1,   201,    -1,   203,    -1,   205,   206,
      -1,   208,    -1,    -1,    -1,    -1,    -1,    -1,   215,    -1,
      -1,    -1,    -1,   220,    -1,   222,   247,    -1,    53,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   242,    -1,   244,    -1,    -1,
      -1,    -1,    -1,    -1,   251,    -1,   253,   254,   255,    -1,
     257,   258,   259,   260,   261,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,   276,
      -1,   278,    -1,   280,    -1,    -1,    -1,    -1,   285,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   294,    -1,    -1,
     297,   298,   299,   300,    -1,    -1,    -1,   304,   329,   306,
     307,   308,     5,    -1,    -1,    -1,    -1,    -1,    -1,    12,
      -1,    -1,   147,   148,    -1,    -1,    -1,    -1,   349,   154,
     155,   328,    -1,    -1,   355,    -1,    -1,    -1,   335,   336,
      -1,    -1,   339,    -1,   341,    -1,   367,    -1,   345,   370,
      -1,    -1,    -1,    -1,   179,   376,   377,    -1,    -1,    -1,
     357,    -1,    -1,    56,    57,    -1,    -1,   364,    -1,    -1,
      -1,    64,    65,    66,    67,    -1,    -1,    70,    71,    -1,
      -1,   206,   207,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,
      93,    -1,   227,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   107,    -1,   109,    -1,    -1,   112,
     113,   114,   115,   116,   117,   250,   119,   120,   121,    -1,
     123,    -1,    -1,    -1,    -1,    -1,    -1,   130,    -1,    -1,
     133,    -1,    -1,    -1,    -1,   138,    -1,   140,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   280,   281,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   167,    -1,    -1,    -1,    -1,   172,
      -1,    -1,   307,   308,   177,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   188,    -1,    -1,    -1,    -1,
      -1,    -1,   327,     0,     1,    -1,    -1,    -1,    -1,    -1,
       7,     8,     9,    -1,    11,    12,    -1,    14,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   225,    -1,    -1,   228,   229,    -1,    -1,    -1,
     233,    -1,    -1,    -1,   237,    -1,    -1,    -1,    45,    46,
      -1,    48,    -1,    -1,    -1,    -1,    -1,    54,    55,    56,
      -1,    58,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   266,   267,   268,    -1,    -1,    -1,    -1,
      -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,
     293,    98,    99,   100,    -1,    -1,    -1,   104,   105,     1,
      -1,    -1,   109,    -1,   111,   112,   113,     9,    -1,    11,
      12,    -1,    14,    15,   317,    -1,   319,    -1,    -1,   322,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   342,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,    56,    57,    58,    -1,    60,    61,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    77,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    98,    99,   100,   101,
     102,    -1,   104,   105,     1,    -1,    -1,   109,    -1,   111,
     112,   113,    -1,    -1,    11,    12,    -1,    14,    15,    -1,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    55,    56,
      57,    58,    -1,    60,    61,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    98,    99,   100,   101,   102,    -1,   104,   105,     1,
      -1,    -1,   109,    -1,   111,   112,   113,    -1,    -1,    11,
      12,    -1,    14,    15,    -1,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,    56,    57,    58,    -1,    60,    61,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    77,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    98,    99,   100,   101,
     102,    -1,   104,   105,     1,    -1,    -1,   109,    -1,   111,
     112,   113,    -1,    -1,    11,    12,    -1,    14,    15,    -1,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    55,    56,
      57,    58,    -1,    60,    61,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    98,    99,   100,   101,   102,    -1,   104,   105,     1,
      -1,    -1,   109,    -1,   111,   112,   113,    -1,    -1,    11,
      12,    -1,    14,    15,    -1,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,    56,    57,    58,    -1,    60,    61,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    77,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    98,    99,   100,   101,
     102,    -1,   104,   105,     1,    -1,    -1,   109,    -1,   111,
     112,   113,    -1,    -1,    11,    12,    -1,    14,    15,    -1,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    55,    56,
      57,    58,    -1,    60,    61,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    76,
      77,    78,     9,    -1,    11,    12,    -1,    14,    15,    86,
      87,    88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    98,    99,   100,   101,   102,    -1,   104,   105,    -1,
      -1,    -1,   109,    -1,   111,   112,   113,    -1,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    55,    56,
      57,    58,    -1,    60,    61,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    98,    99,   100,   101,   102,    -1,   104,   105,     1,
      -1,    -1,   109,    -1,   111,   112,   113,    -1,    -1,    11,
      12,    -1,    14,    15,    -1,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,    56,    57,    58,    -1,    60,    61,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    77,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    98,    99,   100,   101,
     102,    -1,   104,   105,     1,    -1,    -1,   109,    -1,   111,
     112,   113,    -1,    -1,    11,    12,    -1,    14,    15,    -1,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    55,    56,
      57,    58,    -1,    60,    61,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,    76,
      77,    78,    -1,    11,    12,    -1,    14,    15,    -1,    86,
      87,    88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    98,    99,   100,   101,   102,    -1,   104,   105,    -1,
      -1,    -1,   109,    -1,   111,   112,   113,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    55,    56,    57,
      58,    -1,    60,    61,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,    76,    77,
      78,    -1,    -1,    12,    -1,    14,    15,    -1,    86,    87,
      88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      98,    99,   100,   101,   102,    -1,   104,   105,    -1,    -1,
      -1,   109,    -1,   111,   112,   113,    45,    46,    -1,    48,
      -1,    50,    -1,    -1,    -1,    -1,    55,    56,    -1,    58,
      -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,
      -1,    -1,    12,    -1,    -1,    15,    16,    86,    87,    88,
      89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    98,
      99,   100,    -1,    -1,    -1,   104,   105,    -1,    -1,    -1,
     109,    -1,   111,   112,   113,    45,    46,    -1,    48,    -1,
      50,    -1,    -1,    -1,    -1,    55,    56,    -1,    58,    -1,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    98,    99,
     100,    -1,     7,     8,   104,   105,    11,    12,    -1,   109,
      15,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    -1,    48,    -1,    -1,    -1,    -1,    -1,    54,
      55,    56,    -1,    58,    -1,    60,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,     9,    -1,    -1,
      12,    13,    14,    98,    99,   100,    -1,    -1,    -1,   104,
     105,    23,    -1,    -1,   109,    -1,   111,   112,   113,    -1,
      -1,    -1,    -1,    35,    36,    -1,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    -1,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    -1,    58,    -1,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,
      -1,    -1,    12,    -1,    14,    15,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
      -1,    -1,    -1,    -1,    96,    -1,    98,    99,   100,    -1,
      -1,    -1,   104,   105,    -1,    45,    46,   109,    48,   111,
     112,   113,    -1,    -1,    -1,    55,    56,    -1,    58,    -1,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    -1,    -1,    12,    -1,    -1,    15,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    98,    99,
     100,    -1,    -1,    -1,   104,   105,    -1,    45,    46,   109,
      48,   111,   112,   113,    -1,    -1,    -1,    55,    56,    -1,
      58,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     9,    -1,    -1,    12,    -1,    -1,    15,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      98,    99,   100,    -1,    -1,    -1,   104,   105,    -1,    45,
      46,   109,    48,   111,   112,   113,    -1,    -1,    -1,    55,
      56,    -1,    58,    -1,    60,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    -1,    -1,    12,    -1,
      -1,    15,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    91,    -1,    -1,    -1,    -1,
      -1,    -1,    98,    99,   100,    -1,    -1,    -1,   104,   105,
      -1,    45,    46,   109,    48,   111,   112,   113,    -1,    -1,
      -1,    55,    56,    -1,    58,    -1,    60,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,    -1,
      12,    -1,    -1,    15,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    98,    99,   100,    -1,    -1,    -1,
     104,   105,    -1,    45,    46,   109,    48,   111,   112,   113,
      -1,    -1,    -1,    55,    56,    -1,    58,    -1,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,
      -1,    -1,    12,    -1,    -1,    15,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    98,    99,   100,    -1,
      -1,    -1,   104,   105,    -1,    45,    46,   109,    48,   111,
     112,   113,    -1,    -1,    -1,    55,    56,    -1,    58,    -1,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    -1,    -1,    12,    -1,    -1,    15,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    98,    99,
     100,    -1,    -1,    -1,   104,   105,    -1,    45,    46,   109,
      48,   111,   112,   113,    -1,    -1,    -1,    55,    56,    -1,
      58,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      98,    99,   100,    -1,    -1,    -1,   104,   105,    -1,    -1,
      -1,   109,    -1,   111,   112,   113,    10,    -1,    12,    13,
      -1,    -1,    16,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    -1,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    -1,    58,    -1,    60,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,    -1,    -1,
      -1,    -1,    96,    -1,    98,    99,   100,    -1,    -1,    -1,
     104,   105,    -1,    -1,    -1,   109,    -1,   111,   112,   113,
      10,    -1,    12,    13,    -1,    -1,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    36,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    -1,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    58,    -1,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,    -1,    -1,    -1,    -1,    96,    -1,    98,    99,
     100,    -1,    -1,    -1,   104,   105,    -1,    -1,    -1,   109,
      -1,   111,   112,   113,    10,    -1,    12,    13,    -1,    -1,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      36,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    -1,    58,    -1,    60,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    91,    -1,    -1,    -1,    -1,
      96,    -1,    98,    99,   100,    -1,    -1,    -1,   104,   105,
      -1,    -1,    -1,   109,    -1,   111,   112,   113,    10,    -1,
      12,    13,    -1,    -1,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    36,    -1,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    -1,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    -1,    58,    -1,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
      -1,    -1,    -1,    -1,    96,    -1,    98,    99,   100,    -1,
      -1,    -1,   104,   105,    -1,    -1,    -1,   109,    -1,   111,
     112,   113,    10,    -1,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    -1,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    -1,
      48,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    -1,
      58,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,    -1,    -1,    -1,    -1,    96,    -1,
      98,    99,   100,    -1,    -1,    -1,   104,   105,    12,    13,
      -1,   109,    16,   111,   112,   113,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    -1,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    -1,    58,    -1,    60,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,    12,    13,
      -1,    -1,    96,    -1,    98,    99,   100,    -1,    -1,    23,
     104,   105,    -1,    -1,    -1,   109,    -1,   111,   112,   113,
      -1,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    -1,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    -1,    58,    -1,    60,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,    -1,    -1,
      -1,    -1,    96,    97,    98,    99,   100,    -1,    -1,    -1,
     104,   105,    12,    13,    -1,   109,    16,   111,   112,   113,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    36,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    -1,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    58,    -1,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,    -1,    -1,    -1,    -1,    96,    -1,    98,    99,
     100,    -1,    -1,    -1,   104,   105,    12,    13,    -1,   109,
      16,   111,   112,   113,    -1,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      36,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    -1,    58,    -1,    60,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    91,    -1,    -1,    -1,    -1,
      96,    -1,    98,    99,   100,    -1,    -1,    -1,   104,   105,
      12,    13,    -1,   109,    16,   111,   112,   113,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    36,    -1,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    -1,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    -1,    58,    -1,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
      -1,    -1,    -1,    -1,    96,    -1,    98,    99,   100,    -1,
      -1,    -1,   104,   105,    12,    13,    -1,   109,    16,   111,
     112,   113,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    -1,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    -1,
      48,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    -1,
      58,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,    -1,    -1,    -1,    -1,    96,    -1,
      98,    99,   100,    -1,    -1,    -1,   104,   105,    12,    13,
      -1,   109,    16,   111,   112,   113,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    -1,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    -1,    58,    -1,    60,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,    12,    13,
      14,    -1,    96,    -1,    98,    99,   100,    -1,    -1,    23,
     104,   105,    -1,    -1,    -1,   109,    -1,   111,   112,   113,
      -1,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    -1,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    -1,    58,    -1,    60,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,    -1,    -1,
      -1,    -1,    96,    -1,    98,    99,   100,    -1,    -1,    -1,
     104,   105,    12,    13,    -1,   109,    16,   111,   112,   113,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    36,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    -1,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    58,    -1,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,    12,    13,    -1,    -1,    96,    -1,    98,    99,
     100,    -1,    -1,    23,   104,   105,    -1,    -1,    -1,   109,
      -1,   111,   112,   113,    -1,    35,    36,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    -1,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    58,    -1,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,    12,    13,    -1,    -1,    96,    -1,    98,    99,
     100,    -1,    -1,    23,   104,   105,    -1,    -1,    -1,   109,
      -1,   111,   112,   113,    -1,    35,    -1,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    -1,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    58,    -1,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,    12,    13,    -1,    -1,    -1,    -1,    98,    99,
     100,    -1,    -1,    23,   104,   105,    -1,    -1,    -1,   109,
      -1,   111,   112,   113,    -1,    -1,    -1,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    -1,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    58,    -1,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,    12,    13,    -1,    -1,    -1,    -1,    98,    99,
     100,    -1,    -1,    23,   104,   105,    -1,    -1,    -1,   109,
      -1,   111,   112,   113,    -1,    -1,    -1,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    -1,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    58,    -1,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    86,    87,    88,    89,
      90,    91,    -1,    -1,    -1,    -1,    -1,    35,    36,    99,
     100,    -1,    -1,    -1,   104,   105,    44,    45,    46,   109,
      48,   111,   112,   113,    -1,    -1,    -1,    55,    56,    -1,
      58,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    -1,    -1,    -1,    -1,    12,    -1,    -1,    86,    87,
      88,    89,    90,    91,    -1,    -1,    23,    -1,    96,    97,
      98,    99,   100,    -1,    -1,    -1,   104,   105,    35,    36,
      -1,   109,    -1,   111,   112,   113,    -1,    44,    45,    46,
      -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,
      -1,    58,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    23,    86,
      87,    88,    89,    90,    91,    -1,    -1,    -1,    -1,    96,
      35,    98,    99,   100,    -1,    -1,    -1,   104,   105,    44,
      45,    46,   109,    48,   111,   112,   113,    -1,    -1,    -1,
      55,    56,    -1,    58,    -1,    60,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    -1,    -1,    12,    -1,    -1,    15,
      16,    86,    87,    88,    89,    90,    91,    -1,    -1,    -1,
      -1,    -1,    -1,    98,    99,   100,    -1,    -1,    -1,   104,
     105,    -1,    -1,    -1,   109,    -1,   111,   112,   113,    45,
      46,    -1,    48,    12,    -1,    -1,    15,    16,    -1,    55,
      56,    -1,    58,    -1,    60,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    -1,    -1,    -1,    45,    46,    -1,    48,
      86,    87,    88,    89,    90,    91,    55,    56,    -1,    58,
      -1,    60,    98,    99,   100,    -1,    -1,    -1,   104,   105,
      -1,    -1,    -1,   109,    -1,   111,   112,   113,    -1,    78,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    91,    -1,    23,    -1,    -1,    -1,    -1,    98,
      99,   100,    -1,    -1,    -1,   104,   105,    -1,    -1,    -1,
     109,    -1,   111,   112,   113,    44,    45,    46,    -1,    48,
      12,    -1,    -1,    15,    -1,    -1,    55,    56,    -1,    58,
      -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      -1,    -1,    -1,    45,    46,    -1,    48,    86,    87,    88,
      89,    90,    91,    55,    56,    -1,    58,    -1,    60,    98,
      99,   100,    -1,    -1,    -1,   104,   105,    -1,    -1,    -1,
     109,    -1,   111,   112,   113,    -1,    78,    -1,    -1,    12,
      -1,    -1,    15,    -1,    86,    87,    88,    89,    90,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    98,    99,   100,    -1,
      -1,    -1,   104,   105,    -1,    -1,    -1,   109,    -1,   111,
     112,   113,    45,    46,    -1,    48,    12,    -1,    -1,    15,
      -1,    -1,    55,    56,    -1,    58,    -1,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    45,
      46,    -1,    48,    86,    87,    88,    89,    90,    91,    55,
      56,    -1,    58,    -1,    60,    98,    99,   100,    -1,    -1,
      -1,   104,   105,    -1,    -1,    -1,   109,    -1,   111,   112,
     113,    -1,    78,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    91,    -1,    -1,    -1,    -1,
      -1,    -1,    98,    99,   100,    -1,    -1,    -1,   104,   105,
      -1,    -1,    -1,   109,    -1,   111,   112,   113,    45,    46,
      -1,    48,    12,    -1,    -1,    15,    -1,    -1,    55,    56,
      -1,    58,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    78,    -1,    -1,    -1,    45,    46,    -1,    48,    86,
      87,    88,    89,    90,    91,    55,    56,    -1,    58,    -1,
      60,    98,    99,   100,    -1,    -1,    -1,   104,   105,    -1,
      -1,    -1,   109,    -1,   111,   112,   113,    -1,    78,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,    -1,    23,    -1,    -1,    -1,    -1,    98,    99,
     100,    -1,    -1,    -1,   104,   105,    -1,    -1,    -1,   109,
      -1,   111,   112,   113,    44,    45,    46,    -1,    48,    12,
      -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    58,    -1,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,
      -1,    -1,    45,    46,    -1,    48,    86,    87,    88,    89,
      90,    91,    55,    56,    -1,    58,    -1,    60,    -1,    99,
     100,    -1,    -1,    -1,   104,   105,    -1,    -1,    -1,   109,
      -1,   111,   112,   113,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    99,   100,    -1,    -1,
      -1,   104,   105,    -1,    -1,    -1,   109,    -1,   111,   112,
     113
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     9,    14,   116,   133,   135,   147,     0,     7,
       8,    11,    12,    15,    45,    46,    48,    54,    55,    56,
      58,    60,    78,    86,    87,    88,    89,    90,    91,    98,
      99,   100,   104,   105,   109,   111,   112,   113,   130,   136,
     137,   139,   142,   149,   150,   160,   161,   162,   164,     9,
      14,   130,   130,   142,   143,   151,    12,    12,   109,   161,
     162,    86,    89,   128,    12,    12,    12,    12,    42,   162,
      12,    12,   161,   161,   149,   161,   162,   162,   161,     1,
       9,    14,    47,    49,    50,    51,    52,    53,    57,    61,
      62,    76,    77,   101,   102,   120,   122,   129,   130,   142,
     146,   153,   155,   159,   165,    10,   130,   133,    13,    23,
      35,    36,    38,    39,    40,    41,    42,    43,    44,    96,
     117,   118,   161,    12,    15,   104,   105,   106,   107,   110,
      69,   111,   112,    18,   159,   159,    10,    16,   119,    16,
     119,    92,    16,   140,   142,   142,    12,   142,   142,   140,
      16,   140,   161,    42,   142,   142,     9,   131,   132,    14,
     131,   154,   154,   164,   142,   154,    12,    12,   154,   154,
     142,   154,    12,     9,   156,   155,   159,    12,   141,   144,
     145,   149,   161,   162,   154,    17,   155,   158,   132,   159,
     137,    98,   142,   150,   142,   142,   142,   142,   142,   142,
     164,   142,     9,   142,     9,   142,   142,   150,    69,   161,
     161,   161,   161,   161,   161,   142,   140,    17,    17,     9,
     142,    44,   142,    15,    16,   119,    86,   163,   119,   119,
      16,    16,   161,   119,   119,     9,   132,    18,   154,   134,
     153,   164,   142,   154,   142,   155,    79,   121,    17,   148,
     143,    23,    44,    96,   117,   118,   161,   119,    13,    37,
      40,    69,   155,   136,    17,   162,    97,   119,   119,   161,
      19,   164,   142,    16,   119,   152,   142,   150,   142,   150,
     142,   164,   140,    14,    44,    93,   152,   152,   157,     9,
     155,     9,    16,    12,   141,   150,   164,   141,   141,   141,
     141,   161,   161,   161,   141,   130,   142,   142,   142,    86,
       9,   138,    16,    16,    16,    16,    16,   119,    16,   119,
      19,    14,   132,   164,   161,   102,    44,   143,    97,   159,
      16,   119,    16,   119,   130,   142,   142,   150,   132,   142,
     152,    94,    12,   164,    16,   141,    17,   162,   162,   159,
      16,    16,    16,   134,    14,   125,   161,   142,    16,    16,
      17,   152,   132,   155,    95,   152,    16,   124,   134,   161,
     127,   154,   155,   152,   152,   155,   123,   126,   155,   155
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
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

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
      yychar = YYLEX;
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

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

/* Line 1806 of yacc.c  */
#line 100 "awkgram.y"
    { if (errorflag==0)
			winner = (Node *)stat3(PROGRAM, beginloc, (yyvsp[(1) - (1)].p), endloc); }
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 102 "awkgram.y"
    { yyclearin; bracecheck(); SYNTAX("bailing out"); }
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 126 "awkgram.y"
    {inloop++;}
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 127 "awkgram.y"
    { --inloop; (yyval.p) = stat4(FOR, (yyvsp[(3) - (12)].p), notnull((yyvsp[(6) - (12)].p)), (yyvsp[(9) - (12)].p), (yyvsp[(12) - (12)].p)); }
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 128 "awkgram.y"
    {inloop++;}
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 129 "awkgram.y"
    { --inloop; (yyval.p) = stat4(FOR, (yyvsp[(3) - (10)].p), NIL, (yyvsp[(7) - (10)].p), (yyvsp[(10) - (10)].p)); }
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 130 "awkgram.y"
    {inloop++;}
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 131 "awkgram.y"
    { --inloop; (yyval.p) = stat3(IN, (yyvsp[(3) - (8)].p), makearr((yyvsp[(5) - (8)].p)), (yyvsp[(8) - (8)].p)); }
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 132 "awkgram.y"
    {inloop++;}
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 133 "awkgram.y"
    {--inloop; (yyval.p) = stat5(FROM, (yyvsp[(3) - (12)].p), (yyvsp[(5) - (12)].p), (yyvsp[(7) - (12)].p), (yyvsp[(9) - (12)].p), (yyvsp[(12) - (12)].p)); }
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 134 "awkgram.y"
    {inloop++;}
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 135 "awkgram.y"
    {--inloop; (yyval.p) = stat5(FROM, (yyvsp[(3) - (10)].p), (yyvsp[(5) - (10)].p), (yyvsp[(7) - (10)].p), NIL, (yyvsp[(10) - (10)].p)); }
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 139 "awkgram.y"
    { setfname((yyvsp[(1) - (1)].cp)); }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 140 "awkgram.y"
    { setfname((yyvsp[(1) - (1)].cp)); }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 144 "awkgram.y"
    { (yyval.p) = notnull((yyvsp[(3) - (4)].p)); }
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 156 "awkgram.y"
    { (yyval.i) = 0; }
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 161 "awkgram.y"
    { (yyval.i) = 0; }
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 167 "awkgram.y"
    { (yyval.p) = 0; }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 172 "awkgram.y"
    { (yyval.p) = 0; }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 173 "awkgram.y"
    { (yyval.p) = (yyvsp[(2) - (3)].p); }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 177 "awkgram.y"
    { (yyval.p) = notnull((yyvsp[(1) - (1)].p)); }
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 181 "awkgram.y"
    { (yyval.p) = stat2(PASTAT, (yyvsp[(1) - (1)].p), stat2(PRINT, rectonode(), NIL)); }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 182 "awkgram.y"
    { (yyval.p) = stat2(PASTAT, (yyvsp[(1) - (4)].p), (yyvsp[(3) - (4)].p)); }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 183 "awkgram.y"
    { (yyval.p) = pa2stat((yyvsp[(1) - (4)].p), (yyvsp[(4) - (4)].p), stat2(PRINT, rectonode(), NIL)); }
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 184 "awkgram.y"
    { (yyval.p) = pa2stat((yyvsp[(1) - (7)].p), (yyvsp[(4) - (7)].p), (yyvsp[(6) - (7)].p)); }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 185 "awkgram.y"
    { (yyval.p) = stat2(PASTAT, NIL, (yyvsp[(2) - (3)].p)); }
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 187 "awkgram.y"
    { beginloc = linkum(beginloc, (yyvsp[(3) - (4)].p)); (yyval.p) = 0; }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 189 "awkgram.y"
    { endloc = linkum(endloc, (yyvsp[(3) - (4)].p)); (yyval.p) = 0; }
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 190 "awkgram.y"
    {infunc++;}
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 191 "awkgram.y"
    { infunc--; curfname=0; defn((Cell *)(yyvsp[(2) - (9)].p), (yyvsp[(4) - (9)].p), (yyvsp[(8) - (9)].p)); (yyval.p) = 0; }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 196 "awkgram.y"
    { (yyval.p) = linkum((yyvsp[(1) - (3)].p), (yyvsp[(3) - (3)].p)); }
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 201 "awkgram.y"
    { (yyval.p) = linkum((yyvsp[(1) - (3)].p), (yyvsp[(3) - (3)].p)); }
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 205 "awkgram.y"
    { (yyval.p) = op2((yyvsp[(2) - (3)].i), (yyvsp[(1) - (3)].p), (yyvsp[(3) - (3)].p)); }
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 207 "awkgram.y"
    { (yyval.p) = op3(CONDEXPR, notnull((yyvsp[(1) - (5)].p)), (yyvsp[(3) - (5)].p), (yyvsp[(5) - (5)].p)); }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 209 "awkgram.y"
    { (yyval.p) = op2(BOR, notnull((yyvsp[(1) - (3)].p)), notnull((yyvsp[(3) - (3)].p))); }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 211 "awkgram.y"
    { (yyval.p) = op2(AND, notnull((yyvsp[(1) - (3)].p)), notnull((yyvsp[(3) - (3)].p))); }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 212 "awkgram.y"
    { (yyval.p) = op3((yyvsp[(2) - (3)].i), NIL, (yyvsp[(1) - (3)].p), (Node*)makedfa((yyvsp[(3) - (3)].s), 0)); }
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 214 "awkgram.y"
    { if (constnode((yyvsp[(3) - (3)].p)))
			(yyval.p) = op3((yyvsp[(2) - (3)].i), NIL, (yyvsp[(1) - (3)].p), (Node*)makedfa(strnode((yyvsp[(3) - (3)].p)), 0));
		  else
			(yyval.p) = op3((yyvsp[(2) - (3)].i), (Node *)1, (yyvsp[(1) - (3)].p), (yyvsp[(3) - (3)].p)); }
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 218 "awkgram.y"
    { (yyval.p) = op2(INTEST, (yyvsp[(1) - (3)].p), makearr((yyvsp[(3) - (3)].p))); }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 219 "awkgram.y"
    { (yyval.p) = op2(INTEST, (yyvsp[(2) - (5)].p), makearr((yyvsp[(5) - (5)].p))); }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 220 "awkgram.y"
    { (yyval.p) = op2(CAT, (yyvsp[(1) - (2)].p), (yyvsp[(2) - (2)].p)); }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 226 "awkgram.y"
    { (yyval.p) = op2((yyvsp[(2) - (3)].i), (yyvsp[(1) - (3)].p), (yyvsp[(3) - (3)].p)); }
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 228 "awkgram.y"
    { (yyval.p) = op3(CONDEXPR, notnull((yyvsp[(1) - (5)].p)), (yyvsp[(3) - (5)].p), (yyvsp[(5) - (5)].p)); }
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 230 "awkgram.y"
    { (yyval.p) = op2(BOR, notnull((yyvsp[(1) - (3)].p)), notnull((yyvsp[(3) - (3)].p))); }
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 232 "awkgram.y"
    { (yyval.p) = op2(AND, notnull((yyvsp[(1) - (3)].p)), notnull((yyvsp[(3) - (3)].p))); }
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 233 "awkgram.y"
    { (yyval.p) = op2((yyvsp[(2) - (3)].i), (yyvsp[(1) - (3)].p), (yyvsp[(3) - (3)].p)); }
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 234 "awkgram.y"
    { (yyval.p) = op2((yyvsp[(2) - (3)].i), (yyvsp[(1) - (3)].p), (yyvsp[(3) - (3)].p)); }
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 235 "awkgram.y"
    { (yyval.p) = op2((yyvsp[(2) - (3)].i), (yyvsp[(1) - (3)].p), (yyvsp[(3) - (3)].p)); }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 236 "awkgram.y"
    { (yyval.p) = op2((yyvsp[(2) - (3)].i), (yyvsp[(1) - (3)].p), (yyvsp[(3) - (3)].p)); }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 237 "awkgram.y"
    { (yyval.p) = op2((yyvsp[(2) - (3)].i), (yyvsp[(1) - (3)].p), (yyvsp[(3) - (3)].p)); }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 238 "awkgram.y"
    { (yyval.p) = op2((yyvsp[(2) - (3)].i), (yyvsp[(1) - (3)].p), (yyvsp[(3) - (3)].p)); }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 239 "awkgram.y"
    { (yyval.p) = op3((yyvsp[(2) - (3)].i), NIL, (yyvsp[(1) - (3)].p), (Node*)makedfa((yyvsp[(3) - (3)].s), 0)); }
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 241 "awkgram.y"
    { if (constnode((yyvsp[(3) - (3)].p)))
			(yyval.p) = op3((yyvsp[(2) - (3)].i), NIL, (yyvsp[(1) - (3)].p), (Node*)makedfa(strnode((yyvsp[(3) - (3)].p)), 0));
		  else
			(yyval.p) = op3((yyvsp[(2) - (3)].i), (Node *)1, (yyvsp[(1) - (3)].p), (yyvsp[(3) - (3)].p)); }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 245 "awkgram.y"
    { (yyval.p) = op2(INTEST, (yyvsp[(1) - (3)].p), makearr((yyvsp[(3) - (3)].p))); }
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 246 "awkgram.y"
    { (yyval.p) = op2(INTEST, (yyvsp[(2) - (5)].p), makearr((yyvsp[(5) - (5)].p))); }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 247 "awkgram.y"
    { 
			if (safe) SYNTAX("cmd | getline is unsafe");
			else (yyval.p) = op3(GETLINE, (yyvsp[(4) - (4)].p), itonp((yyvsp[(2) - (4)].i)), (yyvsp[(1) - (4)].p)); }
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 250 "awkgram.y"
    { 
			if (safe) SYNTAX("cmd | getline is unsafe");
			else (yyval.p) = op3(GETLINE, (Node*)0, itonp((yyvsp[(2) - (3)].i)), (yyvsp[(1) - (3)].p)); }
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 253 "awkgram.y"
    { (yyval.p) = op2(CAT, (yyvsp[(1) - (2)].p), (yyvsp[(2) - (2)].p)); }
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 259 "awkgram.y"
    { (yyval.p) = linkum((yyvsp[(1) - (3)].p), (yyvsp[(3) - (3)].p)); }
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 260 "awkgram.y"
    { (yyval.p) = linkum((yyvsp[(1) - (3)].p), (yyvsp[(3) - (3)].p)); }
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 265 "awkgram.y"
    { (yyval.p) = linkum((yyvsp[(1) - (3)].p), (yyvsp[(3) - (3)].p)); }
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 269 "awkgram.y"
    { (yyval.p) = rectonode(); }
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 271 "awkgram.y"
    { (yyval.p) = (yyvsp[(2) - (3)].p); }
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 288 "awkgram.y"
    { (yyval.p) = op3(MATCH, NIL, rectonode(), (Node*)makedfa((yyvsp[(1) - (1)].s), 0)); }
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 289 "awkgram.y"
    { (yyval.p) = op1(NOT, notnull((yyvsp[(2) - (2)].p))); }
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 293 "awkgram.y"
    {startreg();}
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 293 "awkgram.y"
    { (yyval.s) = (yyvsp[(3) - (4)].s); }
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 301 "awkgram.y"
    { 
			if (safe) SYNTAX("print | is unsafe");
			else (yyval.p) = stat3((yyvsp[(1) - (4)].i), (yyvsp[(2) - (4)].p), itonp((yyvsp[(3) - (4)].i)), (yyvsp[(4) - (4)].p)); }
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 304 "awkgram.y"
    {
			if (safe) SYNTAX("print >> is unsafe");
			else (yyval.p) = stat3((yyvsp[(1) - (4)].i), (yyvsp[(2) - (4)].p), itonp((yyvsp[(3) - (4)].i)), (yyvsp[(4) - (4)].p)); }
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 307 "awkgram.y"
    {
			if (safe) SYNTAX("print > is unsafe");
			else (yyval.p) = stat3((yyvsp[(1) - (4)].i), (yyvsp[(2) - (4)].p), itonp((yyvsp[(3) - (4)].i)), (yyvsp[(4) - (4)].p)); }
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 310 "awkgram.y"
    { (yyval.p) = stat3((yyvsp[(1) - (2)].i), (yyvsp[(2) - (2)].p), NIL, NIL); }
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 311 "awkgram.y"
    { (yyval.p) = stat2(DELETE, makearr((yyvsp[(2) - (5)].p)), (yyvsp[(4) - (5)].p)); }
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 312 "awkgram.y"
    { (yyval.p) = stat2(DELETE, makearr((yyvsp[(2) - (2)].p)), 0); }
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 313 "awkgram.y"
    { (yyval.p) = exptostat((yyvsp[(1) - (1)].p)); }
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 314 "awkgram.y"
    { yyclearin; SYNTAX("illegal statement"); }
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 323 "awkgram.y"
    { if (!inloop) SYNTAX("break illegal outside of loops");
				  (yyval.p) = stat1(BREAK, NIL); }
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 325 "awkgram.y"
    {  if (!inloop) SYNTAX("continue illegal outside of loops");
				  (yyval.p) = stat1(CONTINUE, NIL); }
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 327 "awkgram.y"
    {inloop++;}
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 327 "awkgram.y"
    {--inloop;}
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 328 "awkgram.y"
    { (yyval.p) = stat2(DO, (yyvsp[(3) - (9)].p), notnull((yyvsp[(7) - (9)].p))); }
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 329 "awkgram.y"
    { (yyval.p) = stat1(EXIT, (yyvsp[(2) - (3)].p)); }
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 330 "awkgram.y"
    { (yyval.p) = stat1(EXIT, NIL); }
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 332 "awkgram.y"
    { (yyval.p) = stat3(IF, (yyvsp[(1) - (4)].p), (yyvsp[(2) - (4)].p), (yyvsp[(4) - (4)].p)); }
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 333 "awkgram.y"
    { (yyval.p) = stat3(IF, (yyvsp[(1) - (2)].p), (yyvsp[(2) - (2)].p), NIL); }
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 334 "awkgram.y"
    { (yyval.p) = (yyvsp[(2) - (3)].p); }
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 335 "awkgram.y"
    { if (infunc)
				SYNTAX("next is illegal inside a function");
			  (yyval.p) = stat1(NEXT, NIL); }
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 338 "awkgram.y"
    { if (infunc)
				SYNTAX("nextfile is illegal inside a function");
			  (yyval.p) = stat1(NEXTFILE, NIL); }
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 341 "awkgram.y"
    { (yyval.p) = stat1(RETURN, (yyvsp[(2) - (3)].p)); }
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 342 "awkgram.y"
    { (yyval.p) = stat1(RETURN, NIL); }
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 344 "awkgram.y"
    {inloop++;}
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 344 "awkgram.y"
    { --inloop; (yyval.p) = stat2(WHILE, (yyvsp[(1) - (3)].p), (yyvsp[(3) - (3)].p)); }
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 345 "awkgram.y"
    { (yyval.p) = 0; }
    break;

  case 134:

/* Line 1806 of yacc.c  */
#line 350 "awkgram.y"
    { (yyval.p) = linkum((yyvsp[(1) - (2)].p), (yyvsp[(2) - (2)].p)); }
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 358 "awkgram.y"
    { (yyval.p) = op2(DIVEQ, (yyvsp[(1) - (4)].p), (yyvsp[(4) - (4)].p)); }
    break;

  case 138:

/* Line 1806 of yacc.c  */
#line 359 "awkgram.y"
    { (yyval.p) = op2(ADD, (yyvsp[(1) - (3)].p), (yyvsp[(3) - (3)].p)); }
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 360 "awkgram.y"
    { (yyval.p) = op2(MINUS, (yyvsp[(1) - (3)].p), (yyvsp[(3) - (3)].p)); }
    break;

  case 140:

/* Line 1806 of yacc.c  */
#line 361 "awkgram.y"
    { (yyval.p) = op2(MULT, (yyvsp[(1) - (3)].p), (yyvsp[(3) - (3)].p)); }
    break;

  case 141:

/* Line 1806 of yacc.c  */
#line 362 "awkgram.y"
    { (yyval.p) = op2(DIVIDE, (yyvsp[(1) - (3)].p), (yyvsp[(3) - (3)].p)); }
    break;

  case 142:

/* Line 1806 of yacc.c  */
#line 363 "awkgram.y"
    { (yyval.p) = op2(MOD, (yyvsp[(1) - (3)].p), (yyvsp[(3) - (3)].p)); }
    break;

  case 143:

/* Line 1806 of yacc.c  */
#line 364 "awkgram.y"
    { (yyval.p) = op2(POWER, (yyvsp[(1) - (3)].p), (yyvsp[(3) - (3)].p)); }
    break;

  case 144:

/* Line 1806 of yacc.c  */
#line 365 "awkgram.y"
    { (yyval.p) = op1(UMINUS, (yyvsp[(2) - (2)].p)); }
    break;

  case 145:

/* Line 1806 of yacc.c  */
#line 366 "awkgram.y"
    { (yyval.p) = (yyvsp[(2) - (2)].p); }
    break;

  case 146:

/* Line 1806 of yacc.c  */
#line 367 "awkgram.y"
    { (yyval.p) = op1(NOT, notnull((yyvsp[(2) - (2)].p))); }
    break;

  case 147:

/* Line 1806 of yacc.c  */
#line 368 "awkgram.y"
    { (yyval.p) = op2(BLTIN, itonp((yyvsp[(1) - (3)].i)), rectonode()); }
    break;

  case 148:

/* Line 1806 of yacc.c  */
#line 369 "awkgram.y"
    { (yyval.p) = op2(BLTIN, itonp((yyvsp[(1) - (4)].i)), (yyvsp[(3) - (4)].p)); }
    break;

  case 149:

/* Line 1806 of yacc.c  */
#line 370 "awkgram.y"
    { (yyval.p) = op2(BLTIN, itonp((yyvsp[(1) - (1)].i)), rectonode()); }
    break;

  case 150:

/* Line 1806 of yacc.c  */
#line 371 "awkgram.y"
    { (yyval.p) = op2(CALL, celltonode((yyvsp[(1) - (3)].cp),CVAR), NIL); }
    break;

  case 151:

/* Line 1806 of yacc.c  */
#line 372 "awkgram.y"
    { (yyval.p) = op2(CALL, celltonode((yyvsp[(1) - (4)].cp),CVAR), (yyvsp[(3) - (4)].p)); }
    break;

  case 152:

/* Line 1806 of yacc.c  */
#line 373 "awkgram.y"
    { (yyval.p) = op1(CLOSE, (yyvsp[(2) - (2)].p)); }
    break;

  case 153:

/* Line 1806 of yacc.c  */
#line 374 "awkgram.y"
    { (yyval.p) = op1(PREDECR, (yyvsp[(2) - (2)].p)); }
    break;

  case 154:

/* Line 1806 of yacc.c  */
#line 375 "awkgram.y"
    { (yyval.p) = op1(PREINCR, (yyvsp[(2) - (2)].p)); }
    break;

  case 155:

/* Line 1806 of yacc.c  */
#line 376 "awkgram.y"
    { (yyval.p) = op1(POSTDECR, (yyvsp[(1) - (2)].p)); }
    break;

  case 156:

/* Line 1806 of yacc.c  */
#line 377 "awkgram.y"
    { (yyval.p) = op1(POSTINCR, (yyvsp[(1) - (2)].p)); }
    break;

  case 157:

/* Line 1806 of yacc.c  */
#line 378 "awkgram.y"
    { (yyval.p) = op3(GETLINE, (yyvsp[(2) - (4)].p), itonp((yyvsp[(3) - (4)].i)), (yyvsp[(4) - (4)].p)); }
    break;

  case 158:

/* Line 1806 of yacc.c  */
#line 379 "awkgram.y"
    { (yyval.p) = op3(GETLINE, NIL, itonp((yyvsp[(2) - (3)].i)), (yyvsp[(3) - (3)].p)); }
    break;

  case 159:

/* Line 1806 of yacc.c  */
#line 380 "awkgram.y"
    { (yyval.p) = op3(GETLINE, (yyvsp[(2) - (2)].p), NIL, NIL); }
    break;

  case 160:

/* Line 1806 of yacc.c  */
#line 381 "awkgram.y"
    { (yyval.p) = op3(GETLINE, NIL, NIL, NIL); }
    break;

  case 161:

/* Line 1806 of yacc.c  */
#line 383 "awkgram.y"
    { (yyval.p) = op2(INDEX, (yyvsp[(3) - (6)].p), (yyvsp[(5) - (6)].p)); }
    break;

  case 162:

/* Line 1806 of yacc.c  */
#line 385 "awkgram.y"
    { SYNTAX("index() doesn't permit regular expressions");
		  (yyval.p) = op2(INDEX, (yyvsp[(3) - (6)].p), (Node*)(yyvsp[(5) - (6)].s)); }
    break;

  case 163:

/* Line 1806 of yacc.c  */
#line 387 "awkgram.y"
    { (yyval.p) = (yyvsp[(2) - (3)].p); }
    break;

  case 164:

/* Line 1806 of yacc.c  */
#line 389 "awkgram.y"
    { (yyval.p) = op3(MATCHFCN, NIL, (yyvsp[(3) - (6)].p), (Node*)makedfa((yyvsp[(5) - (6)].s), 1)); }
    break;

  case 165:

/* Line 1806 of yacc.c  */
#line 391 "awkgram.y"
    { if (constnode((yyvsp[(5) - (6)].p)))
			(yyval.p) = op3(MATCHFCN, NIL, (yyvsp[(3) - (6)].p), (Node*)makedfa(strnode((yyvsp[(5) - (6)].p)), 1));
		  else
			(yyval.p) = op3(MATCHFCN, (Node *)1, (yyvsp[(3) - (6)].p), (yyvsp[(5) - (6)].p)); }
    break;

  case 166:

/* Line 1806 of yacc.c  */
#line 395 "awkgram.y"
    { (yyval.p) = celltonode((yyvsp[(1) - (1)].cp), CCON); }
    break;

  case 167:

/* Line 1806 of yacc.c  */
#line 397 "awkgram.y"
    { (yyval.p) = op4(SPLIT, (yyvsp[(3) - (8)].p), makearr((yyvsp[(5) - (8)].p)), (yyvsp[(7) - (8)].p), (Node*)STRING); }
    break;

  case 168:

/* Line 1806 of yacc.c  */
#line 399 "awkgram.y"
    { (yyval.p) = op4(SPLIT, (yyvsp[(3) - (8)].p), makearr((yyvsp[(5) - (8)].p)), (Node*)makedfa((yyvsp[(7) - (8)].s), 1), (Node *)REGEXPR); }
    break;

  case 169:

/* Line 1806 of yacc.c  */
#line 401 "awkgram.y"
    { (yyval.p) = op4(SPLIT, (yyvsp[(3) - (6)].p), makearr((yyvsp[(5) - (6)].p)), NIL, (Node*)STRING); }
    break;

  case 170:

/* Line 1806 of yacc.c  */
#line 402 "awkgram.y"
    { (yyval.p) = op1((yyvsp[(1) - (4)].i), (yyvsp[(3) - (4)].p)); }
    break;

  case 171:

/* Line 1806 of yacc.c  */
#line 403 "awkgram.y"
    { (yyval.p) = celltonode((yyvsp[(1) - (1)].cp), CCON); }
    break;

  case 172:

/* Line 1806 of yacc.c  */
#line 405 "awkgram.y"
    { (yyval.p) = op4((yyvsp[(1) - (6)].i), NIL, (Node*)makedfa((yyvsp[(3) - (6)].s), 1), (yyvsp[(5) - (6)].p), rectonode()); }
    break;

  case 173:

/* Line 1806 of yacc.c  */
#line 407 "awkgram.y"
    { if (constnode((yyvsp[(3) - (6)].p)))
			(yyval.p) = op4((yyvsp[(1) - (6)].i), NIL, (Node*)makedfa(strnode((yyvsp[(3) - (6)].p)), 1), (yyvsp[(5) - (6)].p), rectonode());
		  else
			(yyval.p) = op4((yyvsp[(1) - (6)].i), (Node *)1, (yyvsp[(3) - (6)].p), (yyvsp[(5) - (6)].p), rectonode()); }
    break;

  case 174:

/* Line 1806 of yacc.c  */
#line 412 "awkgram.y"
    { (yyval.p) = op4((yyvsp[(1) - (8)].i), NIL, (Node*)makedfa((yyvsp[(3) - (8)].s), 1), (yyvsp[(5) - (8)].p), (yyvsp[(7) - (8)].p)); }
    break;

  case 175:

/* Line 1806 of yacc.c  */
#line 414 "awkgram.y"
    { if (constnode((yyvsp[(3) - (8)].p)))
			(yyval.p) = op4((yyvsp[(1) - (8)].i), NIL, (Node*)makedfa(strnode((yyvsp[(3) - (8)].p)), 1), (yyvsp[(5) - (8)].p), (yyvsp[(7) - (8)].p));
		  else
			(yyval.p) = op4((yyvsp[(1) - (8)].i), (Node *)1, (yyvsp[(3) - (8)].p), (yyvsp[(5) - (8)].p), (yyvsp[(7) - (8)].p)); }
    break;

  case 176:

/* Line 1806 of yacc.c  */
#line 419 "awkgram.y"
    { (yyval.p) = op3(SUBSTR, (yyvsp[(3) - (8)].p), (yyvsp[(5) - (8)].p), (yyvsp[(7) - (8)].p)); }
    break;

  case 177:

/* Line 1806 of yacc.c  */
#line 421 "awkgram.y"
    { (yyval.p) = op3(SUBSTR, (yyvsp[(3) - (6)].p), (yyvsp[(5) - (6)].p), NIL); }
    break;

  case 180:

/* Line 1806 of yacc.c  */
#line 427 "awkgram.y"
    { (yyval.p) = op2(ARRAY, makearr((yyvsp[(1) - (4)].p)), (yyvsp[(3) - (4)].p)); }
    break;

  case 181:

/* Line 1806 of yacc.c  */
#line 428 "awkgram.y"
    { (yyval.p) = op1(INDIRECT, celltonode((yyvsp[(1) - (1)].cp), CVAR)); }
    break;

  case 182:

/* Line 1806 of yacc.c  */
#line 429 "awkgram.y"
    { (yyval.p) = op1(INDIRECT, (yyvsp[(2) - (2)].p)); }
    break;

  case 183:

/* Line 1806 of yacc.c  */
#line 433 "awkgram.y"
    { arglist = (yyval.p) = 0; }
    break;

  case 184:

/* Line 1806 of yacc.c  */
#line 434 "awkgram.y"
    { arglist = (yyval.p) = celltonode((yyvsp[(1) - (1)].cp),CVAR); }
    break;

  case 185:

/* Line 1806 of yacc.c  */
#line 435 "awkgram.y"
    {
			checkdup((yyvsp[(1) - (3)].p), (yyvsp[(3) - (3)].cp));
			arglist = (yyval.p) = linkum((yyvsp[(1) - (3)].p),celltonode((yyvsp[(3) - (3)].cp),CVAR)); }
    break;

  case 186:

/* Line 1806 of yacc.c  */
#line 441 "awkgram.y"
    { (yyval.p) = celltonode((yyvsp[(1) - (1)].cp), CVAR); }
    break;

  case 187:

/* Line 1806 of yacc.c  */
#line 442 "awkgram.y"
    { (yyval.p) = op1(ARG, itonp((yyvsp[(1) - (1)].i))); }
    break;

  case 188:

/* Line 1806 of yacc.c  */
#line 443 "awkgram.y"
    { (yyval.p) = op1(VARNF, (Node *) (yyvsp[(1) - (1)].cp)); }
    break;

  case 189:

/* Line 1806 of yacc.c  */
#line 448 "awkgram.y"
    { (yyval.p) = notnull((yyvsp[(3) - (4)].p)); }
    break;



/* Line 1806 of yacc.c  */
#line 3890 "y.tab.c"
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

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 2067 of yacc.c  */
#line 451 "awkgram.y"


void setfname(Cell *p)
{
	if (isarr(p))
		SYNTAX("%s is an array, not a function", p->nval);
	else if (isfcn(p))
		SYNTAX("you can't define function %s more than once", p->nval);
	curfname = p->nval;
}

int constnode(Node *p)
{
	return isvalue(p) && ((Cell *) (p->narg[0]))->csub == CCON;
}

char *strnode(Node *p)
{
	return ((Cell *)(p->narg[0]))->sval;
}

Node *notnull(Node *n)
{
	switch (n->nobj) {
	case LE: case LT: case EQ: case NE: case GT: case GE:
	case BOR: case AND: case NOT:
		return n;
	default:
		return op2(NE, n, nullnode);
	}
}

void checkdup(Node *vl, Cell *cp)	/* check if name already in list */
{
	char *s = cp->nval;
	for ( ; vl; vl = vl->nnext) {
		if (strcmp(s, ((Cell *)(vl->narg[0]))->nval) == 0) {
			SYNTAX("duplicate argument %s", s);
			break;
		}
	}
}

