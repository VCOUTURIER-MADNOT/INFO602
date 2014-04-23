%{
#include <stdio.h>
#include <stdlib.h>

int numLigne = 0;
float ans = 0;

// Fonction Lex&Yacc
extern void yyerror(const char*erreurMsg);
%}
%union
{
  int entier;
  float reel;
}

%token <entier> ENTIER
%token <reel> REEL
%type <entier> expression
%type <reel> expression2

%nonassoc '='
%nonassoc ','
%left '+' '-'
%left '*' '/' // Plus la règle est basse, plus elle est prioritaire
%nonassoc MOINS

%%

programme: expression ',' {
           exit(EXIT_SUCCESS);
         }
         | expression2 ',' {
          exit(EXIT_SUCCESS);
         }
         |
         ;

expression: ENTIER
          | '-' expression { 
           $$ = - $2; 
         }
         | expression '+' expression { 
           $$ = $1 + $3; 
         } 
         | expression '-' expression { 
           $$ = $1 - $3; 
         }
         | expression '*' expression { 
           $$ = $1 *$3; 
         }
         | expression '/' expression {
           if($3!=0)
           {
            $$ = $1/$3;
           }
           else
           {
            printf("Erreur ! Division par 0\n");
            $$ = 0;
           }
         }
         | expression '=' %prec MOINS
         {
          printf("=%d\n",$1);
          ans=$1;
         }
         | expression expression {

         }
         ;

expression2: REEL
          | '-' expression2 %prec MOINS{ 
           $$ = - $2; 
         }
         | expression2 '+' expression2 { 
           $$ = $1 + $3; 
         }
         | expression '+' expression2 { 
           $$ = $1 + $3; 
         }
         | expression2 '+' expression { 
           $$ = $1 + $3; 
         }
         | expression2 '-' expression2 { 
           $$ = $1 - $3; 
         }
         | expression '-' expression2 { 
           $$ = $1 - $3; 
         }
         | expression2 '-' expression { 
           $$ = $1 - $3; 
         }
         | expression2 '*' expression2 { 
           $$ = $1 *$3; 
         }
         | expression '*' expression2 { 
           $$ = $1 *$3; 
         }
         | expression2 '*' expression { 
           $$ = $1 *$3; 
         }
         | expression2 '/' expression2 {
           if($3!=0)
           {
            $$ = $1/$3;
           }
           else
           {
            printf("Erreur ! Division par 0\n");
            $$ = 0;
           }
         }
         | expression '/' expression2 {
           if($3!=0)
           {
            $$ = $1/$3;
           }
           else
           {
            printf("Erreur ! Division par 0\n");
            $$ = 0;
           }
         }
         | expression2 '/' expression {
           if($3!=0)
           {
            $$ = $1/$3;
           }
           else
           {
            printf("Erreur ! Division par 0\n");
            $$ = 0;
           }
         }
         | expression2 '='
         {
          printf("=%f\n",$1);
          ans= $1;
         }
         | expression2 expression2 {

         }
         | expression expression2 {

         }
         | expression2 expression {

         }
         ;

%%

int main(void) {
  numLigne = 0;
  yyparse();
  return 0;
}
