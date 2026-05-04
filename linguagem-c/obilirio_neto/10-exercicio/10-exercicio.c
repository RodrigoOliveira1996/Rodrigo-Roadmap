#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define N 100

int main(void){

    char str1[N];
    char str2[N];
    char str3[N];
    char str4[N];
    printf("Digite um texto para variavel origem: ");
    
    fgets(str1, N, stdin);
    str1[strcspn(str1, "\n")] = 0;

    printf("Digite um texto para variavel destino: ");
    
    fgets(str2, N, stdin);
    str2[strcspn(str2, "\n")] = 0;

    printf("Tamanhos: %zu e %zu \n", strlen(str1), strlen(str2));

    printf("Minusculas: \n");

    for(int i = 0; str1[i]; i++){
      putchar(tolower(str1[i]));
    }
    printf("\n");
  
    printf("Maiúsculas: \n");
    for(int i = 0; str2[i]; i++){
      putchar(toupper(str2[i]));
    
    }

    printf("\n");

    printf("ordem alfabetica: \n");

    if(strcmp(str1, str2) <0)
      printf("%s ||| %s\n", str1, str2);
    
    else
      printf("%s ||| %s\n", str2, str1);

    strcpy(str3, str1);
    printf("concatenação: \n");
    printf("%s\n",  strcat(str3, str2));

    strcpy(str2, str1);
    printf("Texto origem: %s\nTexto destino: %s\n", str1, str2);

return 0;
}
