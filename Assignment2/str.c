#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int n = 4, i ;
	char *str[5];
	char *buff;

	for(i = 0 ; i < n ; i++){
		buff = (char *)malloc(50);
		scanf("%s",buff);
		str[i] = buff;
	}
	for(i =0 ; i < n ; i++){
		printf("%s\n",str[i]);
	}
	return 0;
}