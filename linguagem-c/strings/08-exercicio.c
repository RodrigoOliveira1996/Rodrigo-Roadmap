#include <stdio.h>
#include <string.h>


#define TAM_CHAR 100

int main (){

  char buffer[TAM_CHAR];
  char nome[3][TAM_CHAR];
  float nota[3];
  int i, j;
  float m = 0;
  char aprovados[3][TAM_CHAR];
  char reprovados[3][TAM_CHAR];

  for(i=0; i < 5; i++){

      printf("Aluno: ");
      fgets(nome[i], TAM_CHAR, stdin);
      nome[i][strcspn(nome[i], "\n")] = 0;

      printf ("Nota: ");
      fgets(buffer, TAM_CHAR, stdin);
      sscanf(buffer, "%f", &nota[i]);
  
  }
  
 

 /* for(i=0;i < 5; i++){
   
      printf("resultado: \nAluno: %s.Nota: %.2f.\n", nome[i], nota[i]);
  } */

  for (i=0; i < 3; i++){
  m = m + nota[i];
  
  }

  printf("media: %.2f\n", m/3);

  for(i=0;i< 3;i++){
  
    if (nota[i] >= 7 ){

      aprovados[i] = nome[i];
     // printf("Aprovados : \naluno: %s\n nota: %.2f\n", nome[i], nota[i]);
    }


    else {
     reprovados[i] = nome[i];
   // printf("reprovados:  \naluno: %s\n nota: %.2f\n", nome[i], nota[i]);
    }
  }
  
  for (i=0; i < 3; i++){
    printf("lista de aprovados: \n%s", nome[i]);

  }


return 0;
}
