#include <stdio.h>

int main (void) {


  //DECLARAR VETOR  . por enquanto tem lixo apenas
  int vet[5] = {10, 20, 30, 40, 50}; // esse formato depois da declaração nao funciona.
  int i;
  float s;

  for (i=0; i < 5; i++){
  
    s = s + vet[i];
  }
  printf("Resultado: %.2f.\n", s/5);



return 0;
}
