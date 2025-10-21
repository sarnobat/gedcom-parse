
/*  A Bison parser, made from gedcom_date.y
    by GNU Bison version 1.28  */

#define YYBISON 1  /* Identify Bison output.  */

#define yyparse gedcom_date_parse
#define yylex gedcom_date_lex
#define yyerror gedcom_date_error
#define yylval gedcom_date_lval
#define yychar gedcom_date_char
#define yydebug gedcom_date_debug
#define yynerrs gedcom_date_nerrs
#define	ESC_DATE_GREG	257
#define	ESC_DATE_JULN	258
#define	ESC_DATE_HEBR	259
#define	ESC_DATE_FREN	260
#define	MOD_FROM	261
#define	MOD_TO	262
#define	MOD_BEF	263
#define	MOD_AFT	264
#define	MOD_BET	265
#define	MOD_AND	266
#define	MOD_ABT	267
#define	MOD_CAL	268
#define	MOD_EST	269
#define	MOD_INT	270
#define	MON_JAN	271
#define	MON_FEB	272
#define	MON_MAR	273
#define	MON_APR	274
#define	MON_MAY	275
#define	MON_JUN	276
#define	MON_JUL	277
#define	MON_AUG	278
#define	MON_SEP	279
#define	MON_OCT	280
#define	MON_NOV	281
#define	MON_DEC	282
#define	MON_TSH	283
#define	MON_CSH	284
#define	MON_KSL	285
#define	MON_TVT	286
#define	MON_SHV	287
#define	MON_ADR	288
#define	MON_ADS	289
#define	MON_NSN	290
#define	MON_IYR	291
#define	MON_SVN	292
#define	MON_TMZ	293
#define	MON_AAV	294
#define	MON_ELL	295
#define	MON_VEND	296
#define	MON_BRUM	297
#define	MON_FRIM	298
#define	MON_NIVO	299
#define	MON_PLUV	300
#define	MON_VENT	301
#define	MON_GERM	302
#define	MON_FLOR	303
#define	MON_PRAI	304
#define	MON_MESS	305
#define	MON_THER	306
#define	MON_FRUC	307
#define	MON_COMP	308
#define	OPEN	309
#define	CLOSE	310
#define	TEXT	311
#define	NUMBER	312
#define	SLASH	313
#define	BADTOKEN	314

#line 24 "gedcom_date.y"

#include <stdlib.h>
#include "date.h"
#include "compat.h"

int _get_day_num(const char* input);
int _get_year_num(Year_type ytype, const char* input1, const char* input2);
void error_missing_year();
void error_missing_month(); 
  

#line 36 "gedcom_date.y"
typedef union {
  char *string;
  struct date_value date_val;
  struct date date;
} YYSTYPE;
#ifndef YYDEBUG
#define YYDEBUG 1
#endif

#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		121
#define	YYFLAG		-32768
#define	YYNTBASE	61

#define YYTRANSLATE(x) ((unsigned)(x) <= 314 ? yytranslate[x] : 80)

static const char yytranslate[] = {     0,
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
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     1,     3,     4,     5,     6,
     7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
    47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
    57,    58,    59,    60
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     2,     4,     6,     8,    10,    12,    13,    15,    18,
    21,    24,    27,    29,    32,    35,    36,    42,    45,    48,
    49,    55,    58,    61,    64,    68,    72,    76,    79,    81,
    84,    86,    89,    93,    96,    98,   101,   103,   106,   110,
   113,   115,   118,   120,   123,   127,   130,   132,   135,   137,
   140,   142,   144,   146,   148,   150,   152,   154,   156,   158,
   160,   162,   164,   166,   168,   170,   172,   174,   176,   178,
   180,   182,   184,   186,   188,   190,   192,   194,   196,   198,
   200,   202,   204,   206,   208,   210,   212,   214,   216,   218,
   220,   222
};

static const short yyrhs[] = {    62,
     0,    63,     0,    65,     0,    67,     0,    68,     0,    69,
     0,     0,     1,     0,     3,    70,     0,     4,    71,     0,
     5,    72,     0,     6,    73,     0,    70,     0,     7,    62,
     0,     8,    62,     0,     0,     7,    62,    64,     8,    62,
     0,     9,    62,     0,    10,    62,     0,     0,    11,    62,
    66,    12,    62,     0,    13,    62,     0,    14,    62,     0,
    15,    62,     0,    16,    62,    69,     0,    55,    57,    56,
     0,    74,    75,    79,     0,    75,    79,     0,    79,     0,
    74,    75,     0,    75,     0,    74,    79,     0,    74,    75,
    78,     0,    75,    78,     0,    78,     0,    74,    75,     0,
    75,     0,    74,    79,     0,    74,    76,    78,     0,    76,
    78,     0,    78,     0,    74,    76,     0,    76,     0,    74,
    78,     0,    74,    77,    78,     0,    77,    78,     0,    78,
     0,    74,    76,     0,    76,     0,    74,    78,     0,    58,
     0,    17,     0,    18,     0,    19,     0,    20,     0,    21,
     0,    22,     0,    23,     0,    24,     0,    25,     0,    26,
     0,    27,     0,    28,     0,    29,     0,    30,     0,    31,
     0,    32,     0,    33,     0,    34,     0,    35,     0,    36,
     0,    37,     0,    38,     0,    39,     0,    40,     0,    41,
     0,    42,     0,    43,     0,    44,     0,    45,     0,    46,
     0,    47,     0,    48,     0,    49,     0,    50,     0,    51,
     0,    52,     0,    53,     0,    54,     0,    58,     0,    58,
     0,    58,    59,    58,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   111,   113,   114,   115,   116,   117,   119,   127,   136,   138,
   140,   142,   144,   148,   150,   152,   153,   157,   159,   161,
   162,   166,   168,   170,   174,   178,   181,   182,   183,   184,
   185,   186,   189,   190,   191,   192,   193,   194,   197,   198,
   199,   200,   201,   202,   205,   206,   207,   208,   209,   210,
   213,   224,   226,   228,   230,   232,   234,   236,   238,   240,
   242,   244,   246,   250,   252,   254,   256,   258,   260,   262,
   264,   266,   268,   270,   272,   274,   278,   280,   282,   284,
   286,   288,   290,   292,   294,   296,   298,   300,   302,   306,
   317,   326
};
#endif


#if YYDEBUG != 0 || defined (YYERROR_VERBOSE)

static const char * const yytname[] = {   "$","error","$undefined.","ESC_DATE_GREG",
"ESC_DATE_JULN","ESC_DATE_HEBR","ESC_DATE_FREN","MOD_FROM","MOD_TO","MOD_BEF",
"MOD_AFT","MOD_BET","MOD_AND","MOD_ABT","MOD_CAL","MOD_EST","MOD_INT","MON_JAN",
"MON_FEB","MON_MAR","MON_APR","MON_MAY","MON_JUN","MON_JUL","MON_AUG","MON_SEP",
"MON_OCT","MON_NOV","MON_DEC","MON_TSH","MON_CSH","MON_KSL","MON_TVT","MON_SHV",
"MON_ADR","MON_ADS","MON_NSN","MON_IYR","MON_SVN","MON_TMZ","MON_AAV","MON_ELL",
"MON_VEND","MON_BRUM","MON_FRIM","MON_NIVO","MON_PLUV","MON_VENT","MON_GERM",
"MON_FLOR","MON_PRAI","MON_MESS","MON_THER","MON_FRUC","MON_COMP","OPEN","CLOSE",
"TEXT","NUMBER","SLASH","BADTOKEN","date_value","date","date_period","@1","date_range",
"@2","date_approx","date_interpr","date_phrase","date_greg","date_juln","date_hebr",
"date_fren","day","month_greg","month_hebr","month_fren","year","year_greg", NULL
};
#endif

static const short yyr1[] = {     0,
    61,    61,    61,    61,    61,    61,    61,    61,    62,    62,
    62,    62,    62,    63,    63,    64,    63,    65,    65,    66,
    65,    67,    67,    67,    68,    69,    70,    70,    70,    70,
    70,    70,    71,    71,    71,    71,    71,    71,    72,    72,
    72,    72,    72,    72,    73,    73,    73,    73,    73,    73,
    74,    75,    75,    75,    75,    75,    75,    75,    75,    75,
    75,    75,    75,    76,    76,    76,    76,    76,    76,    76,
    76,    76,    76,    76,    76,    76,    77,    77,    77,    77,
    77,    77,    77,    77,    77,    77,    77,    77,    77,    78,
    79,    79
};

static const short yyr2[] = {     0,
     1,     1,     1,     1,     1,     1,     0,     1,     2,     2,
     2,     2,     1,     2,     2,     0,     5,     2,     2,     0,
     5,     2,     2,     2,     3,     3,     3,     2,     1,     2,
     1,     2,     3,     2,     1,     2,     1,     2,     3,     2,
     1,     2,     1,     2,     3,     2,     1,     2,     1,     2,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     3
};

static const short yydefact[] = {     0,
     8,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    52,    53,    54,    55,    56,    57,
    58,    59,    60,    61,    62,    63,     0,    51,     1,     2,
     3,     4,     5,     6,    13,     0,    31,    29,     9,    51,
    10,     0,    37,    35,    64,    65,    66,    67,    68,    69,
    70,    71,    72,    73,    74,    75,    76,    11,     0,    43,
    41,    77,    78,    79,    80,    81,    82,    83,    84,    85,
    86,    87,    88,    89,    12,     0,    49,     0,    47,    14,
    15,    18,    19,    20,    22,    23,    24,     0,     0,     0,
    91,    30,    32,    28,    36,    38,    90,    34,    42,    44,
    40,    48,     0,    50,    46,     0,     0,    25,    26,    92,
    27,    33,    39,    45,     0,     0,    17,    21,     0,     0,
     0
};

static const short yydefgoto[] = {   119,
    29,    30,   106,    31,   107,    32,    33,    34,    35,    41,
    58,    75,    36,    37,    60,    78,    44,    38
};

static const short yypact[] = {   111,
-32768,   123,   135,   238,   178,    32,    32,    32,    32,    32,
    32,    32,    32,    32,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,   -45,    11,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,   177,   -41,-32768,-32768,    14,
-32768,   177,   -40,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   251,   -40,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,   208,-32768,   -40,-32768,    12,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,   -31,   -29,   -33,
   -26,   -41,-32768,-32768,   -40,-32768,-32768,-32768,   -40,-32768,
-32768,-32768,   -40,-32768,-32768,    20,    22,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,    32,    32,-32768,-32768,    39,    40,
-32768
};

static const short yypgoto[] = {-32768,
    -6,-32768,-32768,-32768,-32768,-32768,-32768,   -47,    41,-32768,
-32768,-32768,    27,    26,     8,   -34,     5,   -21
};


#define	YYLAST		309


static const short yytable[] = {    80,
    81,    82,    83,    84,    85,    86,    87,    88,    61,    79,
   -91,    89,    77,   -90,    93,    94,    91,    97,   -91,   -16,
    96,   -90,   -91,    27,   110,   -90,   109,   115,    43,    42,
    59,    76,    90,   116,     2,     3,     4,     5,   120,   121,
   108,   103,    39,     0,     0,     0,     0,    98,    15,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
     0,    92,     0,   100,   101,   -91,    99,    95,   -90,    90,
   111,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   104,     0,   105,   102,     0,     0,     0,     0,     0,    28,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   112,
     0,     0,     0,   113,     0,     0,     0,   114,   117,   118,
    -7,     1,     0,     2,     3,     4,     5,     6,     7,     8,
     9,    10,     0,    11,    12,    13,    14,    15,    16,    17,
    18,    19,    20,    21,    22,    23,    24,    25,    26,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    15,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    26,     0,     0,    27,     0,     0,    28,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,    40,    15,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    25,    26,     0,    45,    46,    47,    48,
    49,    50,    51,    52,    53,    54,    55,    56,    57,    62,
    63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
    73,    74,     0,     0,    91,    40,    45,    46,    47,    48,
    49,    50,    51,    52,    53,    54,    55,    56,    57,    62,
    63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
    73,    74,     0,     0,     0,    97,    45,    46,    47,    48,
    49,    50,    51,    52,    53,    54,    55,    56,    57,    45,
    46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
    56,    57,     0,     0,     0,    40,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    97
};

static const short yycheck[] = {     6,
     7,     8,     9,    10,    11,    12,    13,    14,     4,     5,
     0,    57,     5,     0,    36,    37,    58,    58,     8,     8,
    42,     8,    12,    55,    58,    12,    56,     8,     3,     3,
     4,     5,    59,    12,     3,     4,     5,     6,     0,     0,
    88,    76,     2,    -1,    -1,    -1,    -1,    43,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
    -1,    36,    -1,    59,    60,    55,    59,    42,    55,    59,
    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    76,    -1,    78,    76,    -1,    -1,    -1,    -1,    -1,    58,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,
    -1,    -1,    -1,    99,    -1,    -1,    -1,   103,   115,   116,
     0,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
    10,    11,    -1,    13,    14,    15,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    27,    28,    17,
    18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
    28,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    -1,    -1,    55,    -1,    -1,    58,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    58,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    26,    27,    28,    -1,    29,    30,    31,    32,
    33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
    43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
    53,    54,    -1,    -1,    58,    58,    29,    30,    31,    32,
    33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
    43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
    53,    54,    -1,    -1,    -1,    58,    29,    30,    31,    32,
    33,    34,    35,    36,    37,    38,    39,    40,    41,    29,
    30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
    40,    41,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "/usr/lib/bison.simple"
/* This file comes from bison-1.28.  */

/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

#ifndef YYSTACK_USE_ALLOCA
#ifdef alloca
#define YYSTACK_USE_ALLOCA
#else /* alloca not defined */
#ifdef __GNUC__
#define YYSTACK_USE_ALLOCA
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi) || (defined (__sun) && defined (__i386))
#define YYSTACK_USE_ALLOCA
#include <alloca.h>
#else /* not sparc */
/* We think this test detects Watcom and Microsoft C.  */
/* This used to test MSDOS, but that is a bad idea
   since that symbol is in the user namespace.  */
#if (defined (_MSDOS) || defined (_MSDOS_)) && !defined (__TURBOC__)
#if 0 /* No need for malloc.h, which pollutes the namespace;
	 instead, just don't use alloca.  */
#include <malloc.h>
#endif
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
/* I don't know what this was needed for, but it pollutes the namespace.
   So I turned it off.   rms, 2 May 1997.  */
/* #include <malloc.h>  */
 #pragma alloca
#define YYSTACK_USE_ALLOCA
#else /* not MSDOS, or __TURBOC__, or _AIX */
#if 0
#ifdef __hpux /* haible@ilog.fr says this works for HPUX 9.05 and up,
		 and on HPUX 10.  Eventually we can turn this on.  */
#define YYSTACK_USE_ALLOCA
#define alloca __builtin_alloca
#endif /* __hpux */
#endif
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc */
#endif /* not GNU C */
#endif /* alloca not defined */
#endif /* YYSTACK_USE_ALLOCA not defined */

#ifdef YYSTACK_USE_ALLOCA
#define YYSTACK_ALLOC alloca
#else
#define YYSTACK_ALLOC malloc
#endif

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	goto yyacceptlab
#define YYABORT 	goto yyabortlab
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    { yychar = (token), yylval = (value);			\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { yyerror ("syntax error: cannot back up"); YYERROR; }	\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

#ifndef YYPURE
#define YYLEX		yylex()
#endif

#ifdef YYPURE
#ifdef YYLSP_NEEDED
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, &yylloc, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval, &yylloc)
#endif
#else /* not YYLSP_NEEDED */
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval)
#endif
#endif /* not YYLSP_NEEDED */
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYPURE

int	yychar;			/*  the lookahead symbol		*/
YYSTYPE	yylval;			/*  the semantic value of the		*/
				/*  lookahead symbol			*/

#ifdef YYLSP_NEEDED
YYLTYPE yylloc;			/*  location data for the lookahead	*/
				/*  symbol				*/
#endif

int yynerrs;			/*  number of parse errors so far       */
#endif  /* not YYPURE */

#if YYDEBUG != 0
int yydebug;			/*  nonzero means print parse trace	*/
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif

/*  YYINITDEPTH indicates the initial size of the parser's stacks	*/

#ifndef	YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

/* Define __yy_memcpy.  Note that the size argument
   should be passed with type unsigned int, because that is what the non-GCC
   definitions require.  With GCC, __builtin_memcpy takes an arg
   of type size_t, but it can handle unsigned int.  */

#if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#define __yy_memcpy(TO,FROM,COUNT)	__builtin_memcpy(TO,FROM,COUNT)
#else				/* not GNU C or C++ */
#ifndef __cplusplus

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (to, from, count)
     char *to;
     char *from;
     unsigned int count;
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#else /* __cplusplus */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (char *to, char *from, unsigned int count)
{
  register char *t = to;
  register char *f = from;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif

#line 217 "/usr/lib/bison.simple"

/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
#ifdef __cplusplus
#define YYPARSE_PARAM_ARG void *YYPARSE_PARAM
#define YYPARSE_PARAM_DECL
#else /* not __cplusplus */
#define YYPARSE_PARAM_ARG YYPARSE_PARAM
#define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
#endif /* not __cplusplus */
#else /* not YYPARSE_PARAM */
#define YYPARSE_PARAM_ARG
#define YYPARSE_PARAM_DECL
#endif /* not YYPARSE_PARAM */

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
#ifdef YYPARSE_PARAM
int yyparse (void *);
#else
int yyparse (void);
#endif
#endif

int
yyparse(YYPARSE_PARAM_ARG)
     YYPARSE_PARAM_DECL
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  int yyerrstatus;	/*  number of tokens to shift before error messages enabled */
  int yychar1 = 0;		/*  lookahead token as an internal (translated) token number */

  short	yyssa[YYINITDEPTH];	/*  the state stack			*/
  YYSTYPE yyvsa[YYINITDEPTH];	/*  the semantic value stack		*/

  short *yyss = yyssa;		/*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;	/*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YYLSP_NEEDED
  YYLTYPE yylsa[YYINITDEPTH];	/*  the location stack			*/
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;
  int yyfree_stacks = 0;

#ifdef YYPURE
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
#ifdef YYLSP_NEEDED
  YYLTYPE yylloc;
#endif
#endif

  YYSTYPE yyval;		/*  the variable used to return		*/
				/*  semantic values from the action	*/
				/*  routines				*/

  int yylen;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YYLSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YYLSP_NEEDED
      YYLTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
#ifdef YYLSP_NEEDED
      /* This used to be a conditional around just the two extra args,
	 but that might be undefined if yyoverflow is a macro.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yyls1, size * sizeof (*yylsp),
		 &yystacksize);
#else
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yystacksize);
#endif

      yyss = yyss1; yyvs = yyvs1;
#ifdef YYLSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  yyerror("parser stack overflow");
	  if (yyfree_stacks)
	    {
	      free (yyss);
	      free (yyvs);
#ifdef YYLSP_NEEDED
	      free (yyls);
#endif
	    }
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
#ifndef YYSTACK_USE_ALLOCA
      yyfree_stacks = 1;
#endif
      yyss = (short *) YYSTACK_ALLOC (yystacksize * sizeof (*yyssp));
      __yy_memcpy ((char *)yyss, (char *)yyss1,
		   size * (unsigned int) sizeof (*yyssp));
      yyvs = (YYSTYPE *) YYSTACK_ALLOC (yystacksize * sizeof (*yyvsp));
      __yy_memcpy ((char *)yyvs, (char *)yyvs1,
		   size * (unsigned int) sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) YYSTACK_ALLOC (yystacksize * sizeof (*yylsp));
      __yy_memcpy ((char *)yyls, (char *)yyls1,
		   size * (unsigned int) sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  goto yybackup;
 yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#if YYDEBUG != 0
      if (yydebug)
	{
	  fprintf (stderr, "Next token is %d (%s", yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
#endif
	  fprintf (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  if (yylen > 0)
    yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YYDEBUG != 0
  if (yydebug)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
	       yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
	fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


  switch (yyn) {

case 1:
#line 111 "gedcom_date.y"
{ make_date_value(DV_NO_MODIFIER,
						&yyvsp[0].date, &def_date, ""); ;
    break;}
case 6:
#line 117 "gedcom_date.y"
{ make_date_value(DV_PHRASE,
					        &def_date, &def_date, yyvsp[0].string); ;
    break;}
case 7:
#line 120 "gedcom_date.y"
{
		 /* If empty string: return empty string in 'phrase'
                    member as fallback */
		 /* Note: this can only happen in compatibility mode */
		 make_date_value(DV_PHRASE,
				 &def_date, &def_date, curr_line_value);
	       ;
    break;}
case 8:
#line 127 "gedcom_date.y"
{ /* On error: put entire string in 'phrase' member
			  as fallback */
	               gedcom_date_error(_("Putting date in 'phrase' member"));
	               make_date_value(DV_PHRASE,
				       &def_date, &def_date, curr_line_value);
		       YYABORT;
	             ;
    break;}
case 9:
#line 136 "gedcom_date.y"
{ copy_date(&yyval.date, &date_s);
                                         yyval.date.cal = CAL_GREGORIAN; ;
    break;}
case 10:
#line 138 "gedcom_date.y"
{ copy_date(&yyval.date, &date_s);
                                         yyval.date.cal = CAL_JULIAN;  ;
    break;}
case 11:
#line 140 "gedcom_date.y"
{ copy_date(&yyval.date, &date_s);
                                         yyval.date.cal = CAL_HEBREW;  ;
    break;}
case 12:
#line 142 "gedcom_date.y"
{ copy_date(&yyval.date, &date_s);
                                         yyval.date.cal = CAL_FRENCH_REV;  ;
    break;}
case 13:
#line 144 "gedcom_date.y"
{ copy_date(&yyval.date, &date_s);
                                         yyval.date.cal = CAL_GREGORIAN;  ;
    break;}
case 14:
#line 148 "gedcom_date.y"
{ make_date_value(DV_FROM,
						 &yyvsp[0].date, &def_date, ""); ;
    break;}
case 15:
#line 150 "gedcom_date.y"
{ make_date_value(DV_TO,
						 &yyvsp[0].date, &def_date, ""); ;
    break;}
case 16:
#line 152 "gedcom_date.y"
{ copy_date(&yyval.date, &yyvsp[0].date); ;
    break;}
case 17:
#line 154 "gedcom_date.y"
{ make_date_value(DV_FROM_TO, &yyvsp[-2].date, &yyvsp[0].date, ""); ;
    break;}
case 18:
#line 157 "gedcom_date.y"
{ make_date_value(DV_BEFORE,
						 &yyvsp[0].date, &def_date, ""); ;
    break;}
case 19:
#line 159 "gedcom_date.y"
{ make_date_value(DV_AFTER,
						 &yyvsp[0].date, &def_date, ""); ;
    break;}
case 20:
#line 161 "gedcom_date.y"
{ copy_date(&yyval.date, &yyvsp[0].date); ;
    break;}
case 21:
#line 163 "gedcom_date.y"
{ make_date_value(DV_BETWEEN, &yyvsp[-2].date, &yyvsp[0].date, ""); ;
    break;}
case 22:
#line 166 "gedcom_date.y"
{ make_date_value(DV_ABOUT,
						 &yyvsp[0].date, &def_date, ""); ;
    break;}
case 23:
#line 168 "gedcom_date.y"
{ make_date_value(DV_CALCULATED,
						 &yyvsp[0].date, &def_date, ""); ;
    break;}
case 24:
#line 170 "gedcom_date.y"
{ make_date_value(DV_ESTIMATED,
						 &yyvsp[0].date, &def_date, ""); ;
    break;}
case 25:
#line 175 "gedcom_date.y"
{ make_date_value(DV_INTERPRETED, &yyvsp[-1].date, &def_date, yyvsp[0].string); ;
    break;}
case 26:
#line 178 "gedcom_date.y"
{ yyval.string = yyvsp[-1].string; ;
    break;}
case 30:
#line 184 "gedcom_date.y"
{ error_missing_year(); YYERROR; ;
    break;}
case 31:
#line 185 "gedcom_date.y"
{ error_missing_year(); YYERROR; ;
    break;}
case 32:
#line 186 "gedcom_date.y"
{ error_missing_month(); YYERROR; ;
    break;}
case 36:
#line 192 "gedcom_date.y"
{ error_missing_year(); YYERROR; ;
    break;}
case 37:
#line 193 "gedcom_date.y"
{ error_missing_year(); YYERROR; ;
    break;}
case 38:
#line 194 "gedcom_date.y"
{ error_missing_month(); YYERROR; ;
    break;}
case 42:
#line 200 "gedcom_date.y"
{ error_missing_year(); YYERROR; ;
    break;}
case 43:
#line 201 "gedcom_date.y"
{ error_missing_year(); YYERROR; ;
    break;}
case 44:
#line 202 "gedcom_date.y"
{ error_missing_month(); YYERROR; ;
    break;}
case 48:
#line 208 "gedcom_date.y"
{ error_missing_year(); YYERROR; ;
    break;}
case 49:
#line 209 "gedcom_date.y"
{ error_missing_year(); YYERROR; ;
    break;}
case 50:
#line 210 "gedcom_date.y"
{ error_missing_month(); YYERROR; ;
    break;}
case 51:
#line 214 "gedcom_date.y"
{
		 int d = _get_day_num(yyvsp[0].string);
		 if (d != -1) {
		   strcpy(date_s.day_str, yyvsp[0].string);
		   date_s.day = d;
		 }
		 else YYERROR;
	       ;
    break;}
case 52:
#line 224 "gedcom_date.y"
{ strcpy(date_s.month_str, yyvsp[0].string);
                         date_s.month = 1; ;
    break;}
case 53:
#line 226 "gedcom_date.y"
{ strcpy(date_s.month_str, yyvsp[0].string);
                         date_s.month = 2; ;
    break;}
case 54:
#line 228 "gedcom_date.y"
{ strcpy(date_s.month_str, yyvsp[0].string);
                         date_s.month = 3; ;
    break;}
case 55:
#line 230 "gedcom_date.y"
{ strcpy(date_s.month_str, yyvsp[0].string);
                         date_s.month = 4; ;
    break;}
case 56:
#line 232 "gedcom_date.y"
{ strcpy(date_s.month_str, yyvsp[0].string);
                         date_s.month = 5; ;
    break;}
case 57:
#line 234 "gedcom_date.y"
{ strcpy(date_s.month_str, yyvsp[0].string);
                         date_s.month = 6; ;
    break;}
case 58:
#line 236 "gedcom_date.y"
{ strcpy(date_s.month_str, yyvsp[0].string);
                         date_s.month = 7; ;
    break;}
case 59:
#line 238 "gedcom_date.y"
{ strcpy(date_s.month_str, yyvsp[0].string);
                         date_s.month = 8; ;
    break;}
case 60:
#line 240 "gedcom_date.y"
{ strcpy(date_s.month_str, yyvsp[0].string);
                         date_s.month = 9; ;
    break;}
case 61:
#line 242 "gedcom_date.y"
{ strcpy(date_s.month_str, yyvsp[0].string);
                         date_s.month = 10; ;
    break;}
case 62:
#line 244 "gedcom_date.y"
{ strcpy(date_s.month_str, yyvsp[0].string);
                         date_s.month = 11; ;
    break;}
case 63:
#line 246 "gedcom_date.y"
{ strcpy(date_s.month_str, yyvsp[0].string);
                         date_s.month = 12; ;
    break;}
case 64:
#line 250 "gedcom_date.y"
{ strcpy(date_s.month_str, yyvsp[0].string);
                         date_s.month = 1; ;
    break;}
case 65:
#line 252 "gedcom_date.y"
{ strcpy(date_s.month_str, yyvsp[0].string);
                         date_s.month = 2; ;
    break;}
case 66:
#line 254 "gedcom_date.y"
{ strcpy(date_s.month_str, yyvsp[0].string);
                         date_s.month = 3; ;
    break;}
case 67:
#line 256 "gedcom_date.y"
{ strcpy(date_s.month_str, yyvsp[0].string);
                         date_s.month = 4; ;
    break;}
case 68:
#line 258 "gedcom_date.y"
{ strcpy(date_s.month_str, yyvsp[0].string);
                         date_s.month = 5; ;
    break;}
case 69:
#line 260 "gedcom_date.y"
{ strcpy(date_s.month_str, yyvsp[0].string);
                         date_s.month = 6; ;
    break;}
case 70:
#line 262 "gedcom_date.y"
{ strcpy(date_s.month_str, yyvsp[0].string);
                         date_s.month = 7; ;
    break;}
case 71:
#line 264 "gedcom_date.y"
{ strcpy(date_s.month_str, yyvsp[0].string);
                         date_s.month = 8; ;
    break;}
case 72:
#line 266 "gedcom_date.y"
{ strcpy(date_s.month_str, yyvsp[0].string);
                         date_s.month = 9; ;
    break;}
case 73:
#line 268 "gedcom_date.y"
{ strcpy(date_s.month_str, yyvsp[0].string);
                         date_s.month = 10; ;
    break;}
case 74:
#line 270 "gedcom_date.y"
{ strcpy(date_s.month_str, yyvsp[0].string);
                         date_s.month = 11; ;
    break;}
case 75:
#line 272 "gedcom_date.y"
{ strcpy(date_s.month_str, yyvsp[0].string);
                         date_s.month = 12; ;
    break;}
case 76:
#line 274 "gedcom_date.y"
{ strcpy(date_s.month_str, yyvsp[0].string);
                         date_s.month = 13; ;
    break;}
case 77:
#line 278 "gedcom_date.y"
{ strcpy(date_s.month_str, yyvsp[0].string);
                         date_s.month = 1; ;
    break;}
case 78:
#line 280 "gedcom_date.y"
{ strcpy(date_s.month_str, yyvsp[0].string);
                         date_s.month = 2; ;
    break;}
case 79:
#line 282 "gedcom_date.y"
{ strcpy(date_s.month_str, yyvsp[0].string);
                         date_s.month = 3; ;
    break;}
case 80:
#line 284 "gedcom_date.y"
{ strcpy(date_s.month_str, yyvsp[0].string);
                         date_s.month = 4; ;
    break;}
case 81:
#line 286 "gedcom_date.y"
{ strcpy(date_s.month_str, yyvsp[0].string);
                         date_s.month = 5; ;
    break;}
case 82:
#line 288 "gedcom_date.y"
{ strcpy(date_s.month_str, yyvsp[0].string);
                         date_s.month = 6; ;
    break;}
case 83:
#line 290 "gedcom_date.y"
{ strcpy(date_s.month_str, yyvsp[0].string);
                         date_s.month = 7; ;
    break;}
case 84:
#line 292 "gedcom_date.y"
{ strcpy(date_s.month_str, yyvsp[0].string);
                         date_s.month = 8; ;
    break;}
case 85:
#line 294 "gedcom_date.y"
{ strcpy(date_s.month_str, yyvsp[0].string);
                         date_s.month = 9; ;
    break;}
case 86:
#line 296 "gedcom_date.y"
{ strcpy(date_s.month_str, yyvsp[0].string);
                         date_s.month = 10; ;
    break;}
case 87:
#line 298 "gedcom_date.y"
{ strcpy(date_s.month_str, yyvsp[0].string);
                         date_s.month = 11; ;
    break;}
case 88:
#line 300 "gedcom_date.y"
{ strcpy(date_s.month_str, yyvsp[0].string);
                         date_s.month = 12; ;
    break;}
case 89:
#line 302 "gedcom_date.y"
{ strcpy(date_s.month_str, yyvsp[0].string);
                         date_s.month = 13; ;
    break;}
case 90:
#line 307 "gedcom_date.y"
{ int y = _get_year_num(YEAR_SINGLE, yyvsp[0].string, NULL);
		   if (y != -1) {
		     strcpy(date_s.year_str, yyvsp[0].string);
		     date_s.year = y;
		     date_s.year_type = YEAR_SINGLE;
		   }
		   else YYERROR;
		 ;
    break;}
case 91:
#line 318 "gedcom_date.y"
{ int y = _get_year_num(YEAR_SINGLE, yyvsp[0].string, NULL);
		   if (y != -1) {
		     strcpy(date_s.year_str, yyvsp[0].string);
		     date_s.year = y;
		     date_s.year_type = YEAR_SINGLE;
		   }
		   else YYERROR;
		 ;
    break;}
case 92:
#line 327 "gedcom_date.y"
{ int y = _get_year_num(YEAR_DOUBLE, yyvsp[-2].string, yyvsp[0].string);
		   if (y != -1) {
		     sprintf(date_s.year_str, "%d/%02d", y-1, y%100);
		     date_s.year = y;
		     date_s.year_type = YEAR_DOUBLE;
		   }
		   else YYERROR;
		 ;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
#line 543 "/usr/lib/bison.simple"

  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  int size = 0;
	  char *msg;
	  int x, count;

	  count = 0;
	  /* Start X at -yyn if nec to avoid negative indexes in yycheck.  */
	  for (x = (yyn < 0 ? -yyn : 0);
	       x < (sizeof(yytname) / sizeof(char *)); x++)
	    if (yycheck[x + yyn] == x)
	      size += strlen(yytname[x]) + 15, count++;
	  msg = (char *) malloc(size + 15);
	  if (msg != 0)
	    {
	      strcpy(msg, "parse error");

	      if (count < 5)
		{
		  count = 0;
		  for (x = (yyn < 0 ? -yyn : 0);
		       x < (sizeof(yytname) / sizeof(char *)); x++)
		    if (yycheck[x + yyn] == x)
		      {
			strcat(msg, count == 0 ? ", expecting `" : " or `");
			strcat(msg, yytname[x]);
			strcat(msg, "'");
			count++;
		      }
		}
	      yyerror(msg);
	      free(msg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror("parse error");
    }

  goto yyerrlab1;
yyerrlab1:   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;

 yyacceptlab:
  /* YYACCEPT comes here.  */
  if (yyfree_stacks)
    {
      free (yyss);
      free (yyvs);
#ifdef YYLSP_NEEDED
      free (yyls);
#endif
    }
  return 0;

 yyabortlab:
  /* YYABORT comes here.  */
  if (yyfree_stacks)
    {
      free (yyss);
      free (yyvs);
#ifdef YYLSP_NEEDED
      free (yyls);
#endif
    }
  return 1;
}
#line 337 "gedcom_date.y"


void error_missing_year() {
  gedcom_date_error(_("Year is missing: '%s'"),
		    curr_line_value);
}

void error_missing_month() {
  gedcom_date_error(_("Month is missing: '%s'"),
		    curr_line_value);
}

int _get_day_num(const char* input)
{
  if (strlen(input) <= MAX_DAY_LEN)
    return atoi(input);
  else {
    gedcom_date_error(_("Too many characters in day '%s'"), input);
    return -1;
  }
}

int get_day_num(const char* input)
{
  int token = get_date_token(input);
  if (token == NUMBER)
    return _get_day_num(input);
  else {
    gedcom_date_error(_("Not a valid day number: '%s'"), input);
    return -1;
  }
}

int begin_month[] =
{ /* CAL_GREGORIAN */   MON_JAN,
  /* CAL_JULIAN */      MON_JAN,
  /* CAL_HEBREW */      MON_TSH,
  /* CAL_FRENCH_REV */  MON_VEND
};

int end_month[] =
{ /* CAL_GREGORIAN */   MON_DEC,
  /* CAL_JULIAN */      MON_DEC,
  /* CAL_HEBREW */      MON_ELL,
  /* CAL_FRENCH_REV */  MON_COMP
};

int get_month_num(Calendar_type cal, const char* input)
{
  int token = get_date_token(input);
  if (token >= begin_month[cal] && token <= end_month[cal])
    return token - begin_month[cal] + 1;
  else {
    gedcom_date_error(_("Not a valid month for the given calendar: '%s'"),
		      input);
    return -1;
  }
}

int _get_year_num(Year_type ytype, const char* input1, const char* input2)
{
  if (ytype == YEAR_SINGLE) {
    if (strlen(input1) <= MAX_YEAR_LEN) {
      return atoi(input1);
    }
    else {
      gedcom_date_error(_("Too many characters in year '%s'"), input1);
      return -1;
    }
  }
  else {
    if (strlen(input2) != 2) {
      if (compat_mode(C_DOUBLE_DATES_4) && strlen(input2) == 4) {
	input2 += 2;
      }
      else {
	gedcom_date_error(_("Year after slash should be two digits: '%s/%s'"),
			  input1, input2);
	return -1;
      }
    }
    if (strlen(input1) <= MAX_YEAR_LEN - 3) {
      int year1 = atoi(input1) + 1;
      int year2 = atoi(input2);
      if (year1 % 100 != year2) {
	gedcom_date_error(_("Year after slash should be following year: '%s/%s'"),
			  input1, input2);
	return -1;
      }
      else 
	return year1;
    }
    else {
      gedcom_date_error(_("Too many characters in year '%s/%s'"),
			input1, input2);
      return -1;
    }
  }
}

int get_year_num(const char* input, Year_type* ytype)
{
  char *year1, *year2 = NULL;
  int numtok = get_year_tokens(input, &year1, &year2);
  if (numtok) {
    *ytype = (numtok == 1 ? YEAR_SINGLE : YEAR_DOUBLE);
    return _get_year_num (*ytype, year1, year2);
  }
  else {
    gedcom_date_error(_("Not a valid year: '%s'"), input); 
    return -1;
  }
}
