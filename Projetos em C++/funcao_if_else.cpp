#include<stdio.h>

int main(){
	
	int val1;
	
	//adquire um valor e atribui a variavel val1
	printf("Escreva um valor: \n");
	scanf("%i", &val1);
	
	//compara o valor da variavel a 10
	if(val1 == 10){
		//caso seja verdade, executa aqui
			printf("%i e IGUAL a 10", val1);
	}
	
	else{
	printf("%i e DIFERENTE de 10", val1);
	
	}
	
	if(val1 < 10){
			printf("%i e MENOR que 10", val1);
	}
	else{
		//caso seja falso, executa aqui
		printf("%i e MAIOR que 10", val1);
	}
}