#include <stdio.h>

int main (void) {


  //DECLARAR VETOR  . por enquanto tem lixo apenas
  int vet[5];
  int i;
  float m = 0;

  for (i=0; i < 5; i++){
    printf("Digite um numero inteiro: \n");
    scanf("%d", &vet[i]);

  
  }



  printf("Dados inseridos:\n");
  for (i=0; i < 5; i++){
    printf("%d ", vet[i]);
  }



return 0;
}
