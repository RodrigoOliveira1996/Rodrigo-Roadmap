//Operações artmeticas em C
//Criador: Rodrigo oliveira de souza
//data: 1/04

#include <stdio.h>

int main(void){
	//declarar as variavies.
	int num1, num2, soma;

	//solicitar e ler os dois de uma vez
	printf("Forneca os dois numeros.\n");
	scanf("%d %d", &num1, &num2);

	//processar
	soma = num1 + num2;

	//imprimindo o resultado na tela.
	printf("Soma: %d\n", soma);

	//processando e imprimindo em um comando apenas.
	printf("Subtracao: %d\n", num1-num2);
	printf("Multiplicacao: %d\n", num1*num2);

	// numa divisão com virgula, um dos numeros tem que ser float. aqui neste caso fizemos um cast
	printf("Divisão de num1/num2: %f\n", num1/ (float) num2);
	printf("Divisao de num2/num1: %f\n", (float) num2 / num1);
	printf("Parte inteira de num1/num2: %d\n", num1/num2);
	printf("Parte inteira de num2/num1: %d\n", num2/num1);

	printf("Resto da divisão num1/num2: %d\n", num1%num2);
	printf("Resto da divisão num2/num2: %d \n", num2%num2);

	printf("Fim do o programa\n");


return 0;
}
