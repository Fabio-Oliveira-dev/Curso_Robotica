#include<stdio.h>


//Instru��o switch para ap��es multiplas, usada para tomar a��es diferentes
int main(){
	int val1, val2;
	//adquire um valor e armazena na variavel val1
	printf("Digite um valor entre 1 e 3: \n");
	scanf("%i", &val1);
	
	//realiza a compara��o da val1 aos outros casos
	switch(val1){
		case 1:
			// se val1 = 1
			val2 = val1 + 1;
			printf("%i", val2);
			break;
			
		case 2:
			// se val1 = 2
			val2 = val1 * 2;
			printf("%i", val2);
			break;
			
		case 3:
			// se val1 = 3
			val2 = val1 / 3;
			printf("%i", val2);
			break;
			
			default:
				// se val1 n�o corresponde a nenhum dos casos
				printf("Responda direito! \n");
				printf("Digite novamente o valor: ");
				scanf("%i", &val1);
	}
	
}
