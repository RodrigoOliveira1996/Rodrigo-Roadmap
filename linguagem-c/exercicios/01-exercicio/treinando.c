// Programa que imprimi na tela Nome, Idade, Sexo, Salario
// Data:

#include <stdio.h>

int main(){
  //DECLARANDO VARIAVEISn   E ATRIBUINDO VALORES
   char nome[]= "Rodrigo";
   char sexo = 'M';
   int idade = 30;
   float salario = 7000;

  // IMPRIMINDO NA TELA
   printf("Olá, %s\nAqui estao seus dados:\n", nome);
   printf("Idade: %d\nSexo: %c\nSalario: %.2f Reais.\n", idade, sexo, salario);
  


return 0;
}
