#include <stdio.h>

int main() {
  
  int inteiro = 10;
  float real = 2.5;
  char caracter = 'a';

  
  int* inteiro_pont = &inteiro;
  float* real_pont = &real;
  char* caracter_pont = &caracter;

 
  printf("Inteiro: %d\n", inteiro);
  printf("Real: %.2f\n", real);
  printf("Caracter: %c\n", caracter);

  
  *inteiro_pont = 20;
  *real_pont = 3.5;
  *caracter_pont = 'b';

  
  printf("Inteiro: %d\n", inteiro);
  printf("Real: %.2f\n", real);
  printf("Caracter: %c\n", caracter);

  return 0;
}