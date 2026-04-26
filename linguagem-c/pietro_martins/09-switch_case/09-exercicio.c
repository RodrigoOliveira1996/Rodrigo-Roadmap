//só compara igualdade

#include <stdio.h>

int main(void){
  
  int menu;

  printf ("Digite um numero de 1 á 7: \n");
  scanf("%d", &menu);

  switch (menu){
  
    case 1:

      printf("Segunda feira.\n");
      break;

     case 2:

      printf("Terça feira.\n");
      break;

     case 3:

      printf("Quarta feira.\n");
      break;

    case 4:

      printf("Quinta feira.\n");
      break;

    case 5:

      printf("Sexta feira.\n");
      break;

    case 6:

      printf("Sabado.\n");
      break;

    case 7:

      printf("Domingo.\n");
      break;

    default:
      printf("Valor invalido. digite um numero inteiro de 1 a 7.\n");

  }
    

return 0;
}
