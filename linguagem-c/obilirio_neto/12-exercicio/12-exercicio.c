//
#include <stdio.h>


int main(){

  int i = 0;

 while(i !=10){ // poderia ser: i< 10, mas aquin é enquanto i for diferente de 10, mas parece ser perigoso.
  printf("numero %d.\n", i);
  i++;
 }


return 0;
}
