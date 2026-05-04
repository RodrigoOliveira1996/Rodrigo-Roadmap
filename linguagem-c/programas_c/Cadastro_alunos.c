#include <stdio.h>
#include <string.h>


#define TAM_CHAR 100
#define TOTAL_ALUNOS 6

int main (){

  char buffer[TAM_CHAR];
  char alunos[TOTAL_ALUNOS][TAM_CHAR];
  float nota[TOTAL_ALUNOS];
  int i;
  int c_ap = 0;
  int c_rp = 0;
  float m = 0;
  char aprovados[TOTAL_ALUNOS][TAM_CHAR];
  char reprovados[TOTAL_ALUNOS][TAM_CHAR];

  // CADASTRANDO ALUNOS E NOTAS E CALCULANDO MÉDIA PRA ECONOMIZAR LINHAS
 
  for(i=0; i < TOTAL_ALUNOS; i++){

      printf("Aluno: ");
      fgets(alunos[i], TAM_CHAR, stdin);
      alunos[i][strcspn(alunos[i], "\n")] = 0;

      printf ("Nota: ");
      fgets(buffer, TAM_CHAR, stdin);
      sscanf(buffer, "%f", &nota[i]);
  
     m = m + nota[i];

  }
  

  printf("media: %.2f\n", m / TOTAL_ALUNOS);

  // copiando strings para lista de aprovados e reprovados

 for(i=0;i< TOTAL_ALUNOS;i++){
  
    if (nota[i] >= 7 ){

      strcpy(aprovados[c_ap], alunos[i]);
      c_ap++;
    }


    else {
     strcpy(reprovados[c_rp], alunos[i]);
     c_rp++;
    }
  }
  
  // EXIBINDO LISTA DE APROVADOS

  printf("lista de aprovados: \n");
  for (i=0; i < c_ap; i++){

    printf("%s - ", aprovados[i]);

  }

  printf("\n");


  // EXIBINDO LISTA DE REPROVADOS

  printf("lista de reprovados: \n");
  for (i=0; i < c_ap; i++){

    printf("%s - ", reprovados[i]);

  }

  printf("\n");


return 0;
}
