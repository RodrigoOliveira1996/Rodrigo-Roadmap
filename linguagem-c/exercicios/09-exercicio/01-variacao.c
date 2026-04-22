// Programa que lẽ salario bruto de uma pessoa,e calcula salario liquido baseado na  taxa de imposto de renda e taxa de inss.
// em seguida apresenta um menu de opções que o usuario pode escolher o que quer que seja exibido: salario liquido, desconto do imposto de renda, e descontodo inss.
// data: 21.05
// Autor: Rodrigo

#include <stdio.h>
#include <string.h>

#define TAM_NOME 100

int main(void){
  //  DECLARAR VARIAVEIS.

  float salario_bruto, imp_renda, tx_inss, Sal_liquido;
  char nome[TAM_NOME];
  char menu;

  // SOLICITANDO DADOS
  

  printf ("Seja bem vindo. Qual o seu nome? ");
  fgets(nome, TAM_NOME, stdin);
  nome[strspn(nome, "\n")]= '\0';


  printf("Digite seu sálario bruto: ");
  scanf("%f", &salario_bruto);

  printf("Qual a taxa do imposto de renda? ");
  scanf("%f", &imp_renda);

  printf("Qual a taxa do INSS? ");
  scanf("%f", &tx_inss);

  //PROCESSANDO DADOS E ATRIBUINDO VALORES.
  

  tx_inss = salario_bruto * tx_inss / 100;
  imp_renda = salario_bruto * imp_renda / 100;
  Sal_liquido = salario_bruto - tx_inss - imp_renda;

  // APRESENTANDO MENU

  printf("Escolha sua opção digitando o número correspondente: \n");
  printf("\tA - Taxa de INSS.\n");
  printf("\tB - Taxa de Imposto de Renda.\n");
  printf("\tC - Total do salario liquido.\n");

  //CAPTURAR A ESCOLHA DO USUARIO

  scanf(" %c", &menu);

  // COMPARAR E DECIDIR

  switch(menu){

    case 'a':
    case 'A':
      printf("A - Taxa INSS: %.2f\n", tx_inss);
      break;
    
    case 'b':
    case 'B':
      printf("B - Taxa do Imposto de Renda: %.2f\n", imp_renda);
      break;

    case 'c':
    case 'C':
      printf("3 - Total do Salário Líquido: %.2f\n", Sal_liquido);
      break;

    default:
      printf("Opção inválida\n");
   

  
  
  }

return 0;
}
