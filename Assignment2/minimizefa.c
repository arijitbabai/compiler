#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
	int nstates;
	printf("Enter the no. of states\n");
	scanf("%d",&nstates)
	char *states[nstates];
	char *buff;
	printf("Enter the states :\n");
	for(i = 0 ; i < nstates ; i++){
		buff = (char *)malloc(50);
		scanf("%s",buff);
		str[i] = buff;
	}
	int ninput;
	printf("Enter the no. of inputs\n");
	scanf("%d",&ninput);
	char input[ninput];
	i = 0;
	printf("Enter the inputs \n");
	while(i < ninput){
		input[i] = getchar();
		if(input[i] != ' ' && input[i] != '\n' && input[i] != '\t')
			i++;
	}
	// for(i =0 ; i < nstates ; i++){
	// 	printf("%s\n",str[i]);
	// }
	return 0;
}