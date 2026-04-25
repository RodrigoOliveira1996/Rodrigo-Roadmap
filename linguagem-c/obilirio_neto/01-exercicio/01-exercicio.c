/*Programa que lê*/
#include <stdio.h>

int main(){
	//declaracao das variaveis
	char nome[]= "Rodrigo"; 
	char sexo = 'M'; 
	float salario; int idade;
	
	//atribuindo os valores
	salario = 7000.00;
	idade = 30;

	// imprimir os valores
	printf("Seus dados sao: \n");
	printf("Nome: %s \n", nome);
	printf("Sexo: %c \n", sexo);
	printf("Voce tem %d anos \n", idade);
	printf("Seu salario: %.2f reais. \n ", salario);
return 0;
}
