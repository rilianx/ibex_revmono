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


/* Substitute the variable and function names.  */
#define yyparse         ibexparse
#define yylex           ibexlex
#define yyerror         ibexerror
#define yydebug         ibexdebug
#define yynerrs         ibexnerrs
#define yylval          ibexlval
#define yychar          ibexchar

/* First part of user prologue.  */
#line 1 "parser/parser.yc"

//============================================================================
//                                  I B E X                                   
// File        : Yacc/Bison input for Ibex parser
// Author      : Gilles Chabert
// Copyright   : IMT Atlantique (France)
// License     : See the LICENSE file
// Created     : Jun 12, 2012
// Last Update : Nov 03, 2019
//===========================================================================

#include "ibex_P_Struct.h"

using namespace ibex;
using namespace parser;
using namespace std;


#line 97 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"

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

#include "parser.tab.hh"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TK_CHOCO = 3,                   /* TK_CHOCO  */
  YYSYMBOL_TK_CONSTANT = 4,                /* TK_CONSTANT  */
  YYSYMBOL_TK_NEW_SYMBOL = 5,              /* TK_NEW_SYMBOL  */
  YYSYMBOL_TK_FUNC_SYMBOL = 6,             /* TK_FUNC_SYMBOL  */
  YYSYMBOL_TK_EXPR_TMP_SYMBOL = 7,         /* TK_EXPR_TMP_SYMBOL  */
  YYSYMBOL_TK_ENTITY = 8,                  /* TK_ENTITY  */
  YYSYMBOL_TK_ITERATOR = 9,                /* TK_ITERATOR  */
  YYSYMBOL_TK_UNARY_OP = 10,               /* TK_UNARY_OP  */
  YYSYMBOL_TK_BINARY_OP = 11,              /* TK_BINARY_OP  */
  YYSYMBOL_TK_STRING = 12,                 /* TK_STRING  */
  YYSYMBOL_TK_INT_CST = 13,                /* TK_INT_CST  */
  YYSYMBOL_TK_FLOAT = 14,                  /* TK_FLOAT  */
  YYSYMBOL_TK_PI = 15,                     /* TK_PI  */
  YYSYMBOL_TK_INFINITY = 16,               /* TK_INFINITY  */
  YYSYMBOL_TK_BOOL = 17,                   /* TK_BOOL  */
  YYSYMBOL_TK_PARAM = 18,                  /* TK_PARAM  */
  YYSYMBOL_TK_CONST = 19,                  /* TK_CONST  */
  YYSYMBOL_TK_VARS = 20,                   /* TK_VARS  */
  YYSYMBOL_TK_FUNCTION = 21,               /* TK_FUNCTION  */
  YYSYMBOL_TK_DIFF = 22,                   /* TK_DIFF  */
  YYSYMBOL_TK_MIN = 23,                    /* TK_MIN  */
  YYSYMBOL_TK_MAX = 24,                    /* TK_MAX  */
  YYSYMBOL_TK_INF = 25,                    /* TK_INF  */
  YYSYMBOL_TK_MID = 26,                    /* TK_MID  */
  YYSYMBOL_TK_SUP = 27,                    /* TK_SUP  */
  YYSYMBOL_TK_SIGN = 28,                   /* TK_SIGN  */
  YYSYMBOL_TK_ABS = 29,                    /* TK_ABS  */
  YYSYMBOL_TK_SUM = 30,                    /* TK_SUM  */
  YYSYMBOL_TK_SQRT = 31,                   /* TK_SQRT  */
  YYSYMBOL_TK_SQR = 32,                    /* TK_SQR  */
  YYSYMBOL_TK_POW = 33,                    /* TK_POW  */
  YYSYMBOL_TK_EXPO = 34,                   /* TK_EXPO  */
  YYSYMBOL_TK_LOG = 35,                    /* TK_LOG  */
  YYSYMBOL_TK_COS = 36,                    /* TK_COS  */
  YYSYMBOL_TK_SIN = 37,                    /* TK_SIN  */
  YYSYMBOL_TK_TAN = 38,                    /* TK_TAN  */
  YYSYMBOL_TK_ACOS = 39,                   /* TK_ACOS  */
  YYSYMBOL_TK_ASIN = 40,                   /* TK_ASIN  */
  YYSYMBOL_TK_ATAN = 41,                   /* TK_ATAN  */
  YYSYMBOL_TK_ATAN2 = 42,                  /* TK_ATAN2  */
  YYSYMBOL_TK_COSH = 43,                   /* TK_COSH  */
  YYSYMBOL_TK_SINH = 44,                   /* TK_SINH  */
  YYSYMBOL_TK_TANH = 45,                   /* TK_TANH  */
  YYSYMBOL_TK_ACOSH = 46,                  /* TK_ACOSH  */
  YYSYMBOL_TK_ASINH = 47,                  /* TK_ASINH  */
  YYSYMBOL_TK_ATANH = 48,                  /* TK_ATANH  */
  YYSYMBOL_TK_FLOOR = 49,                  /* TK_FLOOR  */
  YYSYMBOL_TK_CEIL = 50,                   /* TK_CEIL  */
  YYSYMBOL_TK_INTEGER = 51,                /* TK_INTEGER  */
  YYSYMBOL_TK_LEQ = 52,                    /* TK_LEQ  */
  YYSYMBOL_TK_GEQ = 53,                    /* TK_GEQ  */
  YYSYMBOL_TK_EQU = 54,                    /* TK_EQU  */
  YYSYMBOL_TK_ASSIGN = 55,                 /* TK_ASSIGN  */
  YYSYMBOL_TK_CHI = 56,                    /* TK_CHI  */
  YYSYMBOL_TK_BEGIN = 57,                  /* TK_BEGIN  */
  YYSYMBOL_TK_END = 58,                    /* TK_END  */
  YYSYMBOL_TK_FOR = 59,                    /* TK_FOR  */
  YYSYMBOL_TK_FROM = 60,                   /* TK_FROM  */
  YYSYMBOL_TK_TO = 61,                     /* TK_TO  */
  YYSYMBOL_TK_RETURN = 62,                 /* TK_RETURN  */
  YYSYMBOL_TK_CTRS = 63,                   /* TK_CTRS  */
  YYSYMBOL_TK_MINIMIZE = 64,               /* TK_MINIMIZE  */
  YYSYMBOL_TK_IN = 65,                     /* TK_IN  */
  YYSYMBOL_66_ = 66,                       /* '<'  */
  YYSYMBOL_67_ = 67,                       /* '>'  */
  YYSYMBOL_68_ = 68,                       /* '+'  */
  YYSYMBOL_69_ = 69,                       /* '-'  */
  YYSYMBOL_TK_UNION = 70,                  /* TK_UNION  */
  YYSYMBOL_71_ = 71,                       /* '*'  */
  YYSYMBOL_72_ = 72,                       /* '/'  */
  YYSYMBOL_TK_INTERSEC = 73,               /* TK_INTERSEC  */
  YYSYMBOL_74_ = 74,                       /* '^'  */
  YYSYMBOL_75_ = 75,                       /* '\''  */
  YYSYMBOL_76_ = 76,                       /* '['  */
  YYSYMBOL_77_ = 77,                       /* '('  */
  YYSYMBOL_78_ = 78,                       /* ';'  */
  YYSYMBOL_79_ = 79,                       /* ','  */
  YYSYMBOL_80_ = 80,                       /* ']'  */
  YYSYMBOL_81_ = 81,                       /* ')'  */
  YYSYMBOL_82_ = 82,                       /* ':'  */
  YYSYMBOL_YYACCEPT = 83,                  /* $accept  */
  YYSYMBOL_program = 84,                   /* program  */
  YYSYMBOL_85_1 = 85,                      /* $@1  */
  YYSYMBOL_86_2 = 86,                      /* $@2  */
  YYSYMBOL_system_or_func = 87,            /* system_or_func  */
  YYSYMBOL_choco_ctr = 88,                 /* choco_ctr  */
  YYSYMBOL_decl_opt_cst = 89,              /* decl_opt_cst  */
  YYSYMBOL_decl_cst_list = 90,             /* decl_cst_list  */
  YYSYMBOL_decl_cst = 91,                  /* decl_cst  */
  YYSYMBOL_equ_or_in = 92,                 /* equ_or_in  */
  YYSYMBOL_decl_var_list = 93,             /* decl_var_list  */
  YYSYMBOL_decl_var = 94,                  /* decl_var  */
  YYSYMBOL_dimension = 95,                 /* dimension  */
  YYSYMBOL_interval = 96,                  /* interval  */
  YYSYMBOL_decl_opt_fncs = 97,             /* decl_opt_fncs  */
  YYSYMBOL_function = 98,                  /* function  */
  YYSYMBOL_99_3 = 99,                      /* $@3  */
  YYSYMBOL_semicolon_opt = 100,            /* semicolon_opt  */
  YYSYMBOL_fnc_inpt_list = 101,            /* fnc_inpt_list  */
  YYSYMBOL_fnc_input = 102,                /* fnc_input  */
  YYSYMBOL_fnc_code = 103,                 /* fnc_code  */
  YYSYMBOL_fnc_assign = 104,               /* fnc_assign  */
  YYSYMBOL_decl_opt_goal = 105,            /* decl_opt_goal  */
  YYSYMBOL_decl_opt_ctrs = 106,            /* decl_opt_ctrs  */
  YYSYMBOL_107_4 = 107,                    /* $@4  */
  YYSYMBOL_ctr_blk_list = 108,             /* ctr_blk_list  */
  YYSYMBOL_ctr_blk_list1 = 109,            /* ctr_blk_list1  */
  YYSYMBOL_ctr_blk_list2 = 110,            /* ctr_blk_list2  */
  YYSYMBOL_ctr_loop = 111,                 /* ctr_loop  */
  YYSYMBOL_112_5 = 112,                    /* $@5  */
  YYSYMBOL_ctr = 113,                      /* ctr  */
  YYSYMBOL_expr = 114,                     /* expr  */
  YYSYMBOL_115_6 = 115,                    /* $@6  */
  YYSYMBOL_expr_row = 116,                 /* expr_row  */
  YYSYMBOL_expr_col = 117,                 /* expr_col  */
  YYSYMBOL_expr_index = 118                /* expr_index  */
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
typedef yytype_int16 yy_state_t;

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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1014

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  83
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  128
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  334

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   322


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
       2,     2,     2,     2,     2,     2,     2,     2,     2,    75,
      77,    81,    71,    68,    79,    69,     2,    72,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    82,    78,
      66,     2,    67,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    76,     2,    80,    74,     2,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    70,    73
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    93,    93,    93,    97,    97,   103,   107,   110,   117,
     118,   119,   122,   123,   126,   132,   141,   141,   143,   144,
     145,   148,   150,   155,   156,   158,   162,   170,   171,   174,
     174,   185,   185,   187,   188,   191,   195,   196,   199,   201,
     208,   209,   216,   217,   217,   220,   223,   224,   227,   228,
     229,   233,   234,   236,   241,   240,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   265,   266,   267,   268,   269,
     270,   272,   271,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   303,   304,
     305,   306,   307,   308,   309,   311,   312,   313,   314,   315,
     316,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   334,   335,   339,   340,   344,   345,   346
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "TK_CHOCO",
  "TK_CONSTANT", "TK_NEW_SYMBOL", "TK_FUNC_SYMBOL", "TK_EXPR_TMP_SYMBOL",
  "TK_ENTITY", "TK_ITERATOR", "TK_UNARY_OP", "TK_BINARY_OP", "TK_STRING",
  "TK_INT_CST", "TK_FLOAT", "TK_PI", "TK_INFINITY", "TK_BOOL", "TK_PARAM",
  "TK_CONST", "TK_VARS", "TK_FUNCTION", "TK_DIFF", "TK_MIN", "TK_MAX",
  "TK_INF", "TK_MID", "TK_SUP", "TK_SIGN", "TK_ABS", "TK_SUM", "TK_SQRT",
  "TK_SQR", "TK_POW", "TK_EXPO", "TK_LOG", "TK_COS", "TK_SIN", "TK_TAN",
  "TK_ACOS", "TK_ASIN", "TK_ATAN", "TK_ATAN2", "TK_COSH", "TK_SINH",
  "TK_TANH", "TK_ACOSH", "TK_ASINH", "TK_ATANH", "TK_FLOOR", "TK_CEIL",
  "TK_INTEGER", "TK_LEQ", "TK_GEQ", "TK_EQU", "TK_ASSIGN", "TK_CHI",
  "TK_BEGIN", "TK_END", "TK_FOR", "TK_FROM", "TK_TO", "TK_RETURN",
  "TK_CTRS", "TK_MINIMIZE", "TK_IN", "'<'", "'>'", "'+'", "'-'",
  "TK_UNION", "'*'", "'/'", "TK_INTERSEC", "'^'", "'\\''", "'['", "'('",
  "';'", "','", "']'", "')'", "':'", "$accept", "program", "$@1", "$@2",
  "system_or_func", "choco_ctr", "decl_opt_cst", "decl_cst_list",
  "decl_cst", "equ_or_in", "decl_var_list", "decl_var", "dimension",
  "interval", "decl_opt_fncs", "function", "$@3", "semicolon_opt",
  "fnc_inpt_list", "fnc_input", "fnc_code", "fnc_assign", "decl_opt_goal",
  "decl_opt_ctrs", "$@4", "ctr_blk_list", "ctr_blk_list1", "ctr_blk_list2",
  "ctr_loop", "$@5", "ctr", "expr", "$@6", "expr_row", "expr_col",
  "expr_index", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-198)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-33)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      99,    58,    69,   346,  -198,     6,  -198,  -198,    55,  -198,
    -198,  -198,    44,    64,  -198,  -198,  -198,  -198,    67,    77,
      93,   103,   108,   110,   111,   113,   116,   124,   125,   126,
     130,   136,   141,   142,   144,   146,   147,   149,   151,   152,
     153,   165,   166,   168,   173,   176,   183,   185,   186,   122,
     491,   491,   491,   491,   420,  -198,  -198,  -198,    57,   187,
    -198,  -198,    84,   190,   262,   191,  -198,    -4,   491,   491,
     491,   491,   491,   491,   491,   491,   491,   491,   491,   263,
     491,   491,   491,   491,   491,   491,   491,   491,   491,   491,
     491,   491,   491,   491,   491,   491,   491,   491,   491,   491,
     491,   491,   217,   491,   806,   -15,   -15,   818,   201,    29,
     -71,     8,   346,  -198,  -198,   346,   491,   491,   491,   491,
     491,   491,   491,   491,   491,   491,   491,  -198,   270,   270,
     491,    37,   190,     6,   267,  -198,  -198,  -198,    71,   163,
     830,   842,    36,    43,    51,   253,   332,   406,   474,   501,
     233,   512,   523,   854,   534,   545,   556,   567,   578,   589,
     600,   611,   866,   622,   633,   644,   655,   666,   677,   688,
     699,   710,   878,   491,   180,   491,   491,  -198,   491,   491,
    -198,   491,  -198,   491,  -198,  -198,  -198,  -198,  -198,    71,
      71,    71,    71,    71,    71,   -15,   -15,   -62,   -62,   -13,
    -198,   107,   208,    87,   776,  -198,  -198,   491,    37,  -198,
     190,    14,  -198,   284,  -198,   491,  -198,  -198,  -198,  -198,
    -198,  -198,  -198,  -198,   491,  -198,  -198,   491,  -198,  -198,
    -198,  -198,  -198,  -198,  -198,  -198,   491,  -198,  -198,  -198,
    -198,  -198,  -198,  -198,  -198,  -198,   491,   123,   915,   786,
      71,    71,    71,    71,   491,  -198,   270,  -198,   214,    71,
     491,   226,   267,   267,   246,   721,   140,   732,   743,   890,
     491,  -198,  -198,    71,   250,   491,    71,   491,  -198,   -12,
    -198,   327,  -198,   491,  -198,  -198,   491,   925,  -198,   796,
      71,   491,   272,   190,    90,  -198,   902,   754,  -198,  -198,
     936,     7,  -198,  -198,   327,  -198,  -198,  -198,   346,  -198,
     275,   346,  -198,    50,   491,   279,  -198,   282,   287,   288,
     491,   265,   765,  -198,  -198,   491,   491,   936,  -198,  -198,
      71,    71,   286,  -198
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     9,     0,     1,    10,    28,   110,     0,   109,
     107,   108,     0,     0,   114,   111,   112,   113,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     5,   115,     8,    32,    32,
      53,    50,     0,    23,     0,     0,    12,     7,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    98,    74,     0,     0,     0,
       0,     0,    31,    46,    31,    47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    77,     0,     0,
       0,     0,    23,    11,     0,    29,     3,    27,    64,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    63,     0,     0,
      99,     0,   105,     0,   106,    51,    48,    52,    49,    57,
      58,    56,    61,    59,    60,    65,    67,    66,    68,   101,
     126,   127,     0,     0,     0,    16,    17,     0,     0,    13,
      23,     0,    18,     0,   120,     0,   119,    70,    69,   116,
     117,   118,    76,    75,     0,    78,    79,     0,    81,    82,
      83,    84,    85,    86,    87,    88,     0,    89,    90,    91,
      92,    93,    94,    95,    96,    62,     0,     0,     0,     0,
     125,   123,   122,   124,     0,   102,     0,   103,    24,    14,
       0,    21,    28,     0,     0,     0,     0,     0,     0,     0,
       0,   100,    26,   128,     0,     0,    15,     0,    19,    40,
      20,     0,   121,     0,    80,    73,     0,     0,   104,     0,
      22,     0,    42,    23,     0,    34,     0,     0,    54,    25,
      32,    43,     6,    35,     0,    37,    71,    97,     0,    41,
       0,     0,    33,     0,     0,     0,    45,     0,     0,     0,
       0,     0,     0,    55,    44,     0,     0,    32,    36,    72,
      39,    38,     0,    30
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,   212,   150,
    -198,   -90,  -126,  -198,    86,  -198,  -198,   -54,  -198,    45,
    -198,  -198,  -198,  -198,  -198,  -197,  -198,  -198,     1,  -198,
     -25,   -50,  -198,    91,  -198,  -122
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,     2,     3,   136,    55,     6,    65,    66,   207,
     211,   212,   131,    56,    67,   137,   213,   113,   294,   295,
     313,   321,   292,   302,   311,    57,    58,    59,    60,   308,
      61,    62,   314,   110,   111,   202
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     104,   105,   106,   107,   109,   115,   208,   203,   181,   135,
     182,    63,   126,   127,   128,   129,   134,   135,   138,   139,
     140,   141,   141,   141,   145,   146,   147,   148,   149,   108,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   291,   174,   318,   319,   124,   125,     4,   126,
     127,   128,   129,   128,   129,   -32,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,    64,   201,   201,
     204,   116,   117,   118,   261,   114,   183,   186,     5,   184,
     188,   205,   262,   263,   119,   120,   121,   122,   123,    -2,
     124,   125,   206,   126,   127,   128,   129,   178,   179,    68,
     180,   315,   320,   185,   317,   181,   187,   216,    -2,    -2,
      -2,    69,   181,   247,   217,   248,   249,   102,   250,   251,
     181,   252,   218,   253,   274,   112,   116,   117,   118,   122,
     123,    70,   124,   125,    71,   126,   127,   128,   129,   119,
     120,   121,   122,   123,    72,   124,   125,   259,   126,   127,
     128,   129,   142,   143,   144,   265,   256,   303,   257,   304,
      73,   305,   278,   280,   266,   122,   123,   267,   124,   125,
      74,   126,   127,   128,   129,    75,   268,    76,    77,   254,
      78,   122,   123,    79,   124,   125,   269,   126,   127,   128,
     129,    80,    81,    82,   273,   270,   201,    83,   122,   123,
     276,   124,   125,    84,   126,   127,   128,   129,    85,    86,
     287,    87,   283,    88,    89,   289,    90,   290,    91,    92,
      93,   122,   123,   296,   124,   125,   297,   126,   127,   128,
     129,   300,    94,    95,   214,    96,   309,   310,   122,   123,
      97,   124,   125,    98,   126,   127,   128,   129,   178,   179,
      99,   180,   100,   101,   322,   114,   130,   132,   150,   133,
     327,   173,   210,   332,     7,   330,   331,     9,    10,    11,
      12,    13,   177,    14,    15,    16,    17,   224,   255,   264,
     275,   277,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,   122,   123,   281,   124,   125,    48,   126,   127,   128,
     129,   288,   293,   316,   219,   301,    50,   323,    51,    52,
     324,   325,   326,   328,   333,   209,    53,   103,   279,   312,
       7,     8,   200,     9,    10,    11,    12,    13,   260,    14,
      15,    16,    17,     0,     0,     0,     0,     0,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,     0,     0,
     122,   123,    48,   124,   125,    49,   126,   127,   128,   129,
       0,     0,    50,   220,    51,    52,     0,     0,     0,     0,
       0,     0,    53,    54,     7,     8,     0,     9,    10,    11,
      12,    13,     0,    14,    15,    16,    17,     0,     0,     0,
       0,     0,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,     0,     0,   122,   123,    48,   124,   125,     0,
     126,   127,   128,   129,     0,     0,    50,   221,    51,    52,
       0,     0,     0,     0,     0,     7,    53,    54,     9,    10,
      11,    12,    13,     0,    14,    15,    16,    17,     0,     0,
       0,     0,     0,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,   122,   123,     0,   124,   125,    48,   126,   127,
     128,   129,     0,     0,     0,   222,     0,    50,     0,    51,
      52,     0,     0,     0,     0,     0,     0,    53,   103,   122,
     123,     0,   124,   125,     0,   126,   127,   128,   129,     0,
     122,   123,   223,   124,   125,     0,   126,   127,   128,   129,
       0,   122,   123,   225,   124,   125,     0,   126,   127,   128,
     129,     0,   122,   123,   226,   124,   125,     0,   126,   127,
     128,   129,     0,   122,   123,   228,   124,   125,     0,   126,
     127,   128,   129,     0,   122,   123,   229,   124,   125,     0,
     126,   127,   128,   129,     0,   122,   123,   230,   124,   125,
       0,   126,   127,   128,   129,     0,   122,   123,   231,   124,
     125,     0,   126,   127,   128,   129,     0,   122,   123,   232,
     124,   125,     0,   126,   127,   128,   129,     0,   122,   123,
     233,   124,   125,     0,   126,   127,   128,   129,     0,   122,
     123,   234,   124,   125,     0,   126,   127,   128,   129,     0,
     122,   123,   235,   124,   125,     0,   126,   127,   128,   129,
       0,   122,   123,   237,   124,   125,     0,   126,   127,   128,
     129,     0,   122,   123,   238,   124,   125,     0,   126,   127,
     128,   129,     0,   122,   123,   239,   124,   125,     0,   126,
     127,   128,   129,     0,   122,   123,   240,   124,   125,     0,
     126,   127,   128,   129,     0,   122,   123,   241,   124,   125,
       0,   126,   127,   128,   129,     0,   122,   123,   242,   124,
     125,     0,   126,   127,   128,   129,     0,   122,   123,   243,
     124,   125,     0,   126,   127,   128,   129,     0,   122,   123,
     244,   124,   125,     0,   126,   127,   128,   129,     0,   122,
     123,   245,   124,   125,     0,   126,   127,   128,   129,     0,
     122,   123,   282,   124,   125,     0,   126,   127,   128,   129,
       0,   122,   123,   284,   124,   125,     0,   126,   127,   128,
     129,     0,   122,   123,   285,   124,   125,     0,   126,   127,
     128,   129,     0,   122,   123,   307,   124,   125,     0,   126,
     127,   128,   129,     0,   122,   123,   329,   124,   125,     0,
     126,   127,   128,   129,   122,   123,   258,   124,   125,     0,
     126,   127,   128,   129,   122,   123,   272,   124,   125,     0,
     126,   127,   128,   129,   122,   123,   299,   124,   125,     0,
     126,   127,   128,   129,     0,   175,   122,   123,     0,   124,
     125,     0,   126,   127,   128,   129,     0,   176,   122,   123,
       0,   124,   125,     0,   126,   127,   128,   129,     0,   215,
     122,   123,     0,   124,   125,     0,   126,   127,   128,   129,
       0,   179,   122,   123,     0,   124,   125,     0,   126,   127,
     128,   129,     0,   227,   122,   123,     0,   124,   125,     0,
     126,   127,   128,   129,     0,   236,   122,   123,     0,   124,
     125,     0,   126,   127,   128,   129,     0,   246,   122,   123,
       0,   124,   125,     0,   126,   127,   128,   129,     0,   286,
     122,   123,     0,   124,   125,     0,   126,   127,   128,   129,
       0,   306,   271,   122,   123,     0,   124,   125,     0,   126,
     127,   128,   129,   122,   123,     0,   124,   125,     0,   126,
     127,   128,   129,   298,   122,   123,     0,   124,   125,     0,
     126,   127,   128,   129,   114
};

static const yytype_int16 yycheck[] =
{
      50,    51,    52,    53,    54,    59,   132,   129,    79,    21,
      81,     5,    74,    75,    76,    77,    20,    21,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    54,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,    64,   103,     4,     5,    71,    72,     0,    74,
      75,    76,    77,    76,    77,    58,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,    71,   128,   129,
     130,    52,    53,    54,   210,    78,    78,   112,    19,    81,
     115,    54,    78,    79,    65,    66,    67,    68,    69,     0,
      71,    72,    65,    74,    75,    76,    77,    78,    79,    54,
      81,   308,    62,   112,   311,    79,   115,    81,    19,    20,
      21,    77,    79,   173,    81,   175,   176,     5,   178,   179,
      79,   181,    81,   183,   256,    78,    52,    53,    54,    68,
      69,    77,    71,    72,    77,    74,    75,    76,    77,    65,
      66,    67,    68,    69,    77,    71,    72,   207,    74,    75,
      76,    77,    71,    72,    73,   215,    79,   293,    81,    79,
      77,    81,   262,   263,   224,    68,    69,   227,    71,    72,
      77,    74,    75,    76,    77,    77,   236,    77,    77,    82,
      77,    68,    69,    77,    71,    72,   246,    74,    75,    76,
      77,    77,    77,    77,   254,    82,   256,    77,    68,    69,
     260,    71,    72,    77,    74,    75,    76,    77,    77,    77,
     270,    77,    82,    77,    77,   275,    77,   277,    77,    77,
      77,    68,    69,   283,    71,    72,   286,    74,    75,    76,
      77,   291,    77,    77,    81,    77,   300,   301,    68,    69,
      77,    71,    72,    77,    74,    75,    76,    77,    78,    79,
      77,    81,    77,    77,   314,    78,    76,     5,     5,    78,
     320,    54,     5,   327,     4,   325,   326,     7,     8,     9,
      10,    11,    81,    13,    14,    15,    16,    54,    80,     5,
      76,    65,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    68,    69,    77,    71,    72,    56,    74,    75,    76,
      77,    81,     5,    58,    81,    63,    66,    58,    68,    69,
      58,    54,    54,    78,    58,   133,    76,    77,   262,   304,
       4,     5,    82,     7,     8,     9,    10,    11,   208,    13,
      14,    15,    16,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    -1,    -1,
      68,    69,    56,    71,    72,    59,    74,    75,    76,    77,
      -1,    -1,    66,    81,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    76,    77,     4,     5,    -1,     7,     8,     9,
      10,    11,    -1,    13,    14,    15,    16,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    -1,    -1,    68,    69,    56,    71,    72,    -1,
      74,    75,    76,    77,    -1,    -1,    66,    81,    68,    69,
      -1,    -1,    -1,    -1,    -1,     4,    76,    77,     7,     8,
       9,    10,    11,    -1,    13,    14,    15,    16,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    68,    69,    -1,    71,    72,    56,    74,    75,
      76,    77,    -1,    -1,    -1,    81,    -1,    66,    -1,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    68,
      69,    -1,    71,    72,    -1,    74,    75,    76,    77,    -1,
      68,    69,    81,    71,    72,    -1,    74,    75,    76,    77,
      -1,    68,    69,    81,    71,    72,    -1,    74,    75,    76,
      77,    -1,    68,    69,    81,    71,    72,    -1,    74,    75,
      76,    77,    -1,    68,    69,    81,    71,    72,    -1,    74,
      75,    76,    77,    -1,    68,    69,    81,    71,    72,    -1,
      74,    75,    76,    77,    -1,    68,    69,    81,    71,    72,
      -1,    74,    75,    76,    77,    -1,    68,    69,    81,    71,
      72,    -1,    74,    75,    76,    77,    -1,    68,    69,    81,
      71,    72,    -1,    74,    75,    76,    77,    -1,    68,    69,
      81,    71,    72,    -1,    74,    75,    76,    77,    -1,    68,
      69,    81,    71,    72,    -1,    74,    75,    76,    77,    -1,
      68,    69,    81,    71,    72,    -1,    74,    75,    76,    77,
      -1,    68,    69,    81,    71,    72,    -1,    74,    75,    76,
      77,    -1,    68,    69,    81,    71,    72,    -1,    74,    75,
      76,    77,    -1,    68,    69,    81,    71,    72,    -1,    74,
      75,    76,    77,    -1,    68,    69,    81,    71,    72,    -1,
      74,    75,    76,    77,    -1,    68,    69,    81,    71,    72,
      -1,    74,    75,    76,    77,    -1,    68,    69,    81,    71,
      72,    -1,    74,    75,    76,    77,    -1,    68,    69,    81,
      71,    72,    -1,    74,    75,    76,    77,    -1,    68,    69,
      81,    71,    72,    -1,    74,    75,    76,    77,    -1,    68,
      69,    81,    71,    72,    -1,    74,    75,    76,    77,    -1,
      68,    69,    81,    71,    72,    -1,    74,    75,    76,    77,
      -1,    68,    69,    81,    71,    72,    -1,    74,    75,    76,
      77,    -1,    68,    69,    81,    71,    72,    -1,    74,    75,
      76,    77,    -1,    68,    69,    81,    71,    72,    -1,    74,
      75,    76,    77,    -1,    68,    69,    81,    71,    72,    -1,
      74,    75,    76,    77,    68,    69,    80,    71,    72,    -1,
      74,    75,    76,    77,    68,    69,    80,    71,    72,    -1,
      74,    75,    76,    77,    68,    69,    80,    71,    72,    -1,
      74,    75,    76,    77,    -1,    79,    68,    69,    -1,    71,
      72,    -1,    74,    75,    76,    77,    -1,    79,    68,    69,
      -1,    71,    72,    -1,    74,    75,    76,    77,    -1,    79,
      68,    69,    -1,    71,    72,    -1,    74,    75,    76,    77,
      -1,    79,    68,    69,    -1,    71,    72,    -1,    74,    75,
      76,    77,    -1,    79,    68,    69,    -1,    71,    72,    -1,
      74,    75,    76,    77,    -1,    79,    68,    69,    -1,    71,
      72,    -1,    74,    75,    76,    77,    -1,    79,    68,    69,
      -1,    71,    72,    -1,    74,    75,    76,    77,    -1,    79,
      68,    69,    -1,    71,    72,    -1,    74,    75,    76,    77,
      -1,    79,    67,    68,    69,    -1,    71,    72,    -1,    74,
      75,    76,    77,    68,    69,    -1,    71,    72,    -1,    74,
      75,    76,    77,    78,    68,    69,    -1,    71,    72,    -1,
      74,    75,    76,    77,    78
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    84,    85,    86,     0,    19,    89,     4,     5,     7,
       8,     9,    10,    11,    13,    14,    15,    16,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    56,    59,
      66,    68,    69,    76,    77,    88,    96,   108,   109,   110,
     111,   113,   114,     5,    71,    90,    91,    97,    54,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,     5,    77,   114,   114,   114,   114,   113,   114,
     116,   117,    78,   100,    78,   100,    52,    53,    54,    65,
      66,    67,    68,    69,    71,    72,    74,    75,    76,    77,
      76,    95,     5,    78,    20,    21,    87,    98,   114,   114,
     114,   114,   116,   116,   116,   114,   114,   114,   114,   114,
       5,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,    54,   114,    79,    79,    81,    78,    79,
      81,    79,    81,    78,    81,   111,   113,   111,   113,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
      82,   114,   118,   118,   114,    54,    65,    92,    95,    91,
       5,    93,    94,    99,    81,    79,    81,    81,    81,    81,
      81,    81,    81,    81,    54,    81,    81,    79,    81,    81,
      81,    81,    81,    81,    81,    81,    79,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    79,   114,   114,   114,
     114,   114,   114,   114,    82,    80,    79,    81,    80,   114,
      92,    95,    78,    79,     5,   114,   114,   114,   114,   114,
      82,    67,    80,   114,   118,    76,   114,    65,    94,    97,
      94,    77,    81,    82,    81,    81,    79,   114,    81,   114,
     114,    64,   105,     5,   101,   102,   114,   114,    78,    80,
     114,    63,   106,    95,    79,    81,    79,    81,   112,   100,
     100,   107,   102,   103,   115,   108,    58,   108,     4,     5,
      62,   104,   114,    58,    58,    54,    54,   114,    78,    81,
     114,   114,   100,    58
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    83,    85,    84,    86,    84,    87,    87,    88,    89,
      89,    89,    90,    90,    91,    91,    92,    92,    93,    93,
      93,    94,    94,    95,    95,    95,    96,    97,    97,    99,
      98,   100,   100,   101,   101,   102,   103,   103,   104,   104,
     105,   105,   106,   107,   106,   106,   108,   108,   109,   109,
     109,   110,   110,   110,   112,   111,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   114,   114,   114,   114,   114,
     114,   115,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   116,   116,   117,   117,   118,   118,   118
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     4,     0,     2,     6,     0,     1,     0,
       1,     3,     1,     3,     4,     5,     1,     1,     1,     3,
       3,     2,     4,     0,     3,     6,     5,     2,     0,     0,
      11,     1,     0,     3,     1,     2,     3,     0,     3,     3,
       0,     3,     0,     0,     4,     3,     2,     2,     3,     3,
       1,     3,     3,     1,     0,    10,     3,     3,     3,     3,
       3,     3,     4,     3,     3,     3,     3,     3,     3,     4,
       4,     0,    11,     6,     2,     4,     4,     2,     4,     4,
       6,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     8,     2,     3,
       5,     3,     4,     4,     6,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     4,     4,     4,
       4,     6,     3,     3,     3,     3,     1,     1,     3
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
  case 2: /* $@1: %empty  */
#line 93 "parser/parser.yc"
                                                { pstruct->begin(); }
#line 1557 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 3: /* program: $@1 decl_opt_cst decl_opt_fncs system_or_func  */
#line 96 "parser/parser.yc"
                                                { pstruct->end(); }
#line 1563 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 4: /* $@2: %empty  */
#line 97 "parser/parser.yc"
                                                { pstruct->begin(); 
                                                  pstruct->scope().push(); /* new scope for temporary symbols */}
#line 1570 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 5: /* program: $@2 choco_ctr  */
#line 99 "parser/parser.yc"
                                                { pstruct->scope().pop();
                                                  pstruct->end(); }
#line 1577 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 8: /* choco_ctr: ctr_blk_list  */
#line 110 "parser/parser.yc"
                                                { pstruct->source.ctrs=new P_ConstraintList((yyvsp[0].constraints)); }
#line 1583 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 14: /* decl_cst: TK_NEW_SYMBOL dimension equ_or_in expr  */
#line 127 "parser/parser.yc"
                                                { Domain* d=new Domain(*(yyvsp[-2].dim));
                                                  init_symbol_domain((yyvsp[-3].str), *d, (yyvsp[0].expression)->_2domain());
                                                  pstruct->scope().add_cst((yyvsp[-3].str), *d, false); 
                                                  delete d;
                                                  free((yyvsp[-3].str)); delete (yyvsp[-2].dim); delete (yyvsp[0].expression); }
#line 1593 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 15: /* decl_cst: '*' TK_NEW_SYMBOL dimension equ_or_in expr  */
#line 133 "parser/parser.yc"
                                                { Domain* d=new Domain(*(yyvsp[-2].dim));
                                                  init_symbol_domain((yyvsp[-3].str), *d, (yyvsp[0].expression)->_2domain());
                                                  pstruct->source.mutable_constants.insert_new((yyvsp[-3].str),d);
                                                  pstruct->scope().add_cst((yyvsp[-3].str), *d, true); 
                                                  // note: d will be deleted by ~System().
                                                  free((yyvsp[-3].str)); delete (yyvsp[-2].dim); delete (yyvsp[0].expression); }
#line 1604 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 21: /* decl_var: TK_NEW_SYMBOL dimension  */
#line 148 "parser/parser.yc"
                                                { pstruct->scope().add_var((yyvsp[-1].str),(yyvsp[0].dim));  
		                                          free((yyvsp[-1].str)); delete (yyvsp[0].dim); }
#line 1611 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 22: /* decl_var: TK_NEW_SYMBOL dimension TK_IN expr  */
#line 151 "parser/parser.yc"
                                                    { pstruct->scope().add_var((yyvsp[-3].str),(yyvsp[-2].dim),(yyvsp[0].expression)->_2domain()); 
						                          free((yyvsp[-3].str)); delete (yyvsp[-2].dim); delete (yyvsp[0].expression); }
#line 1618 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 23: /* dimension: %empty  */
#line 155 "parser/parser.yc"
                                                { (yyval.dim)=new Dim(); }
#line 1624 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 24: /* dimension: '[' expr ']'  */
#line 156 "parser/parser.yc"
                                                { (yyval.dim)=new Dim(Dim::col_vec((yyvsp[-1].expression)->_2int())); 
                                                  delete (yyvsp[-1].expression);  }
#line 1631 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 25: /* dimension: '[' expr ']' '[' expr ']'  */
#line 158 "parser/parser.yc"
                                                { (yyval.dim)=new Dim(Dim::matrix((yyvsp[-4].expression)->_2int(),(yyvsp[-1].expression)->_2int())); 
                                                  delete (yyvsp[-4].expression); delete (yyvsp[-1].expression); }
#line 1638 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 26: /* interval: '[' expr ',' expr ']'  */
#line 162 "parser/parser.yc"
                                                { (yyval.itv)=new Interval((yyvsp[-3].expression)->_2dbl(true), (yyvsp[-1].expression)->_2dbl(false)); 
                                                  delete (yyvsp[-3].expression); delete (yyvsp[-1].expression); }
#line 1645 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 29: /* $@3: %empty  */
#line 174 "parser/parser.yc"
                                                { pstruct->begin_function(); }
#line 1651 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 30: /* function: TK_FUNCTION $@3 TK_NEW_SYMBOL '(' fnc_inpt_list ')' fnc_code TK_RETURN expr semicolon_opt TK_END  */
#line 179 "parser/parser.yc"
                                                { 
                                                  pstruct->end_function((yyvsp[-8].str),*(yyvsp[-2].expression));        
                                                  free((yyvsp[-8].str)); delete (yyvsp[-2].expression);
                                                 }
#line 1660 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 35: /* fnc_input: TK_NEW_SYMBOL dimension  */
#line 191 "parser/parser.yc"
                                                { pstruct->scope().add_var((yyvsp[-1].str),(yyvsp[0].dim));
                                                  free((yyvsp[-1].str)); delete (yyvsp[0].dim); }
#line 1667 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 38: /* fnc_assign: TK_NEW_SYMBOL TK_EQU expr  */
#line 199 "parser/parser.yc"
                                                { /* TODO: if this tmp symbol is not used, the generated expr will never be deleted */
                                                  pstruct->scope().add_expr_tmp_symbol((yyvsp[-2].str),&(yyvsp[0].expression)->generate()); free((yyvsp[-2].str)); delete (yyvsp[0].expression); }
#line 1674 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 39: /* fnc_assign: TK_CONSTANT TK_EQU expr  */
#line 201 "parser/parser.yc"
                                                { cerr << "Warning: line " << ibex_lineno << ", local variable " << (yyvsp[-2].str) << " shadows the constant of the same name\n"; 
                                                  pstruct->scope().add_expr_tmp_symbol((yyvsp[-2].str),&(yyvsp[0].expression)->generate()); free((yyvsp[-2].str)); delete (yyvsp[0].expression); }
#line 1681 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 40: /* decl_opt_goal: %empty  */
#line 208 "parser/parser.yc"
                                                { pstruct->source.goal = NULL; }
#line 1687 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 41: /* decl_opt_goal: TK_MINIMIZE expr semicolon_opt  */
#line 209 "parser/parser.yc"
                                                { pstruct->source.goal = (yyvsp[-1].expression); }
#line 1693 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 43: /* $@4: %empty  */
#line 217 "parser/parser.yc"
                                                { pstruct->scope().push(); /* new scope for temporary symbols */ }
#line 1699 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 44: /* decl_opt_ctrs: TK_CTRS $@4 ctr_blk_list TK_END  */
#line 218 "parser/parser.yc"
                                                { pstruct->source.ctrs=new P_ConstraintList((yyvsp[-1].constraints));
                                                  pstruct->scope().pop(); }
#line 1706 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 45: /* decl_opt_ctrs: TK_CTRS semicolon_opt TK_END  */
#line 220 "parser/parser.yc"
                                                { pstruct->source.ctrs=new P_ConstraintList(new vector<P_NumConstraint*>()); }
#line 1712 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 46: /* ctr_blk_list: ctr_blk_list1 semicolon_opt  */
#line 223 "parser/parser.yc"
                                                { (yyval.constraints) = (yyvsp[-1].constraints); }
#line 1718 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 47: /* ctr_blk_list: ctr_blk_list2 semicolon_opt  */
#line 224 "parser/parser.yc"
                                                { (yyval.constraints) = (yyvsp[-1].constraints); }
#line 1724 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 48: /* ctr_blk_list1: ctr_blk_list1 ';' ctr  */
#line 227 "parser/parser.yc"
                                                { (yyvsp[-2].constraints)->push_back((yyvsp[0].constraint)); (yyval.constraints) = (yyvsp[-2].constraints); }
#line 1730 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 49: /* ctr_blk_list1: ctr_blk_list2 semicolon_opt ctr  */
#line 228 "parser/parser.yc"
                                                            { (yyvsp[-2].constraints)->push_back((yyvsp[0].constraint)); (yyval.constraints) = (yyvsp[-2].constraints); }
#line 1736 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 50: /* ctr_blk_list1: ctr  */
#line 229 "parser/parser.yc"
                                                { (yyval.constraints) = new vector<P_NumConstraint*>();
                                                  (yyval.constraints)->push_back((yyvsp[0].constraint)); }
#line 1743 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 51: /* ctr_blk_list2: ctr_blk_list1 ';' ctr_loop  */
#line 233 "parser/parser.yc"
                                                { (yyvsp[-2].constraints)->push_back((yyvsp[0].constraint)); (yyval.constraints) = (yyvsp[-2].constraints); }
#line 1749 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 52: /* ctr_blk_list2: ctr_blk_list2 semicolon_opt ctr_loop  */
#line 235 "parser/parser.yc"
                                                            { (yyvsp[-2].constraints)->push_back((yyvsp[0].constraint)); (yyval.constraints) = (yyvsp[-2].constraints); }
#line 1755 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 53: /* ctr_blk_list2: ctr_loop  */
#line 236 "parser/parser.yc"
                                                { (yyval.constraints) = new vector<P_NumConstraint*>();
                                                  (yyval.constraints)->push_back((yyvsp[0].constraint)); }
#line 1762 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 54: /* $@5: %empty  */
#line 241 "parser/parser.yc"
                                                { pstruct->scope().push();
                                                  pstruct->scope().add_iterator((yyvsp[-5].str)); }
#line 1769 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 55: /* ctr_loop: TK_FOR TK_NEW_SYMBOL TK_EQU expr ':' expr ';' $@5 ctr_blk_list TK_END  */
#line 244 "parser/parser.yc"
                                                { (yyval.constraint) = new P_ConstraintLoop((yyvsp[-8].str), (yyvsp[-6].expression), (yyvsp[-4].expression), (yyvsp[-1].constraints)); 
                                                  pstruct->scope().pop();
                                                  free((yyvsp[-8].str)); }
#line 1777 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 56: /* ctr: expr TK_EQU expr  */
#line 249 "parser/parser.yc"
                                                { (yyval.constraint) = new P_OneConstraint((yyvsp[-2].expression),EQ,(yyvsp[0].expression)); }
#line 1783 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 57: /* ctr: expr TK_LEQ expr  */
#line 250 "parser/parser.yc"
                                                { (yyval.constraint) = new P_OneConstraint((yyvsp[-2].expression),LEQ,(yyvsp[0].expression)); }
#line 1789 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 58: /* ctr: expr TK_GEQ expr  */
#line 251 "parser/parser.yc"
                                                { (yyval.constraint) = new P_OneConstraint((yyvsp[-2].expression),GEQ,(yyvsp[0].expression)); }
#line 1795 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 59: /* ctr: expr '<' expr  */
#line 252 "parser/parser.yc"
                                                { (yyval.constraint) = new P_OneConstraint((yyvsp[-2].expression),LT,(yyvsp[0].expression)); }
#line 1801 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 60: /* ctr: expr '>' expr  */
#line 253 "parser/parser.yc"
                                                { (yyval.constraint) = new P_OneConstraint((yyvsp[-2].expression),GT,(yyvsp[0].expression)); }
#line 1807 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 61: /* ctr: expr TK_IN expr  */
#line 254 "parser/parser.yc"
                                                { (yyval.constraint) = new P_ThickEquality((yyvsp[-2].expression),(yyvsp[0].expression)->_2itv()); delete (yyvsp[0].expression); }
#line 1813 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 62: /* ctr: TK_INTEGER '(' expr ')'  */
#line 255 "parser/parser.yc"
                                                { (yyval.constraint) = new P_OneConstraint(saw((yyvsp[-1].expression)),EQ,NULL); }
#line 1819 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 63: /* ctr: '(' ctr ')'  */
#line 256 "parser/parser.yc"
                                                { (yyval.constraint) = (yyvsp[-1].constraint); }
#line 1825 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 64: /* ctr: TK_NEW_SYMBOL TK_EQU expr  */
#line 257 "parser/parser.yc"
                                                { (yyval.constraint) = new P_TmpSymbolDecl((yyvsp[-2].str),(yyvsp[0].expression)); 
                                                  pstruct->scope().add_expr_tmp_symbol((yyvsp[-2].str)); free((yyvsp[-2].str)); }
#line 1832 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 65: /* expr: expr '+' expr  */
#line 265 "parser/parser.yc"
                                                { (yyval.expression) = *(yyvsp[-2].expression) + *(yyvsp[0].expression);     }
#line 1838 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 66: /* expr: expr '*' expr  */
#line 266 "parser/parser.yc"
                                                { (yyval.expression) = *(yyvsp[-2].expression) * *(yyvsp[0].expression);     }
#line 1844 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 67: /* expr: expr '-' expr  */
#line 267 "parser/parser.yc"
                                                { (yyval.expression) = *(yyvsp[-2].expression) - *(yyvsp[0].expression);     }
#line 1850 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 68: /* expr: expr '/' expr  */
#line 268 "parser/parser.yc"
                                                { (yyval.expression) = *(yyvsp[-2].expression) / *(yyvsp[0].expression);     }
#line 1856 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 69: /* expr: TK_MAX '(' expr_row ')'  */
#line 269 "parser/parser.yc"
                                                { (yyval.expression) = max((yyvsp[-1].expressions)); delete (yyvsp[-1].expressions); }
#line 1862 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 70: /* expr: TK_MIN '(' expr_row ')'  */
#line 270 "parser/parser.yc"
                                                { (yyval.expression) = min((yyvsp[-1].expressions)); delete (yyvsp[-1].expressions); }
#line 1868 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 71: /* $@6: %empty  */
#line 272 "parser/parser.yc"
                                                { pstruct->scope().push();
                                                  pstruct->scope().add_iterator((yyvsp[-5].str)); }
#line 1875 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 72: /* expr: TK_SUM '(' TK_NEW_SYMBOL TK_EQU expr ':' expr ',' $@6 expr ')'  */
#line 274 "parser/parser.yc"
                                                { (yyval.expression) = sum((yyvsp[-1].expression), (yyvsp[-8].str), (yyvsp[-6].expression), (yyvsp[-4].expression));
                                                  pstruct->scope().pop();
                                                  free((yyvsp[-8].str)); }
#line 1883 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 73: /* expr: TK_ATAN2 '(' expr ',' expr ')'  */
#line 277 "parser/parser.yc"
                                                { (yyval.expression) = atan2((yyvsp[-3].expression),(yyvsp[-1].expression));  }
#line 1889 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 74: /* expr: '-' expr  */
#line 278 "parser/parser.yc"
                                                { (yyval.expression) = -*(yyvsp[0].expression);          }
#line 1895 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 75: /* expr: TK_ABS '(' expr ')'  */
#line 279 "parser/parser.yc"
                                                { (yyval.expression) = abs  ((yyvsp[-1].expression));     }
#line 1901 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 76: /* expr: TK_SIGN '(' expr ')'  */
#line 280 "parser/parser.yc"
                                                { (yyval.expression) = sign ((yyvsp[-1].expression));     }
#line 1907 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 77: /* expr: expr '\''  */
#line 281 "parser/parser.yc"
                                                    { (yyval.expression) = transpose((yyvsp[-1].expression)); }
#line 1913 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 78: /* expr: TK_SQRT '(' expr ')'  */
#line 282 "parser/parser.yc"
                                                { (yyval.expression) = sqrt ((yyvsp[-1].expression));     }
#line 1919 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 79: /* expr: TK_SQR '(' expr ')'  */
#line 283 "parser/parser.yc"
                                                { (yyval.expression) = sqr ((yyvsp[-1].expression));      }
#line 1925 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 80: /* expr: TK_POW '(' expr ',' expr ')'  */
#line 284 "parser/parser.yc"
                                                { (yyval.expression) = pow((yyvsp[-3].expression), (yyvsp[-1].expression));   }
#line 1931 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 81: /* expr: TK_EXPO '(' expr ')'  */
#line 285 "parser/parser.yc"
                                                { (yyval.expression) = exp  ((yyvsp[-1].expression));     }
#line 1937 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 82: /* expr: TK_LOG '(' expr ')'  */
#line 286 "parser/parser.yc"
                                                { (yyval.expression) = log  ((yyvsp[-1].expression));     }
#line 1943 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 83: /* expr: TK_COS '(' expr ')'  */
#line 287 "parser/parser.yc"
                                                { (yyval.expression) = cos  ((yyvsp[-1].expression));     }
#line 1949 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 84: /* expr: TK_SIN '(' expr ')'  */
#line 288 "parser/parser.yc"
                                                { (yyval.expression) = sin  ((yyvsp[-1].expression));     }
#line 1955 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 85: /* expr: TK_TAN '(' expr ')'  */
#line 289 "parser/parser.yc"
                                                { (yyval.expression) = tan  ((yyvsp[-1].expression));     }
#line 1961 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 86: /* expr: TK_ACOS '(' expr ')'  */
#line 290 "parser/parser.yc"
                                                { (yyval.expression) = acos ((yyvsp[-1].expression));     }
#line 1967 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 87: /* expr: TK_ASIN '(' expr ')'  */
#line 291 "parser/parser.yc"
                                                { (yyval.expression) = asin ((yyvsp[-1].expression));     }
#line 1973 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 88: /* expr: TK_ATAN '(' expr ')'  */
#line 292 "parser/parser.yc"
                                                { (yyval.expression) = atan ((yyvsp[-1].expression));     }
#line 1979 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 89: /* expr: TK_COSH '(' expr ')'  */
#line 293 "parser/parser.yc"
                                                { (yyval.expression) = cosh ((yyvsp[-1].expression));     }
#line 1985 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 90: /* expr: TK_SINH '(' expr ')'  */
#line 294 "parser/parser.yc"
                                                { (yyval.expression) = sinh ((yyvsp[-1].expression));     }
#line 1991 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 91: /* expr: TK_TANH '(' expr ')'  */
#line 295 "parser/parser.yc"
                                                { (yyval.expression) = tanh ((yyvsp[-1].expression));     }
#line 1997 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 92: /* expr: TK_ACOSH '(' expr ')'  */
#line 296 "parser/parser.yc"
                                                { (yyval.expression) = acosh((yyvsp[-1].expression));     }
#line 2003 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 93: /* expr: TK_ASINH '(' expr ')'  */
#line 297 "parser/parser.yc"
                                                { (yyval.expression) = asinh((yyvsp[-1].expression));     }
#line 2009 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 94: /* expr: TK_ATANH '(' expr ')'  */
#line 298 "parser/parser.yc"
                                                { (yyval.expression) = atanh((yyvsp[-1].expression));     }
#line 2015 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 95: /* expr: TK_FLOOR '(' expr ')'  */
#line 299 "parser/parser.yc"
                                                { (yyval.expression) = floor((yyvsp[-1].expression));     }
#line 2021 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 96: /* expr: TK_CEIL '(' expr ')'  */
#line 300 "parser/parser.yc"
                                                { (yyval.expression) = ceil((yyvsp[-1].expression));      }
#line 2027 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 97: /* expr: TK_CHI '(' expr ',' expr ',' expr ')'  */
#line 302 "parser/parser.yc"
                                                { (yyval.expression) = chi((yyvsp[-5].expression),(yyvsp[-3].expression),(yyvsp[-1].expression)); }
#line 2033 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 98: /* expr: '+' expr  */
#line 303 "parser/parser.yc"
                                                { (yyval.expression) = (yyvsp[0].expression); }
#line 2039 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 99: /* expr: '(' expr ')'  */
#line 304 "parser/parser.yc"
                                                    { (yyval.expression) = (yyvsp[-1].expression); }
#line 2045 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 100: /* expr: '<' expr ',' expr '>'  */
#line 305 "parser/parser.yc"
                                                { (yyval.expression) = new P_ExprConstant(ball((yyvsp[-3].expression)->_2domain(),(yyvsp[-1].expression)->_2dbl(false))); }
#line 2051 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 101: /* expr: expr '^' expr  */
#line 306 "parser/parser.yc"
                                                { (yyval.expression) = pow((yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 2057 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 102: /* expr: expr '[' expr_index ']'  */
#line 307 "parser/parser.yc"
                                                { (yyval.expression) = expr_with_index((yyvsp[-3].expression),(yyvsp[-1].expression),false);  }
#line 2063 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 103: /* expr: expr '(' expr_index ')'  */
#line 308 "parser/parser.yc"
                                                { (yyval.expression) = expr_with_index((yyvsp[-3].expression),(yyvsp[-1].expression),true); }
#line 2069 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 104: /* expr: expr '(' expr_index ',' expr_index ')'  */
#line 310 "parser/parser.yc"
                                                { (yyval.expression) = expr_with_index((yyvsp[-5].expression),(yyvsp[-3].expression),(yyvsp[-1].expression),true); }
#line 2075 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 105: /* expr: '(' expr_row ')'  */
#line 311 "parser/parser.yc"
                                                { (yyval.expression) = row_vec((yyvsp[-1].expressions)); delete (yyvsp[-1].expressions); }
#line 2081 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 106: /* expr: '(' expr_col ')'  */
#line 312 "parser/parser.yc"
                                                { (yyval.expression) = col_vec((yyvsp[-1].expressions)); delete (yyvsp[-1].expressions); }
#line 2087 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 107: /* expr: TK_ENTITY  */
#line 313 "parser/parser.yc"
                                                { (yyval.expression) = new P_ExprVarSymbol((yyvsp[0].str)); free((yyvsp[0].str)); /* cannot happen inside a function expr */}
#line 2093 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 108: /* expr: TK_ITERATOR  */
#line 314 "parser/parser.yc"
                                                { (yyval.expression) = new P_ExprIter((yyvsp[0].str)); free((yyvsp[0].str)); }
#line 2099 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 109: /* expr: TK_EXPR_TMP_SYMBOL  */
#line 315 "parser/parser.yc"
                                                { (yyval.expression) = new P_ExprTmpSymbol((yyvsp[0].str)); free((yyvsp[0].str)); /* not this (we do **not** build DAG with P_ExprNodes!) ---> &pstruct->scope().get_tmp_expr_node($1); */ }
#line 2105 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 110: /* expr: TK_CONSTANT  */
#line 316 "parser/parser.yc"
                                                { (yyval.expression) = new P_ExprCstSymbol((yyvsp[0].str)); free((yyvsp[0].str)); }
#line 2111 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 111: /* expr: TK_FLOAT  */
#line 320 "parser/parser.yc"
                                                { (yyval.expression) = new P_ExprConstant((yyvsp[0].real)); }
#line 2117 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 112: /* expr: TK_PI  */
#line 321 "parser/parser.yc"
                                                { (yyval.expression) = new P_ExprConstant(Interval::pi()); }
#line 2123 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 113: /* expr: TK_INFINITY  */
#line 322 "parser/parser.yc"
                                                { (yyval.expression) = dbl_infinity(); }
#line 2129 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 114: /* expr: TK_INT_CST  */
#line 323 "parser/parser.yc"
                                                { (yyval.expression) = new P_ExprConstant((yyvsp[0].itg)); }
#line 2135 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 115: /* expr: interval  */
#line 324 "parser/parser.yc"
                                                { (yyval.expression) = new P_ExprConstant(*(yyvsp[0].itv)); delete (yyvsp[0].itv); }
#line 2141 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 116: /* expr: TK_INF '(' expr ')'  */
#line 325 "parser/parser.yc"
                                                { (yyval.expression) = inf((yyvsp[-1].expression)); }
#line 2147 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 117: /* expr: TK_MID '(' expr ')'  */
#line 326 "parser/parser.yc"
                                                { (yyval.expression) = mid((yyvsp[-1].expression)); }
#line 2153 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 118: /* expr: TK_SUP '(' expr ')'  */
#line 327 "parser/parser.yc"
                                                { (yyval.expression) = sup((yyvsp[-1].expression)); }
#line 2159 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 119: /* expr: TK_DIFF '(' expr_row ')'  */
#line 328 "parser/parser.yc"
                                                { (yyval.expression) = diff((yyvsp[-1].expressions)); delete (yyvsp[-1].expressions); }
#line 2165 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 120: /* expr: TK_UNARY_OP '(' expr ')'  */
#line 329 "parser/parser.yc"
                                                { (yyval.expression) = new P_ExprGenericUnaryOp((yyvsp[-3].str),*(yyvsp[-1].expression)); free((yyvsp[-3].str)); }
#line 2171 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 121: /* expr: TK_BINARY_OP '(' expr ',' expr ')'  */
#line 331 "parser/parser.yc"
                                                { (yyval.expression) = new P_ExprGenericBinaryOp((yyvsp[-5].str),*(yyvsp[-3].expression),*(yyvsp[-1].expression)); free((yyvsp[-5].str)); }
#line 2177 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 122: /* expr_row: expr_row ',' expr  */
#line 334 "parser/parser.yc"
                                                { (yyvsp[-2].expressions)->push_back((yyvsp[0].expression)); (yyval.expressions)=(yyvsp[-2].expressions); }
#line 2183 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 123: /* expr_row: expr ',' expr  */
#line 335 "parser/parser.yc"
                                                { (yyval.expressions) = new vector<const P_ExprNode*>(); 
                                                  (yyval.expressions)->push_back((yyvsp[-2].expression)); (yyval.expressions)->push_back((yyvsp[0].expression)); }
#line 2190 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 124: /* expr_col: expr_col ';' expr  */
#line 339 "parser/parser.yc"
                                                { (yyvsp[-2].expressions)->push_back((yyvsp[0].expression)); (yyval.expressions)=(yyvsp[-2].expressions); }
#line 2196 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 125: /* expr_col: expr ';' expr  */
#line 340 "parser/parser.yc"
                                                { (yyval.expressions) = new vector<const P_ExprNode*>(); 
                                                  (yyval.expressions)->push_back((yyvsp[-2].expression)); (yyval.expressions)->push_back((yyvsp[0].expression)); }
#line 2203 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 126: /* expr_index: ':'  */
#line 344 "parser/parser.yc"
                                                { (yyval.expression) = index_all(); }
#line 2209 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 127: /* expr_index: expr  */
#line 345 "parser/parser.yc"
                                                    { (yyval.expression) = index((yyvsp[0].expression)); }
#line 2215 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;

  case 128: /* expr_index: expr ':' expr  */
#line 346 "parser/parser.yc"
                                                { (yyval.expression) = index_range((yyvsp[-2].expression),(yyvsp[0].expression)); }
#line 2221 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"
    break;


#line 2225 "/home/ignacio/ibex_revmono/src/parser/parser.tab.cc"

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
      yyerror (YY_("syntax error"));
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

  return yyresult;
}

