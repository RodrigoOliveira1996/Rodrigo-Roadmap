// um programa que lê idade, sexo e salario e imprimi na tela.
// criador - Rodrigo oliveira
// data: 31/03

#include <stdio.h>

int main(void){
	// declarar variaveis
	int idade; char sexo; float salario;

	// atribuir valores com os dados solicitados
	printf("Quantos anos voce tem? \n");
	scanf("%d", &idade);

	printf("Qual seu sexo? M|F \n");
	scanf(" %c", &sexo);
 
	printf("Qual seu salario mensal? \n");
	scanf("%f", &salario);

	//imprimir os dados na tela
	printf("voce tem %d anos, eh do sexo %c, e seu salario mensal eh no valor de %.2f reais\n", idade, sexo, salario);
return 0;
}
