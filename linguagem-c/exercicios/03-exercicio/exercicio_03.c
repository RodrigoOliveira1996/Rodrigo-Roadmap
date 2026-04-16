// este programa le um nome, endereco, e o cpf de uma pessoa e armazena  em strings.
// criador: rodrigo; data: 31.03

#include <stdio.h>
#include <string.h>
// definir as contantes
#define TAM_NOME 50
#define TAM_END 100
#define TAM_CPF 15

int main(void){
	// declarar as variaveis
	char nome[TAM_NOME];
	char endereco[TAM_END];
	char cpf[TAM_CPF];

	//solicitar e le os dados do usuario

	printf("Qual seu nome? \n");
	fgets(nome, TAM_NOME, stdin);
	nome [strlen(nome)-1] = '\0';

	printf("informe seu endereco: \n");
	gets(endereco); //esta obsoleto

	printf("informe seu cpf.\n");
	fgets(cpf, TAM_CPF, stdin);
	//imprimir na tela
	printf("Seu nome eh: %s\nSeu endereco: %s\nSeu cpf eh: %s\n", nome, endereco, cpf);

	return 0;
}
