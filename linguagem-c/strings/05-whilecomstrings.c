#include <stdio.h>
#define TAM 30

int main(){
  int i = 0;
  char palavras[TAM];

  printf("Digite seu nome: ");

  fgets(palavras, TAM, stdin); // arquivo lido do teclado.
  
  printf("%s\n", palavras);

 while (palavras[i] != '\0'){
  printf("%d = %c \n", i, palavras[i]);
  i++;
 }


return 0;
}
