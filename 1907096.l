%{
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include "1907096.tab.h"
int yyparse(void);

%}

alpha [a-zA-Z]
digit [0-9]
alphanum [a-zA-Z0-9]
header "import"[ ]*+[^\n]+[.h][ ]*



%%

{digit}+ { yylval = atoi(yytext); return NUM; }
{alpha} { yylval = *yytext - 'a'; return VAR; }

"SWITCH" { return SWITCH; }
"VALUE" { return VALUE; }
"CASE" { return CASE; }
"IF" { return IF; }
"ELSE" { return ELSE; }
"BREAK" { return BREAK; }
"DEFAULT" { return DEFAULT; }
"START" { return START; }
"END" { return END; }
"FACTORIAL" { return FACTORIAL; }
"ODD_EVEN" { return ODD_EVEN; }
"FOR" { return FOR; }
"WHILE" { return WHILE; }
"SIN" { return SIN; }
"COS" { return COS; }
"TAN" { return TAN; }
"COSEC" { return COSEC; }
"SEC" { return SEC; }
"COT" { return COT; }
"LOG" { return LOG; }
"LOG10" { return LOG10; }
"BIGMOD" { return BIGMOD; }
"PLUS" { return PLUS; }
"MINUS" { return MINUS; }
"MUL" { return MUL; }
"INC" { return INC; }
"DEC" { return DEC; }
"GT" { return GT; }
"LT" { return LT; }
"GTE" { return GTE; }
"LTE" { return LTE; }
"EQ" { return EQ; }
"DIV" { return DIV; }
"MOD" { return MOD; }
"POW" { return POW; }
"BitNOT" { return BitNOT; }
"BitXOR" { return BitXOR; }
"BitOR" { return BitOR; }
"BitAND" { return BitAND; }
"ASSIGN" { return ASSIGN; }
"EOL" { return EOL; }
"DEFINE" { return DEFINE; }
"ARRAY" { return ARRAY; }
"CLASS" { return CLASS; }
"READ"      { return READ; }
"PRINT"     { return PRINT; }

{header} { return HEADER; }
[,():] { yylval = yytext[0]; return *yytext; }
"INTEGER" { return INT; }
"CHAR" { return CHAR; }
"FLOAT" { return FLOAT; }
"MAIN" { return MAIN; }
[ ]* {}
[\n]* {}
[\t]* {}

%%

int yywrap() {
    return 1;
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    yyparse();

    return 0;
}
