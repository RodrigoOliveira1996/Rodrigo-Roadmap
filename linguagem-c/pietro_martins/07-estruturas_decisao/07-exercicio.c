#include <stdio.h>

int main(void){

  //decalrar variavel
  float nota;

  // atribuindo valor
  printf("Insira a nota: \n");
  scanf("%f", &nota);

  //decisao
  if (nota>=7){
    printf("Aprovado!\n");
}
  else {
  printf("Reprovado!\n");
  }


return 0;
}
