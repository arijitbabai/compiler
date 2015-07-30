%{
	#include <stdio.h>
	int nspace = 0;
	int nchar = 0;
	int nline = 0;
	int nword = 0;
%}

%%
[ ] {nspace++;}
[\t] {nspace+=4;}
[\n] {nline++;nchar++;}
[.] {nchar++;}
%%

int main(int argc, char const *argv[])
{
	yyin = fopen(argv[1], "r");
	yylex();
	fclose(yyin);
	printf("\nNo. of space = %d\n",nspace);
	printf("No. of line = %d\n",nline);
	printf("Np. of word = %d\n",nword);
	printf("No. of character = %d\n",nchar);
	return 0;
}

int yywrap()
{
	return 1;
}