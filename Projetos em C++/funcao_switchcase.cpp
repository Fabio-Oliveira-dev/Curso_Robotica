#include<stdio.h>

int main(){
	
	int val1, val2;
//	int flag;
	
//	do{
//	flag = 0;
	
	cmc:
	//adquire um valor e armazena ele em val1
	printf("Entre com um valor entre 1 e 3: \n");
	scanf("%i", &val1);
	
	//realiza a comparação da val1 aos casos definidos
	switch(val1){
		case 1:
			// se val1 = 1
			val2 = val1 + 1;
			printf("%i", val2);
			break;
			
		case 2:
			//se val1 = 2
			val2 = val1*2;
			printf("%i", val2);			
			break;
			
		case 3:
			//se val1 = 3
			val2 = val1/3;
			printf("%i", val2);			
			break;
			
		default :
			//se val1 nao corresponde a nenhum dos casos
			printf("Responda direito! \n");
			//flag = 1;
			goto cmc;
			
		
		}
//	}
//	while(flag);
		
}