#include <stdio.h>

typdef struct {
	int n;
	int a[10];
}transition;

void main(void){
	int state[10],t[10][10],i,j,ns,ni;
	char in[10];
	printf("Enter the no. of states : ");
	scanf("%d",&ns);

	for(i = 0 ; i < ns ; i++){
		printf("Enter the state%d :",i+1);
		scanf("%d",&state[i]);
	}

	int initial,final[5],nf;
	printf("Enter the initial state : ");
	scanf("%d",&initial);

	printf("Enter the no. of final states : ");
	scanf("%d",&nf);
	printf("Enter the states -> ");
	for(i = 0 ; i < nf ; i++){
		scanf("%d",&final[i]);
	}

	printf("Enter the no. of inputs :");
	scanf("%d",&ni);
	printf("Enter the inputs: ");
	char dummy;
	scanf("%c",&dummy);
	for(i = 0 ; i < ni ; i++){
		scanf("%c",&in[i]);
	}
	int nt,k;
	transition 
	for(i = 0 ; i < ns ; i++){
		for(j = 0 ; j < ni ; j++){
			printf("Enter the no. of transition for (%d,%c) -> ",&nt);
			for(k = 0 ; k < nt ; k++){
				scanf("%d",&t[i][j]);
			}
		}
	}

	printf("\nStates\t");
	for(i = 0 ; i < ni ; i++){
		printf("%c\t",in[i]);
	}
	printf("\n");
	for(i = 0 ; i < ns ;i++){
			printf("%d\t",state[i]);
		for(j = 0 ; j < ni ; j++){
			printf("%d\t",t[i][j]);
		}
		printf("\n");
	}
	printf("Initial state : %d\n",initial);
	printf("Final states : ");
	for(i = 0 ; i < nf ; i++){
		printf("%d\t",final[i]);
	}
	printf("\n");

	return;
}