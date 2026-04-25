//programa que executa 4 operações aritmeticas básicas.
#include <stdio.h>

int main(){

  //declarar varicavel
  int a, b, soma, sub, mult, div;


  // solicitar dados
 
  printf("Digite o primeiro valor: \n");
  scanf("%d", &a);

  printf("Digite o segundo valor: \n");
  scanf("%d", &b);

  //processar dados

  soma = a + b;
  sub = a - b;
  mult = a * b;
  div = a/b;

  // apresentar resultado
  
  printf("Resultado da soma: %d\n", soma);
  printf("Resultado da subtração: %d\n", sub);
  printf("Resultado da multiplicação: %d\n", mult);
  printf("Resultado da divisão: %d\n", div);

return 0;
}
