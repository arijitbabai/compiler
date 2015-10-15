#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int lstate;
	char *states[10];
}transtition;

int main(void){
	int nstate;
	printf("Enter the no. of states\n");
	scanf("%d",&nstate);
	char *buff;
	char *state[nstate];
	int i,j;
	for(i = 0 ; i < nstate ; i++){
		buff = (char *)malloc(50);
		scanf("%s",buff);
		state[i] = buff;
	}
	// printf("Enter the no. of input\n");
	// int nchars;

	transtition t[nstate];
	for(i = 0 ; i < nstate ; i++){
		printf("Enter the no. of epsilon transtition for %s : ", state[i]);
		scanf("%d",&t[i].lstate);
		for(j =0 ; j < t[i].lstate ;j++){			
		buff = (char *)malloc(50);
		scanf("%s",buff);
		t[i].states[j] = buff;
		}
	}
	for(i =0 ; i < nstate ; i++){
		for(j = 0 ; j < t[i].lstate ; j++)
			printf("%s,",t[i].states[i]);
	}
	return 0;
}