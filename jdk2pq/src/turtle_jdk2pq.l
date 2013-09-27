
%{
#include "symtab.h"
#include "token.h"
%}

DIGIT [0-9]
ID [a-z]+ 
%%

\/\/.*          ;
[[:space:]]     ;

GO              return GO;
TURN            return TURN; 
VAR             return VAR;
JUMP            return JUMP;
FOR             return FOR;
STEP            return STEP;
TO              return TO;
DO              return DO;
BEGIN           return COPEN;
END             return CCLOSE;
IF              return IF;
THEN			return THEN;
ELSE            return ELSE;
WHILE           return WHILE;
FALSE			return FALSE;
TRUE			return TRUE;
RETURN          return RETURN;

sin             return SIN;
cos             return COS;
sqrt            return SQRT;

;               return SEMICOLON;
==				return EQ;
\!=				return NOTEQ;
\+              return PLUS;
-               return MINUS;
\*              return TIMES;
\/              return DIV;
\(              return OPEN;
\)              return CLOSE;
=               return ASSIGN;
\<=				return LTE;
\>=				return GTE;
\<				return LT;
\>				return GT;
\{				return OPENB;
\}				return CLOSEB;

{ID}         	{ 
					yylval.n = lookup(yytext); 
                	if (yylval.n==NULL)
		    			yylval.n = insert(yytext);
                  	return ID;
				}
    
{DIGIT}+"."{DIGIT}*  yylval.d = atof(yytext);  return FLOAT;
{DIGIT}+         yylval.i = atoi(yytext);  return NUMBER;

.               fprintf(stderr,"Unexpected character %c (%2X)\n",yytext[0],yytext[0]);

%%
