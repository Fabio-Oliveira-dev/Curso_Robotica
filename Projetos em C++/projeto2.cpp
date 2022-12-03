#include <stdio.h>

//estrutura condicional com if, else
int main(){
	int val1;
	// Adquire um valor do usuario e atribui a variavel val1
	printf("Digite um valor: \n");
	scanf("%i", &val1);
	//Compara o valor digitado pelo usuario a 10
	if(val1 < 10){
		//caso seja verdade executa o if
		printf("%i é menor que 10", val1);
	}
	else{
		//caso seja falso executa o else
		printf("%i é maior que 10", val1);
	}
}
