#include <stdio.h>

int main(void){

    char buffer [100];
    int mat[3][3];
    int i = 0;
    int j = 0;

    for(i = 0; i < 3; i++ ){


      printf("Digite os numeros da %d colunas primeira linha da matriz:\n", i);
      for(j=0; j < 3; j++){
        
        fgets(buffer, 100, stdin);
        sscanf(buffer, "%d", &mat[i][j]);
      
      
      }
      
          
    }

    printf("Imprimindo a matriz: \n");
    for(i=0; i<3;i++){
      
      printf("\n");
      for(j=0; j<3; j++){
      printf("%d ", mat[i][j]);
      }
    }

    printf("\n");

return 0;
}
