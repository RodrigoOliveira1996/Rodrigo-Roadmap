#include <stdio.h>
#define TAM 30

int main(){
  int i;
  char palavras[TAM];

  printf("Digite seu nome: ");

  fgets(palavras, TAM, stdin); // arquivo lido do teclado.
  
  printf("%s\n", palavras);

  for (i = 0; i < 30; i++){
    printf("%c\n", palavras[i]);
  }

 for (i = 0; i < 30; i++){
    printf("%d\n", palavras[i]);
  }


return 0;
}
