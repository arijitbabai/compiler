%{
	#include <stdio.h>

%}

%%
.*but.*|.*BUT.* {printf("It is a compound statement");}
.*and.*|.*AND.* {printf("It is a compound statement");}
.*or.*|.*OR.* {printf("It is a compound statement");}
.* {printf("It is a simple statement\n");}
%%

int main(int argc, char const *argv[])
{
	yylex();
	return 0;
}
int yywrap()
{
	return 1;
}