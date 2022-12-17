#include<stdio.h>

int main(){
	int rep;
	
	//recolhe o dado do numero de vezes para repeticao
	printf("Escreve o numero de repeticoes desejadas \n\n");
	scanf("%i", &rep);
	
	//cria uma variavel de contar e a compara com a variavel anterior
	for(int i = 0; i < rep; i++){
		printf("Irei repetir essa frase %i vezes. ", rep);
		printf("Ja escrevi %i vezes\n\n", i+1);
	//pos executar, soma 1 a variavel de contagem e volta ao inicio
    }
}	
//chega aqui pos a funcao retornar como falso a condicao