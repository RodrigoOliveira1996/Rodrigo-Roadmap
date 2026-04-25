//um programa que le tres valores e imprime que tipo de triangulo eh, ou se nao eh.
//data 5.04 autor rodrigo oliveira

#include <stdio.h>

int main(void){
	//declarar variaves
	int a, b, c;

	//solicitar dados  e atribuir valores
	printf("Digite o lados: \n");
	scanf("%d %d %d", &a, &b, &c);

	//comparar, decidir, imprimir
	if ((a < b + c) && (b < a + c) && (c < a + b) && (a>0) && (b>0) && (c>0)){

		if ((a == b) && (b == c)){
			printf("Eh um triangulo Equilatero.\n");
		}

		else if ((a !=b) && (b != c)){
			printf("Eh um triangulo Escaleno.\n");
		}

		else
			printf("Eh um triangulo Isoceles.\n");


	}



	else
		printf("nao eh um triangulo.\n");


return 0;
}
