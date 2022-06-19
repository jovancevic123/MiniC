/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "micko.y"

#include <stdio.h>
#include <stdlib.h>
#include "defs.h"
#include "symtab.h"
#include "codegen.h"

    int yyparse(void);
    int yylex(void);
    int yyerror(char *s);
    void warning(char *s);

    extern int yylineno;
    int out_lin = 0;
    char char_buffer[CHAR_BUFFER_LENGTH];
    int error_count = 0;
    int warning_count = 0;
    int var_num = 0;
    int fun_idx = -1;
    int fcall_idx = -1;
    int lab_num = -1;
    int arr_num = 0;
    int literal_list_count = 0;
    int array_literals[100];
    int array_literals_idx = 0;

    int multiplier = -1;
    int stack_sizes[100];
    FILE *output;

#line 101 "micko.tab.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_MICKO_TAB_H_INCLUDED
# define YY_YY_MICKO_TAB_H_INCLUDED
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
    _TYPE = 258,
    _IF = 259,
    _ELSE = 260,
    _RETURN = 261,
    _ID = 262,
    _INT_NUMBER = 263,
    _UINT_NUMBER = 264,
    _LPAREN = 265,
    _RPAREN = 266,
    _LBRACKET = 267,
    _RBRACKET = 268,
    _LSQBRACKET = 269,
    _RSQBRACKET = 270,
    _COMMA = 271,
    _ASSIGN = 272,
    _SEMICOLON = 273,
    _DOT = 274,
    _DOUBLE_COLON = 275,
    _STACK = 276,
    _POP = 277,
    _PUSH = 278,
    _AROP = 279,
    _POINTER = 280,
    _RELOP = 281,
    ONLY_IF = 282
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 32 "micko.y"

  int i;
  char *s;
  struct num_exp_vals *vals;

#line 187 "micko.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MICKO_TAB_H_INCLUDED  */



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
typedef yytype_int8 yy_state_t;

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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   113

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  28
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  51
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  104

#define YYUNDEFTOK  2
#define YYMAXUTOK   282


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      25,    26,    27
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    75,    75,    82,    83,    87,    86,   111,   115,   141,
     140,   149,   151,   154,   161,   172,   198,   211,   216,   223,
     228,   234,   236,   239,   240,   240,   240,   243,   246,   272,
     288,   312,   315,   339,   347,   364,   376,   395,   415,   424,
     429,   436,   435,   454,   458,   469,   474,   481,   486,   480,
     498,   507
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_TYPE", "_IF", "_ELSE", "_RETURN",
  "_ID", "_INT_NUMBER", "_UINT_NUMBER", "_LPAREN", "_RPAREN", "_LBRACKET",
  "_RBRACKET", "_LSQBRACKET", "_RSQBRACKET", "_COMMA", "_ASSIGN",
  "_SEMICOLON", "_DOT", "_DOUBLE_COLON", "_STACK", "_POP", "_PUSH",
  "_AROP", "_POINTER", "_RELOP", "ONLY_IF", "$accept", "program",
  "function_list", "function", "$@1", "parameter", "body", "$@2",
  "variable_list", "variable", "literal_list", "size", "statement_list",
  "statement", "compound_statement", "assignment_statement", "num_exp",
  "exp", "literal", "function_call", "$@3", "argument", "if_statement",
  "if_part", "@4", "$@5", "rel_exp", "return_statement", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282
};
# endif

#define YYPACT_NINF (-57)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-42)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      15,    21,    27,    15,   -57,   -57,   -57,   -57,    37,    45,
      42,    49,   -57,    41,   -57,   -57,     0,    61,    51,   -57,
     -57,    44,    66,    19,     5,    60,   -57,    55,    67,    65,
      56,    40,   -57,   -57,   -57,   -57,   -57,   -57,    71,   -57,
      62,    63,    47,   -57,    68,   -57,    20,   -57,   -57,    56,
     -12,   -57,   -57,   -57,    56,    57,    64,    39,     4,   -57,
     -57,    54,   -57,    69,    56,    70,   -57,    73,    -4,   -57,
      56,    11,    74,    56,   -57,   -57,    72,    47,   -57,    14,
     -57,    75,    56,   -57,   -57,   -57,    56,    26,   -57,   -57,
      56,    77,    78,    76,    80,    -2,   -57,    76,     4,   -57,
     -57,    79,   -57,   -57
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     2,     3,     5,     1,     4,     0,     7,
       0,     0,     8,     0,    11,     6,     9,     0,     0,    21,
      12,     0,     0,     0,     0,     0,    13,     0,     0,     0,
       0,     0,    21,    10,    22,    23,    24,    25,    45,    26,
       0,     0,     0,    14,     0,    47,    35,    39,    40,     0,
       0,    31,    33,    37,     0,     0,     0,     0,     0,    19,
      20,     0,    17,     0,     0,     0,    34,     0,     0,    51,
       0,     0,     0,     0,    27,    46,     0,     0,    16,     0,
      48,     0,    43,    38,    32,    28,     0,     0,    15,    18,
       0,     0,     0,    44,     0,     0,    29,    50,     0,    36,
      42,     0,    49,    30
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -57,   -57,   -57,    83,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -27,    81,   -56,   -57,   -57,   -49,     9,   -41,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     4,     8,    11,    15,    19,    16,    20,
      61,    27,    23,    34,    35,    36,    50,    51,    52,    53,
      67,    94,    37,    38,    64,    91,    80,    39
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      68,    62,    75,    17,    56,    71,    69,    83,    29,   101,
      30,    31,    70,    40,    41,    79,    32,    63,     1,    66,
      70,    18,    70,    29,    87,    30,    31,     6,     5,    85,
     -41,    32,    33,    93,    24,    70,    89,    95,    70,    65,
      90,    97,   102,    29,    96,    30,    31,     9,    10,    12,
      70,    32,    74,    14,    24,    47,    48,    54,    24,    55,
      13,    25,    26,    46,    47,    48,    49,    76,    21,    28,
      77,    22,    42,    43,    44,    45,    58,    59,    60,    84,
      72,    73,    24,    82,    86,    92,     7,    78,    98,    99,
      88,   100,    81,     0,     0,     0,     0,   103,     0,     0,
      70,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    57
};

static const yytype_int8 yycheck[] =
{
      49,    42,    58,     3,    31,    54,    18,    11,     4,    11,
       6,     7,    24,     8,     9,    64,    12,    44,     3,    46,
      24,    21,    24,     4,    73,     6,     7,     0,     7,    18,
      10,    12,    13,    82,    14,    24,    77,    86,    24,    19,
      26,    90,    98,     4,    18,     6,     7,    10,     3,     7,
      24,    12,    13,    12,    14,     8,     9,    17,    14,    19,
      11,    17,    18,     7,     8,     9,    10,    13,     7,     3,
      16,    20,    12,    18,     7,    10,     5,    15,    15,    70,
      23,    17,    14,    10,    10,    10,     3,    18,    11,    11,
      18,    11,    22,    -1,    -1,    -1,    -1,    18,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    29,    30,    31,     7,     0,    31,    32,    10,
       3,    33,     7,    11,    12,    34,    36,     3,    21,    35,
      37,     7,    20,    40,    14,    17,    18,    39,     3,     4,
       6,     7,    12,    13,    41,    42,    43,    50,    51,    55,
       8,     9,    12,    18,     7,    10,     7,     8,     9,    10,
      44,    45,    46,    47,    17,    19,    39,    40,     5,    15,
      15,    38,    46,    39,    52,    19,    39,    48,    44,    18,
      24,    44,    23,    17,    13,    41,    13,    16,    18,    44,
      54,    22,    10,    11,    45,    18,    10,    44,    18,    46,
      26,    53,    10,    44,    49,    44,    18,    44,    11,    11,
      11,    11,    41,    18
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    28,    29,    30,    30,    32,    31,    33,    33,    35,
      34,    36,    36,    37,    37,    37,    37,    38,    38,    39,
      39,    40,    40,    41,    41,    41,    41,    42,    43,    43,
      43,    44,    44,    45,    45,    45,    45,    45,    45,    46,
      46,    48,    47,    49,    49,    50,    50,    52,    53,    51,
      54,    55
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     0,     7,     0,     2,     0,
       5,     0,     2,     3,     4,     7,     6,     1,     3,     3,
       3,     0,     2,     1,     1,     1,     1,     3,     4,     5,
       7,     1,     3,     1,     2,     1,     5,     1,     3,     1,
       1,     0,     5,     0,     1,     1,     3,     0,     0,     7,
       3,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
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
  case 2:
#line 76 "micko.y"
{
    if (lookup_symbol("main", FUN) == NO_INDEX)
        err("undefined reference to 'main'");
}
#line 1436 "micko.tab.c"
    break;

  case 5:
#line 87 "micko.y"
{
    fun_idx = lookup_symbol((yyvsp[0].s), FUN);
    if (fun_idx == NO_INDEX)
        fun_idx = insert_symbol((yyvsp[0].s), FUN, (yyvsp[-1].i), NO_ATR, NO_ATR);
    else
        err("redefinition of function '%s'", (yyvsp[0].s));

    code("\n%s:", (yyvsp[0].s));
    code("\n\t\tPUSH\t%%14");
    code("\n\t\tMOV \t%%15,%%14");
}
#line 1452 "micko.tab.c"
    break;

  case 6:
#line 99 "micko.y"
{
    clear_symbols(fun_idx + 1);
    var_num = 0;

    code("\n@%s_exit:", (yyvsp[-5].s));
    code("\n\t\tMOV \t%%14,%%15");
    code("\n\t\tPOP \t%%14");
    code("\n\t\tRET");
}
#line 1466 "micko.tab.c"
    break;

  case 7:
#line 111 "micko.y"
{
    set_atr1(fun_idx, 0);
}
#line 1474 "micko.tab.c"
    break;

  case 8:
#line 116 "micko.y"
{
    if ((yyvsp[-1].i) == INT_PTR)
    {
        insert_symbol((yyvsp[0].s), ARR_PAR, INT, 1, NO_ATR);
        set_atr1(fun_idx, 1);
        set_atr2(fun_idx, INT);
    }
    else if ((yyvsp[-1].i) == UINT_PTR)
    {
        insert_symbol((yyvsp[0].s), ARR_PAR, UINT, 1, NO_ATR);
        set_atr1(fun_idx, 1);
        set_atr2(fun_idx, UINT);
    }
    else
    {
        insert_symbol((yyvsp[0].s), PAR, (yyvsp[-1].i), 1, NO_ATR);
        set_atr1(fun_idx, 1);
        set_atr2(fun_idx, (yyvsp[-1].i));
    }

}
#line 1500 "micko.tab.c"
    break;

  case 9:
#line 141 "micko.y"
{
    if (var_num)
        code("\n\t\tSUBS\t%%15,$%d,%%15", 4 * var_num);
    code("\n@%s_body:", get_name(fun_idx));
}
#line 1510 "micko.tab.c"
    break;

  case 13:
#line 155 "micko.y"
{
    if (lookup_symbol((yyvsp[-1].s), VAR | PAR | ARR) == NO_INDEX)
        insert_symbol((yyvsp[-1].s), VAR, (yyvsp[-2].i), ++var_num, NO_ATR);
    else
        err("redefinition of '%s'", (yyvsp[-1].s));
}
#line 1521 "micko.tab.c"
    break;

  case 14:
#line 162 "micko.y"
{
    if (lookup_symbol((yyvsp[-2].s), VAR | PAR | ARR) == NO_INDEX)
    {
        insert_symbol((yyvsp[-2].s), ARR, (yyvsp[-3].i), ++var_num, (yyvsp[-1].i));
        code("\n\t\tSUBS\t %%15,$%d,%%15", 4 * (yyvsp[-1].i));
    }

    else
        err("redefinition of '%s'", (yyvsp[-2].s));
}
#line 1536 "micko.tab.c"
    break;

  case 15:
#line 173 "micko.y"
{
    if (lookup_symbol((yyvsp[-5].s), VAR | PAR | ARR) == NO_INDEX)
    {
        int idx = insert_symbol((yyvsp[-5].s), ARR, (yyvsp[-6].i), ++var_num, literal_list_count);
        code("\n\t\t\tSUBS\t %%15,$%d,%%15", 4 * literal_list_count);
        for (int i = 0; i < literal_list_count; i++)
        {
			struct num_exp_vals lit;
			lit.first = array_literals[i];
			lit.second = -1;

            //printf("\n\tDeklaracija niza: %d", lit.first);
			
			struct num_exp_vals id;
			id.first = idx;
			id.second = i;
           
            gen_mov(&lit, &id);
        }
    }
    else
        err("redefinition of '%s'", (yyvsp[-5].s));

    literal_list_count = 0;
}
#line 1566 "micko.tab.c"
    break;

  case 16:
#line 199 "micko.y"
{
    if (lookup_symbol((yyvsp[-2].s), VAR | PAR | ARR) == NO_INDEX){
        int idx = insert_symbol((yyvsp[-2].s), STACK, (yyvsp[-3].i), ++var_num, 0);
        stack_sizes[idx] = (yyvsp[-1].i);
        code("\n\t\tSUBS\t %%15,$%d,%%15", 4 * (yyvsp[-1].i));
    }
    else
        err("redefinition of '%s'", (yyvsp[-2].s));
    print_symtab();
}
#line 1581 "micko.tab.c"
    break;

  case 17:
#line 212 "micko.y"
{
    array_literals[literal_list_count] = (yyvsp[0].i);
    literal_list_count += 1;
}
#line 1590 "micko.tab.c"
    break;

  case 18:
#line 217 "micko.y"
{
    array_literals[literal_list_count] = (yyvsp[0].i);
    literal_list_count += 1;
}
#line 1599 "micko.tab.c"
    break;

  case 19:
#line 224 "micko.y"
{
    (yyval.i) = strtol((yyvsp[-1].s), NULL, 10);
}
#line 1607 "micko.tab.c"
    break;

  case 20:
#line 229 "micko.y"
{
    (yyval.i) = strtol((yyvsp[-1].s), NULL, 10);
}
#line 1615 "micko.tab.c"
    break;

  case 28:
#line 247 "micko.y"
{
    int idx = lookup_symbol((yyvsp[-3].s), VAR | PAR);
    if (idx == NO_INDEX)
        err("invalid lvalue '%s' in assignment", (yyvsp[-3].s));
    else if (get_type(idx) != get_type((yyvsp[-1].vals)->first))
    {
        err("incompatible types in assignment");
    }

    if (get_kind((yyvsp[-1].vals)->first) != ARR)
    {
        struct num_exp_vals vrati;
        vrati.first = idx;
        vrati.second = -1;
        gen_mov((yyvsp[-1].vals), &vrati);
    }
    else
    {
		struct num_exp_vals id;
		id.first = idx;
		id.second = -1;
        gen_mov((yyvsp[-1].vals), &id);
    }
}
#line 1644 "micko.tab.c"
    break;

  case 29:
#line 273 "micko.y"
{
    int idx = lookup_symbol((yyvsp[-4].s), ARR | ARR_PAR);
    if (get_kind(idx) != ARR_PAR)
    {
        if (idx == NO_INDEX)
            err("invalid lvalue '%s' in assignment", (yyvsp[-4].s));
        else if (get_type(idx) != get_type((yyvsp[-1].vals)->first))
            err("incompatible types in assignment");
		
		struct num_exp_vals id;
		id.first = idx;
		id.second = (yyvsp[-3].i);
        gen_mov((yyvsp[-1].vals), &id);
    }
}
#line 1664 "micko.tab.c"
    break;

  case 30:
#line 289 "micko.y"
{
    int idx = lookup_symbol((yyvsp[-6].s), STACK);
    if (idx == NO_INDEX)
        err("invalid lvalue '%s' in assignment", (yyvsp[-6].s));
    else if (get_type(idx) != get_type((yyvsp[-2].vals)->first))
        err("incompatible types in assignment");
    else
    {
        int count_elements = get_atr2(idx);
        if (count_elements >= stack_sizes[idx])
            err("exceeded maximum number of elements in stack");
        else{
            count_elements++;
            set_atr2(idx, count_elements);
            struct num_exp_vals id;
		    id.first = idx;
		    id.second = count_elements;
            gen_mov((yyvsp[-2].vals), &id);
        }
    }
}
#line 1690 "micko.tab.c"
    break;

  case 32:
#line 316 "micko.y"
{
    if (get_type((*(yyvsp[-2].vals)).first) != get_type((*(yyvsp[0].vals)).first))
        err("invalid operands: arithmetic operation");
    int t1 = get_type((yyvsp[-2].vals)->first);
    code("\n\t\t%s\t", ar_instructions[(yyvsp[-1].i) + (t1 - 1) * AROP_NUMBER]);

    gen_sym_name((yyvsp[-2].vals));
    code(",");
    gen_sym_name((yyvsp[0].vals));

    code(",");
    free_if_reg((yyvsp[0].vals)->first);
    free_if_reg((yyvsp[-2].vals)->first);
    struct num_exp_vals vrati;
    vrati.first = take_reg();
    vrati.second = -1;
    (yyval.vals) = &vrati;
    //$$ = take_reg();
    gen_sym_name((yyval.vals));
    set_type((yyval.vals)->first, t1);
}
#line 1716 "micko.tab.c"
    break;

  case 33:
#line 340 "micko.y"
{
    struct num_exp_vals *lit = (struct num_exp_vals*) malloc(sizeof(struct num_exp_vals));
    lit->first = (yyvsp[0].i);
    lit->second = -1;
    (yyval.vals) = lit;
}
#line 1727 "micko.tab.c"
    break;

  case 34:
#line 348 "micko.y"
{
    int head = lookup_symbol((yyvsp[-1].s), ARR | ARR_PAR);
    if (get_kind(head) != ARR_PAR)
    {
        if ((yyvsp[0].i) >= get_atr2(head))
            err("'%s' index out of range", (yyvsp[-1].s));

        if (head == NO_INDEX && get_kind(head) != ARR_PAR)
            err("'%s' undeclared", (yyvsp[-1].s));

        struct num_exp_vals *vrati = (struct num_exp_vals*) malloc(sizeof(struct num_exp_vals));
        vrati->first = head;
        vrati->second = (yyvsp[0].i);
        (yyval.vals) = vrati;
    }
}
#line 1748 "micko.tab.c"
    break;

  case 35:
#line 365 "micko.y"
{
    int idx = lookup_symbol((yyvsp[0].s), VAR | PAR | ARR);
    if (idx == NO_INDEX)
        err("'%s' undeclared", (yyvsp[0].s));

    struct num_exp_vals *vrati = (struct num_exp_vals*) malloc(sizeof(struct num_exp_vals));
    vrati->first = idx;
    vrati->second = -1;
    (yyval.vals) = vrati;
}
#line 1763 "micko.tab.c"
    break;

  case 36:
#line 377 "micko.y"
{
    int idx = lookup_symbol((yyvsp[-4].s), STACK);
    if (idx == NO_INDEX)
        err("'%s' undeclared", (yyvsp[-4].s));

    struct num_exp_vals *vrati = (struct num_exp_vals*) malloc(sizeof(struct num_exp_vals));
    int count_elements = get_atr2(idx);
    if (count_elements <= 0)
        err("nothing to pop from stack");
    else{
        vrati->first = idx;
        vrati->second = count_elements;
        (yyval.vals) = vrati;
        count_elements--;
        set_atr2(idx, count_elements);
    }   
  
}
#line 1786 "micko.tab.c"
    break;

  case 37:
#line 396 "micko.y"
{
    int idx = take_reg();
	
    struct num_exp_vals fun_reg;
    fun_reg.first = FUN_REG;
    fun_reg.second = -1;

    struct num_exp_vals id;
    id.first = idx;
    id.second = -1;
	
    gen_mov(&fun_reg, &id);
	
    struct num_exp_vals *vrati = (struct num_exp_vals*) malloc(sizeof(struct num_exp_vals));
    vrati->first = idx;
    vrati->second = -1;
    (yyval.vals) = vrati;
}
#line 1809 "micko.tab.c"
    break;

  case 38:
#line 416 "micko.y"
{
    struct num_exp_vals *vrati = (struct num_exp_vals*) malloc(sizeof(struct num_exp_vals));
    vrati->first = (yyvsp[-1].vals)->first;
    vrati->second = -1;
    (yyval.vals) = vrati;
}
#line 1820 "micko.tab.c"
    break;

  case 39:
#line 425 "micko.y"
{
    (yyval.i) = insert_literal((yyvsp[0].s), INT);
}
#line 1828 "micko.tab.c"
    break;

  case 40:
#line 430 "micko.y"
{
    (yyval.i) = insert_literal((yyvsp[0].s), UINT);
}
#line 1836 "micko.tab.c"
    break;

  case 41:
#line 436 "micko.y"
{
    fcall_idx = lookup_symbol((yyvsp[0].s), FUN);
    if (fcall_idx == NO_INDEX)
        err("'%s' is not a function", (yyvsp[0].s));
}
#line 1846 "micko.tab.c"
    break;

  case 42:
#line 442 "micko.y"
{
    if (get_atr1(fcall_idx) != (yyvsp[-1].i))
        err("wrong number of arguments");
    code("\n\t\t\tCALL\t%s", get_name(fcall_idx));
    if ((yyvsp[-1].i) > 0)
        code("\n\t\t\tADDS\t%%15,$%d,%%15", (yyvsp[-1].i) * 4);
    set_type(FUN_REG, get_type(fcall_idx));
    (yyval.i) = FUN_REG;
}
#line 1860 "micko.tab.c"
    break;

  case 43:
#line 454 "micko.y"
{
    (yyval.i) = 0;
}
#line 1868 "micko.tab.c"
    break;

  case 44:
#line 459 "micko.y"
{
    if (get_atr2(fcall_idx) != get_type((yyvsp[0].vals)->first))
        err("incompatible type for argument");
    free_if_reg((yyvsp[0].vals)->first);
    code("\n\t\t\tPUSH\t");
    gen_sym_name((yyvsp[0].vals));
    (yyval.i) = 1;
}
#line 1881 "micko.tab.c"
    break;

  case 45:
#line 470 "micko.y"
{
    code("\n@exit%d:", (yyvsp[0].i));
}
#line 1889 "micko.tab.c"
    break;

  case 46:
#line 475 "micko.y"
{
    code("\n@exit%d:", (yyvsp[-2].i));
}
#line 1897 "micko.tab.c"
    break;

  case 47:
#line 481 "micko.y"
{
    (yyval.i) = ++lab_num;
    code("\n@if%d:", lab_num);
}
#line 1906 "micko.tab.c"
    break;

  case 48:
#line 486 "micko.y"
{
    code("\n\t\t%s\t@false%d", opp_jumps[(yyvsp[0].i)], (yyvsp[-1].i));
    code("\n@true%d:", (yyvsp[-1].i));
}
#line 1915 "micko.tab.c"
    break;

  case 49:
#line 491 "micko.y"
{
    code("\n\t\tJMP \t@exit%d", (yyvsp[-4].i));
    code("\n@false%d:", (yyvsp[-4].i));
    (yyval.i) = (yyvsp[-4].i);
}
#line 1925 "micko.tab.c"
    break;

  case 50:
#line 499 "micko.y"
{
    if (get_type((yyvsp[-2].vals)->first) != get_type((yyvsp[0].vals)->first))
        err("invalid operands: relational operator");
    (yyval.i) = (yyvsp[-1].i) + ((get_type((yyvsp[-2].vals)->first) - 1) * RELOP_NUMBER);
    gen_cmp((yyvsp[-2].vals), (yyvsp[0].vals));
}
#line 1936 "micko.tab.c"
    break;

  case 51:
#line 508 "micko.y"
{
    
    if ((get_type(fun_idx) == INT_PTR && get_kind((yyvsp[-1].vals)->first) == ARR && get_type((yyvsp[-1].vals)->first) == INT) ||
        (get_type(fun_idx) == UINT_PTR && get_kind((yyvsp[-1].vals)->first) == ARR && get_type((yyvsp[-1].vals)->first) == UINT))
    {
        printf("Povratna vrednost je referenca na niz.");
    }
    else if (get_type(fun_idx) != get_type((yyvsp[-1].vals)->first))
    {
        err("incompatible types in return");
    }

    if (get_kind((yyvsp[-1].vals)->first) != ARR)
    {
        struct num_exp_vals *fun_reg = (struct num_exp_vals*) malloc(sizeof(struct num_exp_vals));
        fun_reg->first = FUN_REG;
        fun_reg->second = -1;
        
        gen_mov((yyvsp[-1].vals), fun_reg);
    }
    else
    {
		struct num_exp_vals *fun_reg = (struct num_exp_vals*) malloc(sizeof(struct num_exp_vals));
        fun_reg->first = FUN_REG;
        fun_reg->second = -1;

        gen_mov((yyvsp[-1].vals), fun_reg);
    }
    code("\n\t\tJMP \t@%s_exit", get_name(fun_idx));
}
#line 1971 "micko.tab.c"
    break;


#line 1975 "micko.tab.c"

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 550 "micko.y"


    int yyerror(char *s)
{
    fprintf(stderr, "\nline %d: ERROR: %s", yylineno, s);
    error_count++;
    return 0;
}

void warning(char *s)
{
    fprintf(stderr, "\nline %d: WARNING: %s", yylineno, s);
    warning_count++;
}

int main()
{
    int synerr;
    init_symtab();
    output = fopen("output.asm", "w+");    

    synerr = yyparse();

    clear_symtab();
    fclose(output);

    if (warning_count)
        printf("\n%d warning(s).\n", warning_count);

    if (error_count)
    {
        remove("output.asm");
        printf("\n%d error(s).\n", error_count);
    }

    if (synerr)
        return -1; // syntax error
    else if (error_count)
        return error_count & 127; // semantic errors
    else if (warning_count)
        return (warning_count & 127) + 127; // warnings
    else
        return 0; // OK
}

