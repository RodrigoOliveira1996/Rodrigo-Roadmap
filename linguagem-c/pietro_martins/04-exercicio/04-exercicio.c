//atribuindo valor, declarando constante
//pedindo idade, altura, nome


#include <stdio.h>
#define texto "Entrada e saída de dados."

int main(){
  
  printf("%s\n", texto);

  int idade = 0;
  float altura = 0.0;
  char nome[50] = "";

  printf("Informe sua idade: \n");
  scanf("%d", &idade);

  printf("Informe sua altura: \n");
  scanf("%f", &altura);

  printf("Informe seu nome: \n");
  scanf("%s", nome);

  printf("Dados informados; \n");
  printf("\t Idade: %d\n", idade);
  printf("\t Altura: %.2f\n", altura);
  printf("\t Nome: %s\n", nome);

return 0;
}
