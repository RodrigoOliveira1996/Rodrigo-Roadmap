// programa que verifica se um numero é par ou impar
//data 04.04 autor: rodrigo oliveira.

#include <stdio.h>

int main (void){
	//inicio.

	//declarar variavel
	int x;

	// solicitar dado e atribuir valor
	printf("Digite um numero: ");
	scanf("%d", &x);


	//processar dados e tomar dercisao (Se, entao, senao).
	if (x%2==0){
	printf("Este numero eh par.\n");
}
	else{
	printf("este numero eh impar.\n");
}
	//fim

return 0;
}
