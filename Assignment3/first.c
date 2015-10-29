#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
typedef struct{
	int n;
	char *rule[10];
}productions;

char* firstpos(int nt,char* str,productions* p);
char *nonterminal[20];

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
	scanf("%d",&nt);
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
	
	for(i = 0 ; i < nt ; i++){	
		printf("FIRST of %s >> %s\n",nonterminal[i],firstpos(nt, nonterminal[i], p) );
	}
}

char* firstpos(int nt, char* str, productions* p){
	char *first,*ptr;
	int k,i,j;
	first = (char *)malloc(50);
	strcpy(first,"");
	for(i = 0 ; i < nt ; i++){
		if(strcmp(nonterminal[i],str) == 0)
			break;
	}
	for( j = 0 ; j < p[i].n ;j++){

	printf("Hello\n");	
	printf("%s\n",first );
		//if terminal production
		ptr = p[i].rule[j];
		if(!isupper(*ptr)){	
			strncat(first,p[i].rule[j],1);
			continue;
		}

		//if epsilon production
		if(strcmp(p[i].rule[j],"e") == 0){
			strcat(first,"e");
		}

		//if non terminal production
		else{
			for(k = 0 ; k < nt; k++){
				if(strcmp((const char*)*ptr,nonterminal[k]) == 0){
					break;
				}
				strcat(first,firstpos(nt, nonterminal[k],p));

			}

		}
	}
	return first;	
}
