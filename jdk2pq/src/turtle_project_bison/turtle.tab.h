/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

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
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     GO = 258,
     TURN = 259,
     VAR = 260,
     JUMP = 261,
     FOR = 262,
     STEP = 263,
     TO = 264,
     DO = 265,
     COPEN = 266,
     CCLOSE = 267,
     SIN = 268,
     COS = 269,
     SQRT = 270,
     FLOAT = 271,
     ID = 272,
     NUMBER = 273,
     SEMICOLON = 274,
     PLUS = 275,
     MINUS = 276,
     TIMES = 277,
     DIV = 278,
     OPEN = 279,
     CLOSE = 280,
     ASSIGN = 281,
     IF = 282,
     ELSE = 283,
     THEN = 284,
     TRUE = 285,
     FALSE = 286,
     RETURN = 287,
     LT = 288,
     GT = 289,
     EQ = 290,
     OPENB = 291,
     CLOSEB = 292,
     NOTEQ = 293,
     LTE = 294,
     GTE = 295
   };
#endif
/* Tokens.  */
#define GO 258
#define TURN 259
#define VAR 260
#define JUMP 261
#define FOR 262
#define STEP 263
#define TO 264
#define DO 265
#define COPEN 266
#define CCLOSE 267
#define SIN 268
#define COS 269
#define SQRT 270
#define FLOAT 271
#define ID 272
#define NUMBER 273
#define SEMICOLON 274
#define PLUS 275
#define MINUS 276
#define TIMES 277
#define DIV 278
#define OPEN 279
#define CLOSE 280
#define ASSIGN 281
#define IF 282
#define ELSE 283
#define THEN 284
#define TRUE 285
#define FALSE 286
#define RETURN 287
#define LT 288
#define GT 289
#define EQ 290
#define OPENB 291
#define CLOSEB 292
#define NOTEQ 293
#define LTE 294
#define GTE 295




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 8 "turtle.y"
{ int i; node *n; double d;}
/* Line 1529 of yacc.c.  */
#line 131 "turtle.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

