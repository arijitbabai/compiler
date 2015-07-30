%{
	#include <stdio.h>
	int count;

%}

digit [0-9]

%%
^\+?{digit}+$ 	{pos_int++; if(atoi(yytext)>42) count++;}
^-{digit}+$ 	{neg_int++;}
^\+?{digit}*\.{digit}+$	{pos_float++; if(atof(yytext)>42) count++;}
^-{digit}*\.{digit}+$		{neg_float++;}
%%

main()
{
	printf("Enter the no. one by one\n");
	yylex();
	printf("%d\n",count);
} 

int yywrap()
{
	return 1;
}