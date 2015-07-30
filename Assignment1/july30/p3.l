%{
	#include <stdio.h>
	int print = 0;
	int scan = 0;
%}

%%
printf {print++;}
scanf {scan++;}
%%

int main(int argc, char const *argv[])
{
	yyin = fopen(argv[1], "r");
	yylex();
	fclose(yyin);
	printf("Print = %d\nScan = %d",print,scan);
	return 0;
}

int yywrap()
{
	return 1;
}