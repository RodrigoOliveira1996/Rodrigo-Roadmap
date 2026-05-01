#include <stdio.h>

int main(){

  char palavras [20];

  printf("Digite seu nome: \n");
  scanf("%19[^\n]", palavras);
  
  printf("%s\n", palavras);


return 0;

}
