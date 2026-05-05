#include <stdio.h>

int main(){

  char buffer[100];
  int n;
  int i;
  int t;
  int f = 1;
  int r;

  printf("Digite um número: ");
  fgets(buffer, 100, stdin);
  sscanf(buffer, "%d", &n);

  printf("Exercicio - 01: \n");
  for(i=1; i <= n; i++){
  
    printf("%d\n", i);
  
  }

  printf("Exercício - 02: \n");
  for(i=0;i < 10;i++){
    printf("%d X %d = %d\n",n, i, n * i);
  
  }
  
  printf("Exercicio - 03: \n");
  for (i=n; i >= 1; i--){
    r = f;
    f = f*i;
    printf("%d X %d = %d\n", r, i, f );
  }
return 0;
}
