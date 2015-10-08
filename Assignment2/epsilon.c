#include <stdio.h>
#include <stdlib.h>

int main(void){
	int nstate;
	printf("Enter the no. of states\n");
	scanf("%d",&nstate);
	char *buff;
	char *state[nstate];
	int i;
	for(i = 0 ; i < nstate ; i++){
		buff = (char *)malloc(50);
		scanf("%s",buff);
		state[i] = buff;
	}
	// printf("Enter the no. of input\n");
	// int nchars;

	char *t[nstate][1];
	for(i = 0 ; i < nstate ; i++){
		buff = (char *)malloc(50);
		scanf("%s",buff);
		t[i][0] = buff;
	}
	for(i =0 ; i < nstate ; i++){
		printf("%s\n",t[i][0]);;
	}
	return 0;
}