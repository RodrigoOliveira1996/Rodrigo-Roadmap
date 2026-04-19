// verifica se eh par cojm  variavel booleana
// data 4.4 autor rodrigo oliveira
#include <stdio.h>
#include <stdbool.h>
int main(void){
	//inicio

	// declarar variaveis
	int x; bool eh_impar;//0 significa falso;diferente de zero eh verdadeiro;

	//solicitar dados
	printf("Digite um  numero: ");
	scanf("%d", &x);

	//processar dados , decidir, imprimir na tela
	eh_impar=x%2;

	if (eh_impar==true){
	printf("eh impar. \n");
	}

	else{
	printf("eh par");
	}

return 0;
}
