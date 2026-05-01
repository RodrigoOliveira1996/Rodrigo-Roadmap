#include <stdio.h>

int main (void) {


  //DECLARAR VETOR  . por enquanto tem lixo apenas
  int vet[5];

  float m;

  vet[0] = 50;
  vet[1] = 40;
  vet[2] = 30;
  vet[3] = 20;
  vet[4] = 10;

  m = (vet[0] + vet[1] +vet [2] + vet[3] + vet[4]) / 5;

  printf("Resultado: %.2f.\n", m);



return 0;
}
