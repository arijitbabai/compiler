%{
	#include <stdio.h>
	int count = 0;
%}

%%
(ab)+ {count++;}
%%

main()
{
	printf("Enter the text ( To end press CTRL+D):\n");
	yylex();
	printf("%d\n",count);
}

int yywrap()
{
	return 1;
}