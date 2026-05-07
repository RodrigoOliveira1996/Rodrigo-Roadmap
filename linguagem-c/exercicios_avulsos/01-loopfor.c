//ler n e contar de 1 até N
#include <stdio.h> 

int main(){

  char buffer[100];
  int N; // numero
  int i; // indice
  int M; // multipicação
  int fat = 1; // fatorial
  int fat_anterior; // controlar aprensentação do printf


  //lendo dado com tecnica buffer.

  printf("Digite um número inteiro: ");
  fgets(buffer, 100, stdin);
  sscanf(buffer, "%d", &N);

  for(i=1; i <= N; i++){
    
    printf("Número: %d\n", i);
  }

  // capturando dando com scanf apenas.
  
  printf("Criando uma tabuada: \n");
  printf("Digite um número: ");
  scanf("%d", &N);
  setbuf(stdin, NULL);

  for(i=0; i <= 10; i++ ){

     printf("%d X %d = %d.\n", i, N, N * 1);
    
  }

  printf("\nFatorial.\n");
  printf("Digite um número: ");
  fgets(buffer, 100, stdin);
  sscanf(buffer, "%d", &N);


  printf("%d\n", N);

  for(i=N;i >= 1;i--){
    
    fat_anterior = fat;
    fat = i * fat;

    printf("%d X %d = %d.\n", fat_anterior, i, fat);
  }


  // sequencia de febonnaci
  // logica
  // eu digito um numero n. o f()
  printf("\nFibonacci.\n");
  printf("Deseja a apresentação de qunatos numeros da sequencia em fibonacci? ");
  scanf("%d", &N); //vai controlar o numero de xibições.

  int n_proximo;
  int n_atual = 1;
  int n_anterior = 0;

  for(N=N; N>=1; N--){
    
    printf("%d ", n_anterior);
    n_proximo = n_anterior + n_atual;
    n_anterior = n_atual;
    n_atual = n_proximo;
    
  }

    printf("\n");
return 0;
}
