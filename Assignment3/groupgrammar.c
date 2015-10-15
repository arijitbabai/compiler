#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int n;
	char *rule[10];
}productions;

void main(void){
	int t,nt,i;
	printf("Enter the no. of terminals\n");
	scanf("%d",&t);
	char *terminal[t],*buff;
	for(i = 0 ; i < t ; i++){
		buff = (char *)malloc(50);
		scanf("%s",buff);
		terminal[i] = buff;
	}
	printf("Enter the no. of Nonterminals\n");
	scanf("%d",& nt);
	char *nonterminal[nt];
	for(i = 0 ; i < nt ; i++){
		buff = (char *)malloc(50);
		scanf("%s",buff);
		nonterminal[i] = buff;
	}

	int j;
	productions p[nt];
	for(i = 0 ; i < nt ; i++){
		printf("No. of productions for %s\n",nonterminal[i]);
		scanf("%d",&p[i].n);
		for(j = 0 ; j < p[i].n ; j++){
			buff = (char *)malloc(50);
			scanf("%s",buff);
			p[i].rule[j] = buff;
		}
	}
	char start[20];
	printf("Enter the start state\n");
	scanf("%s",start);

	//print the gra

	for(i = 0 ; i < nt ; i++){
		printf("%s --> ",nonterminal[i]);
		for(j = 0 ; j < p[i].n ; j++){
			printf("%s |",p[i].rule[j]);
		}
		printf("\b\n");
	}
}