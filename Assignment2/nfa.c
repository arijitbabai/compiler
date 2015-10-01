#include <stdio.h>

void main(void){
	int a[10],t[10][10],i,j,ns,ni;
	char in[10];
	printf("Enter the no. of states : ");
	scanf("%d",&ns);

	for(i = 0 ; i < ns ; i++){
		printf("Enter the state%d :",i+1);
		scanf("%d",&a[i]);
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

	for(i = 0 ; i < ns ; i++){
		for(j = 0 ; j < ni ; j++){
			printf("Enter the transition for (%d,%c) -> ",a[i],in[j]);
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
	printf("Initial state : %d\n",initial);
	printf("Final states : ");
	for(i = 0 ; i < nf ; i++){
		printf("%d\t",final[i]);
	}
	printf("\n");

	char str[20];
	printf("Enter the string \n");
	scanf("%s",str);
	char *p;
	p = str;
	int l;
	int state = initial;
	while(*p){
		for(i = 0 ; i < ni ; i++){
			if(*p == in[i]){
				l = i;
			}
		}
		state = t[state][l];
		p++;
	}
	for(i = 0 ; i < nf ; i++){
		if(state == final[i]){
			printf("The string is accepted\n");
			return ;
		}
	}
	printf("The string is not accepted\n");
	return;
}