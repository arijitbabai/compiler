%{
	#include <stdio.h>
	int c = 0;
	int n = 0;
%}

%%
(ab)+ {c++;}
^abb.*ccd$ {n++;c++;}
%%

main()
{
	printf("Enter the text ( To end press CTRL+D):\n");
	yylex();
	printf("String with one or more occurrence of ab = %d\n",c)	;
	printf("String beginning with abb and ending with ccd = %d\n",n);
}		

int yywrap()
{
	return 1;
}