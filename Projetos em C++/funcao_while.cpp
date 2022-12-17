#include<stdio.h>

int main(){
	
	int i = 0;
	char resp[2];
	
	do{
		i++;
		printf("%i \n", i);
		printf("deseja prosseguir? s/n: ");
		scanf("%s", &resp);
		
		printf("\n\n");
	}
	while(resp[0] != 'n');
}