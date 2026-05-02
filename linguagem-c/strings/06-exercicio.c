#include <stdio.h>
#include <string.h>
int main(){

  int idade;
  char nome[5][100];
  int i;
  int j;

  printf("Digite quantos anos vocẽ tem: ");
  scanf(" %d", &idade);
  setbuf(stdin, NULL);
  printf("Resultado: %d\n", idade);

  
  for(i=0; i < 5;i++){
    for (j = 0; j < 5; j++ )
    {
  
  
  printf("Digite um nome: ");
  
  fgets(nome, 100, stdin);
  nome[strcspn(nome, "\n")] = 0;
  //printf("Resultado: %s\n", nome);
    }

  }



  /*printf("digite outro nome: ");
  fgets(nome2, 100, stdin);
  nome2[strcspn(nome2, "\n")] = 0;
  printf("Resultado: %s\n", nome2); */
return 0;
}
