#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20121003

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

#define YYPREFIX "yy"

#define YYPURE 0

#line 1 "calculatrice.yacc.y"

#include <stdio.h>
#include <stdlib.h>

int numLigne = 0;
float ans = 0;

/* Fonction Lex&Yacc*/
extern void yyerror(const char*erreurMsg);
#line 11 "calculatrice.yacc.y"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union
{
  int entier;
  float reel;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 42 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define ENTIER 257
#define REEL 258
#define MOINS 259
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    0,    0,    1,    1,    1,    1,    1,    1,    1,
    1,    2,    2,    2,    2,    2,    2,    2,    2,    2,
    2,    2,    2,    2,    2,    2,    2,    2,    2,
};
static const short yylen[] = {                            2,
    2,    2,    0,    1,    2,    3,    3,    3,    3,    2,
    2,    1,    2,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    2,    2,    2,    2,
};
static const short yydefred[] = {                         0,
    4,   12,    0,    0,    0,    0,    0,    0,   10,    1,
    0,    0,    0,    0,    0,    0,   26,    2,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
};
static const short yydgoto[] = {                          4,
   15,   16,
};
static const short yysindex[] = {                       -17,
    0,    0,  -17,    0,  -42,  -36,  -24, -223,    0,    0,
  -17,  -17,  -17,  -17,  -30,  -21,    0,    0,  -17,  -17,
  -17,  -17,  -30,  -21,  -24,  -15,  -24, -223, -223, -223,
 -223, -223,  -24,  -15,  -24, -223, -223, -223, -223, -223,
};
static const short yyrindex[] = {                         4,
    0,    0,    0,    0,    0,    0,  129,   68,    0,    0,
    0,    0,    0,    0,  -34,  -28,    0,    0,    0,    0,
    0,    0,   -7,   -5,  135,  141,  129,   68,   74,   80,
   89,   95,  144,  148,  129,   68,  101,  110,  116,  122,
};
static const short yygindex[] = {                         0,
   30,   69,
};
#define YYTABLESIZE 243
static const short yytable[] = {                         13,
   11,   10,   12,    3,   14,   21,   19,   18,   20,   11,
   22,   13,   11,    0,   12,   28,   14,   13,    9,    0,
   21,   19,   14,   20,   17,   22,   21,    3,    0,    5,
    9,   22,    7,    1,    2,   23,   29,   23,   27,   17,
   25,   27,   29,   31,    0,   23,    0,    0,   33,   35,
   37,   39,    0,   23,    0,   23,    0,   23,    0,   23,
    0,   23,    0,   23,    0,   23,    0,   23,    6,   23,
    0,    8,    0,    0,   24,    0,   24,    0,    0,   26,
   28,   30,   32,    0,   24,    0,    0,   34,   36,   38,
   40,    0,   24,    0,   24,    0,   24,    0,   24,    0,
   24,    0,   24,    0,   24,    0,   24,    0,   24,   13,
   13,   13,   13,    0,   13,    8,    8,    8,    8,    0,
    8,   21,   21,   21,   21,    0,   21,    0,   13,    0,
    9,    9,    9,    9,    8,    9,   24,   24,   24,   24,
   21,   24,   22,   22,   22,   22,    0,   22,    0,    9,
    0,   20,   20,   20,   20,   24,   20,   25,   25,   25,
   25,   22,   25,   23,   23,   23,   23,    0,   23,    0,
   20,    5,    5,    5,    0,    0,   25,    6,    6,    6,
    0,    0,   23,   15,   15,   15,   16,   16,   16,    5,
   14,   14,   14,    0,    0,    6,    0,    0,    0,    0,
    0,   15,    0,    0,   16,    0,    0,    0,   14,    0,
    0,    0,    0,    0,    1,    2,    0,    0,    0,    0,
    1,    2,    0,    0,    0,    0,    1,    2,    0,    0,
    0,    0,    1,    2,    0,    1,    2,    0,    0,    1,
    2,    1,    2,
};
static const short yycheck[] = {                         42,
   43,   44,   45,    0,   47,   42,   43,   44,   45,   44,
   47,   42,   43,   -1,   45,   44,   47,   42,   61,   -1,
   42,   43,   47,   45,   61,   47,   42,   45,   -1,    0,
   61,   47,    3,  257,  258,    6,   44,    8,   44,   61,
   11,   12,   13,   14,   -1,   16,   -1,   -1,   19,   20,
   21,   22,   -1,   24,   -1,   26,   -1,   28,   -1,   30,
   -1,   32,   -1,   34,   -1,   36,   -1,   38,    0,   40,
   -1,    3,   -1,   -1,    6,   -1,    8,   -1,   -1,   11,
   12,   13,   14,   -1,   16,   -1,   -1,   19,   20,   21,
   22,   -1,   24,   -1,   26,   -1,   28,   -1,   30,   -1,
   32,   -1,   34,   -1,   36,   -1,   38,   -1,   40,   42,
   43,   44,   45,   -1,   47,   42,   43,   44,   45,   -1,
   47,   42,   43,   44,   45,   -1,   47,   -1,   61,   -1,
   42,   43,   44,   45,   61,   47,   42,   43,   44,   45,
   61,   47,   42,   43,   44,   45,   -1,   47,   -1,   61,
   -1,   42,   43,   44,   45,   61,   47,   42,   43,   44,
   45,   61,   47,   42,   43,   44,   45,   -1,   47,   -1,
   61,   43,   44,   45,   -1,   -1,   61,   43,   44,   45,
   -1,   -1,   61,   43,   44,   45,   43,   44,   45,   61,
   43,   44,   45,   -1,   -1,   61,   -1,   -1,   -1,   -1,
   -1,   61,   -1,   -1,   61,   -1,   -1,   -1,   61,   -1,
   -1,   -1,   -1,   -1,  257,  258,   -1,   -1,   -1,   -1,
  257,  258,   -1,   -1,   -1,   -1,  257,  258,   -1,   -1,
   -1,   -1,  257,  258,   -1,  257,  258,   -1,   -1,  257,
  258,  257,  258,
};
#define YYFINAL 4
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 259
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,"'*'","'+'","','","'-'",0,"'/'",0,0,0,0,0,0,0,0,0,0,0,0,0,"'='",
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"ENTIER",
"REEL","MOINS",
};
static const char *yyrule[] = {
"$accept : programme",
"programme : expression ','",
"programme : expression2 ','",
"programme :",
"expression : ENTIER",
"expression : '-' expression",
"expression : expression '+' expression",
"expression : expression '-' expression",
"expression : expression '*' expression",
"expression : expression '/' expression",
"expression : expression '='",
"expression : expression expression",
"expression2 : REEL",
"expression2 : '-' expression2",
"expression2 : expression2 '+' expression2",
"expression2 : expression '+' expression2",
"expression2 : expression2 '+' expression",
"expression2 : expression2 '-' expression2",
"expression2 : expression '-' expression2",
"expression2 : expression2 '-' expression",
"expression2 : expression2 '*' expression2",
"expression2 : expression '*' expression2",
"expression2 : expression2 '*' expression",
"expression2 : expression2 '/' expression2",
"expression2 : expression '/' expression2",
"expression2 : expression2 '/' expression",
"expression2 : expression2 '='",
"expression2 : expression2 expression2",
"expression2 : expression expression2",
"expression2 : expression2 expression",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 500
#define YYMAXDEPTH  500
#endif
#endif

#define YYINITSTACKSIZE 500

typedef struct {
    unsigned stacksize;
    short    *s_base;
    short    *s_mark;
    short    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 153 "calculatrice.yacc.y"


int main(void) {
  numLigne = 0;
  yyparse();
  return 0;
}
#line 261 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = data->s_mark - data->s_base;
    newss = (short *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack)) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
#line 30 "calculatrice.yacc.y"
	{
           exit(EXIT_SUCCESS);
         }
break;
case 2:
#line 33 "calculatrice.yacc.y"
	{
          exit(EXIT_SUCCESS);
         }
break;
case 5:
#line 40 "calculatrice.yacc.y"
	{ 
           yyval.entier = - yystack.l_mark[0].entier; 
         }
break;
case 6:
#line 43 "calculatrice.yacc.y"
	{ 
           yyval.entier = yystack.l_mark[-2].entier + yystack.l_mark[0].entier; 
         }
break;
case 7:
#line 46 "calculatrice.yacc.y"
	{ 
           yyval.entier = yystack.l_mark[-2].entier - yystack.l_mark[0].entier; 
         }
break;
case 8:
#line 49 "calculatrice.yacc.y"
	{ 
           yyval.entier = yystack.l_mark[-2].entier *yystack.l_mark[0].entier; 
         }
break;
case 9:
#line 52 "calculatrice.yacc.y"
	{
           if(yystack.l_mark[0].entier!=0)
           {
            yyval.entier = yystack.l_mark[-2].entier/yystack.l_mark[0].entier;
           }
           else
           {
            printf("Erreur ! Division par 0\n");
            yyval.entier = 0;
           }
         }
break;
case 10:
#line 64 "calculatrice.yacc.y"
	{
          printf("=%d\n",yystack.l_mark[-1].entier);
          ans=yystack.l_mark[-1].entier;
         }
break;
case 11:
#line 68 "calculatrice.yacc.y"
	{

         }
break;
case 13:
#line 74 "calculatrice.yacc.y"
	{ 
           yyval.reel = - yystack.l_mark[0].reel; 
         }
break;
case 14:
#line 77 "calculatrice.yacc.y"
	{ 
           yyval.reel = yystack.l_mark[-2].reel + yystack.l_mark[0].reel; 
         }
break;
case 15:
#line 80 "calculatrice.yacc.y"
	{ 
           yyval.reel = yystack.l_mark[-2].entier + yystack.l_mark[0].reel; 
         }
break;
case 16:
#line 83 "calculatrice.yacc.y"
	{ 
           yyval.reel = yystack.l_mark[-2].reel + yystack.l_mark[0].entier; 
         }
break;
case 17:
#line 86 "calculatrice.yacc.y"
	{ 
           yyval.reel = yystack.l_mark[-2].reel - yystack.l_mark[0].reel; 
         }
break;
case 18:
#line 89 "calculatrice.yacc.y"
	{ 
           yyval.reel = yystack.l_mark[-2].entier - yystack.l_mark[0].reel; 
         }
break;
case 19:
#line 92 "calculatrice.yacc.y"
	{ 
           yyval.reel = yystack.l_mark[-2].reel - yystack.l_mark[0].entier; 
         }
break;
case 20:
#line 95 "calculatrice.yacc.y"
	{ 
           yyval.reel = yystack.l_mark[-2].reel *yystack.l_mark[0].reel; 
         }
break;
case 21:
#line 98 "calculatrice.yacc.y"
	{ 
           yyval.reel = yystack.l_mark[-2].entier *yystack.l_mark[0].reel; 
         }
break;
case 22:
#line 101 "calculatrice.yacc.y"
	{ 
           yyval.reel = yystack.l_mark[-2].reel *yystack.l_mark[0].entier; 
         }
break;
case 23:
#line 104 "calculatrice.yacc.y"
	{
           if(yystack.l_mark[0].reel!=0)
           {
            yyval.reel = yystack.l_mark[-2].reel/yystack.l_mark[0].reel;
           }
           else
           {
            printf("Erreur ! Division par 0\n");
            yyval.reel = 0;
           }
         }
break;
case 24:
#line 115 "calculatrice.yacc.y"
	{
           if(yystack.l_mark[0].reel!=0)
           {
            yyval.reel = yystack.l_mark[-2].entier/yystack.l_mark[0].reel;
           }
           else
           {
            printf("Erreur ! Division par 0\n");
            yyval.reel = 0;
           }
         }
break;
case 25:
#line 126 "calculatrice.yacc.y"
	{
           if(yystack.l_mark[0].entier!=0)
           {
            yyval.reel = yystack.l_mark[-2].reel/yystack.l_mark[0].entier;
           }
           else
           {
            printf("Erreur ! Division par 0\n");
            yyval.reel = 0;
           }
         }
break;
case 26:
#line 138 "calculatrice.yacc.y"
	{
          printf("=%f\n",yystack.l_mark[-1].reel);
          ans= yystack.l_mark[-1].reel;
         }
break;
case 27:
#line 142 "calculatrice.yacc.y"
	{

         }
break;
case 28:
#line 145 "calculatrice.yacc.y"
	{

         }
break;
case 29:
#line 148 "calculatrice.yacc.y"
	{

         }
break;
#line 657 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (short) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
