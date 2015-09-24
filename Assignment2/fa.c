#include <stdio.h>

void main(void){
	int a[10],t[10][10];
	char in[10];
	int i,j,ns,ni;
	printf("Enter the no. of states\n");
	scanf("%d",&ns);
	for(i = 0 ; i < ns ; i++){
		printf("Enter the state%d :",i+1);
		scanf("%d",&a[i]);
	}
	printf("Enter the no. of inputs :");
	scanf("%d",&ni);
	printf("Enter the inputs: ");
	char dummy;
	scanf("%c",&dummy);
	for(i = 0 ; i < ni ; i++){
		scanf("%c",&in[i]);
	}
	for(i = 0 ; i < ns ; i++){
		for(j = 0 ; j < ni ; j++){
			printf("Enter the transition for (%d,%c) \n",a[i],in[j]);
			scanf("%d",&t[i][j]);
		}
	}
	printf("\nStates\t");
	for(i = 0 ; i < ni ; i++){
		printf("%c\t",in[i]);
	}
	printf("\n");
	for(i = 0 ; i < ns ;i++){
			printf("%d\t",a[i]);
		for(j = 0 ; j < ni ; j++){
			printf("%d\t",t[i][j]);
		}
		printf("\n");
	}
}