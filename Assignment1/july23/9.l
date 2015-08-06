%{
	#include <stdio.h>
	int identifier = 0;
	int integer = 0;
	int n = 0;
%}

%%
^[A-Za-z]+[_]*([A-Za-z]|[0-9])*$ {identifier++;}
%%

main()
{
	printf("Enter the text ( To end press CTRL+D):\n");
	yylex();
	printf("%d\n",identifier);
}

int yywrap()
{
	return 1;
}