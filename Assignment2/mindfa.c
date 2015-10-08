#include <stdio.h>

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"

void main(void){
	printf("Enter the no. of states : ");
	int ns;
	scanf("%d",&ns);
	int a[ns],t[ns][ns],i,j,ni;

	for(i = 0 ; i < ns ; i++){
		printf("Enter the state%d :",i+1);
		scanf("%d",&a[i]);
	}

	int initial;
	printf("Enter the initial state : ");
	scanf("%d",&initial);

	int nf;
	printf("Enter the no. of final states : ");
	scanf("%d",&nf);
	int final[nf];
	printf("Enter the states -> ");
	for(i = 0 ; i < nf ; i++){
		scanf("%d",&final[i]);
	}

	printf("Enter the no. of inputs :");
	scanf("%d",&ni);
	char input[ni];
	printf("Enter the inputs: ");
	char dummy;
	scanf("%c",&dummy);
	for(i = 0 ; i < ni ; i++){
		scanf("%c",&input[i]);
	}

	for(i = 0 ; i < ns ; i++){
		for(j = 0 ; j < ni ; j++){
			printf("Enter the transition for (%d,%c) -> ",a[i],input[j]);
			scanf("%d",&t[i][j]);
		}
	}

	// printf("\nStates\t");
	// for(i = 0 ; i < ni ; i++){
	// 	printf("%c\t",input[i]);
	// }
	// printf("\n");
	// for(i = 0 ; i < ns ;i++){
	// 		printf("%d\t",a[i]);
	// 	for(j = 0 ; j < ni ; j++){
	// 		printf("%d\t",t[i][j]);
	// 	}
	// 	printf("\n");
	// }
	// printf("Initial state : %d\n",initial);
	// printf("Final states : ");
	// for(i = 0 ; i < nf ; i++){
	// 	printf("%d\t",final[i]);
	// }
	printf("\n");

		printf("\n%sStates\t",KRED);
	for(i = 0 ; i < ni ; i++){
		printf("%c\t",input[i]);
	}
	printf("\n");
	for(i = 0 ; i < ns ;i++){
			if(a[i] == initial){
				printf("%s%d\t",KYEL,a[i]);
			}
			else
				printf("%d\t",a[i]);
		for(j = 0 ; j < ni ; j++){
			printf("%d\t",t[i][j]);
		}
		printf("\n");
	}

	return;
}