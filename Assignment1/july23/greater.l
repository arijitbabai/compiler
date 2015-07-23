%{
	#include <stdio.h>
	int vcount = 0;
%}
zero [0]
four [4]
threetonine [3-9]
fivetonine [5-9]
zerotonine [0-9]
onetonine [1-9]
%%
{zero}({four}{threetonine}|{fivetonine}{zerotonine}|{onetonine}{zerotonine}{zerotonine}+) {vcount++;}
%%

main()
{
	printf("Enter the no. one by one\n");
	yylex();
	printf("%d\n",vcount);

}

int yywrap()
{
	return 1;
}
