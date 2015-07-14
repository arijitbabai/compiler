/*Lex program to calculate vowel and consonanat*/

%{
	#include <stdio.h>
	int pos_int = 0;
	int neg_int = 0;
	int pos_float = 0;
	int neg_float = 0;

%}

digit [0-9]

%%
\+?{digit}+ 	{pos_int++;}
-{digit}+ 	{neg_int++;}
\+?{digit}*\.{digit}+	{pos_float++;}
-{digit}*\.{digit}+		{neg_float++;}
%%

main()
{
	printf("Enter the no. one by one\n");
	yylex();
	printf("\nPositive integer = %d\nNegative integer = %d\nPositive fraction = %d\nNegative fraction = %d\n",pos_int,neg_int,pos_float,neg_float);
} 

int yywrap()
{
	return 1;
}