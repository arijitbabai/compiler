%{
	#include <stdio.h>
	int n = 0;
%}

%%
^.*\/\/.*$ { n++; }
^.*\/\*.*\*\/$ { n++; }
(.*) {fprintf(yyout,"%s",yytext);}
%%

int main(int argc, char const *argv[])
{
	yyin = fopen(argv[1], "r");
	yyout = fopen("nocom.c","w");
	yylex();
	fclose(yyin);
	fclose(yyout);
	printf("No. of comments in the file : %d\n",n);
	return 0;
}
int yywrap()
{
	return 1;
}

