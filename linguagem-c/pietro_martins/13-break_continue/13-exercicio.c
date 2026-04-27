#include <stdio.h>

int main(void){

    int i;
    for (i=1; i<10; i++){
      
      printf("%d ", i);

      if (i==5){
        break;      
      }
    }

    printf(" fim!\n");

return 0;
}
