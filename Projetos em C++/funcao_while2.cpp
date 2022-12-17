#include<stdio.h>

int main(){
	
	int i = 0;
	char resp[2];
	
	while(resp[0] != 'n'){
		
		i++;
		printf("%i ", i);
		printf("deseja prosseguir? s/n: ");
		scanf("%s", &resp);
		
		//printf("\n\n");
	}
}