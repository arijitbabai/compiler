%{
	#include <stdio.h>
	int print = 0;
	int scan = 0;
%}

%%
(.*)printf(.*) {print++; fprintf(yyout, "write");}
(.*)scanf(.*) {scan++; fprintf(yyout, "read");}
(.*) {fprintf(yyout, "%s",yytext);}

%%

int main(int argc, char const *argv[])
{
	yyin = fopen(argv[1], "r");
	yyout = fopen("out.c","w");
	yylex();
	fclose(yyin);
	fclose(yyout);
	printf("Print = %d\nScan = %d\n",print,scan);
	return 0;
}

int yywrap()
{
	return 1;
}