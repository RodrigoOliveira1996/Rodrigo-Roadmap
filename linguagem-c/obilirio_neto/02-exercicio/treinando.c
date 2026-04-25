//Programa que lẽ Idade, Sexo, Salario e imprimi na tela.
//Data: 15/04
//Auto: Rodrigo

#include <stdio.h>

int main(){
  //DECLARANDO VARIAVEIS
  char sexo;
  int idade;
  float salario;

  //SOLICITAR DADOS E ATRIBUIR VALORES APONTANDO PRA MEMÓRIA

  printf("Qual seu sexo?\n");
  scanf("%c", &sexo);
  printf("Quantos anos voceh tem?\n");
  scanf("%d", &idade);
  printf("Quanto voceh ganha?\n");
  scanf("%f", &salario);
  
  //IMPRIMI NA TELA
  printf("voce tem %d anos, eh do sexo %c, E ganha %.2f reais por mes.\n", idade, sexo, salario);

return 0;
}
