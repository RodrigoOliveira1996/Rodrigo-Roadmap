#include <stdio.h>

int main(void){

  float nota;

  printf("Insira anota: ");
  scanf("%f", &nota);

  if (nota>=4.0 && nota < 7.0){
  
    printf("Tem direito a exame!\n");
  }

  else if (nota >=7){
  
    printf("Aprovado!\n");
  }

  else{

    printf("Reprovado!\n");
  }

return 0;
}
