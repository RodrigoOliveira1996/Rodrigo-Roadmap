#include <stdio.h>

int main(){
  
  int menu = 0; // menu. atribui o valor pra garantir que vai entrar no while.
  int a, b; // dados para processar

  // solicitar dados

  while(menu !=3){


  printf("Digite uma opção: \n\n");
  printf("\t1 - somar.\n");
  printf("\t2 - multiplicar.\n");
  printf("\t3 - sair do programa.\n\n");
  printf("O que deseja fazer? ");
  scanf("%d", &menu);

  


  switch(menu){
  
    case 1:
      printf("Digite um número: ");
      scanf("%d", &a);
      printf("Digite outro número: ");
      scanf("%d", &b);
      printf("soma: %d.\n", a + b);
      break;

    case 2:
      printf("Digite um número: ");
      scanf("%d", &a);
      printf("Digite outro número: ");
      scanf("%d", &b);
      printf("multiplicação: %d.\n", a * b);
      break;

    case 3:
      printf("Programa encerrado!\n");
      break;

    default:
      printf("Opção inválida. \n");

  
  }

  }

return 0;
}
