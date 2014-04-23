%{
#include <stdlib.h>

#include"y.tab.h"

extern int numLigne;
extern YYSTYPE yylval;
extern float ans;

void yyerror(const char *erreurMsg);
%}

%option noyywrap

%%

[0-9]+\.[0-9]+ {
	yylval.reel = atof(yytext);
	return REEL;
}

[0-9]+ {
    yylval.entier = atoi(yytext);
    return ENTIER;
  }

"Ans"|"ans" {
	yylval.reel = ans;
	printf("Ans");
	return REEL;
}

[-+=,\*/] { return *yytext; } 

[ \t] ;

\n { ++numLigne; }

. { yyerror("Caractere non valide"); }

%%

void yyerror(const char *erreurMsg) {
  fprintf(stderr, "\n Erreur '%s' a la ligne %d sur '%s'.", erreurMsg, numLigne, yytext);
  exit(-1);
}
