//programa que mostra algumas funcionalidades da biblioteca math.h
// criador: rodrigo. data: 02/04
//inf.importante. para compilar voce precisa adicionar -lm ao final do comando.

#include <stdio.h>
#include <math.h>

int main(void){
	//declarar variaveis
	int inteiro; float real; char nome[100];

	//solicitar entradas do usuario, em seguida, ler os dados

	printf("Antes de iniciarmos, qual seu nome?\n");
	fgets(nome, 100, stdin);

	printf("Entre com um numero inteiro: \n");
	scanf("%d", &inteiro);

	printf("Entre com um numero real: \n");
	scanf("%f", &real);

	//  imprimindo dados de entrada na tela

	printf("Estes são seus dados de entrada: \n\n");
	printf("numero inteiro: %d\nnumero real: %.2f\nseu nome: %s", inteiro, real, nome);

	//processando os dados e imprimindo na tela.

	printf("Arredondando um numero real para baixo: %.2f\n\n", floor(real));
	printf("Arredondndo um numero real para cima: %.2f\n\n", ceil(real)); //casting, mudanca local
	printf("Raiz quadrada de um  numero inteiro: %.2f\n\n", sqrt(inteiro));
	printf("Calculando o expoente com o numero inteiro elevado a 2: %.2f\n\n", pow(inteiro, 2)); // no processo devolve float

	//fim do programa e recado final
	printf("O programa terminou. Aqui esta uma lista com outras funcionalidades da biblioteca math.h: \n\n");
	printf("Calcular:\nseno do angulo - sin(angulo)\ncosseno do angulo - cos(angulo)\n");
	printf("tangente do angulo - tan(angulo)\n");
	printf("Calcular: \nlogaritmo nautral - log(nmumero)\nlogaritmo base 10\n\nFim do programa");
return 0;
}
