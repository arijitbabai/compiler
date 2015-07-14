/*Lex program to calculate vowel and consonanat*/

%{
	#include <stdio.h>
	int vcount = 0;
	int ccount = 0;
%}

%%
[\t\n ]+
[aeiouAEIOU] {vcount++;}
[a-zA-Z] {ccount++;}
%%

main()
{
	printf("Enter the text ( To end press CTRL+D):\n");
	yylex();
	printf("\nVowel = %d\nConsonanats = %d\n",vcount,ccount);
} 

int yywrap()
{
	return 1;
}