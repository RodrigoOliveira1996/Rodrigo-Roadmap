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

	//! - significa not
	if (!eh_impar){
	printf("eh par. \n");
	}

	else{
	printf("eh impar. \n");
	}

return 0;
}
