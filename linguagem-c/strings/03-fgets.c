#include <stdio.h>
#define TAM 10

int main(){

  char palavras[TAM];

  printf("Digite seu nome: ");

  fgets(palavras, TAM, stdin); // arquivo lido do teclado.
  
  printf("%s\n", palavras);



return 0;
}
