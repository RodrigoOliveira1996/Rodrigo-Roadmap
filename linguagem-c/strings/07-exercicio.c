#include <stdio.h>
#include <string.h>

int main(){

char nome[5][100];
float notas[5];
int i;


  for (i = 0; i < 5; i++){
    
    printf("Digite um nome: ");
    fgets(nome[i], 100, stdin);
    nome[i][strcspn(nome[i], "\n")] = 0;

    printf("qual a nota do %s?", nome[i]);
    scanf("%f", &notas[i]);
    setbuf(stdin, NULL);

}


  for (i=0; i <5; i++){
    printf("%d - Aluno: %s - nota: %.2f\n", i, nome[i], notas[i]);
    
  
  }


  printf("fim do programa.\n");

return 0;
}
