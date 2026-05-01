#include <stdio.h>
//em char a ultima posição é sempre o barra zero.
//scanf


#define TAM 10

int main(){
  
  char s[TAM];
  
  printf("Digite algo: \n");
  fgets(s, TAM, stdin);
  puts("resultado: ");
  puts(s);
  puts("");


  

return 0;
}
