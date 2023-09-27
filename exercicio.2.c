#include <stdio.h>

int main() {
  
  int x = 10;
  int y = 20;


  int* endereco_x = &x;
  int* endereco_y = &y;

 
  if (endereco_x > endereco_y) {
    printf("O endereço de x é maior que o endereço de y.\n");
  } else {
    printf("O endereço de y é maior que o endereço de x.\n");
  }

 
  printf("O maior endereço é: %p\n", endereco_x > endereco_y ? endereco_x : endereco_y);

  return 0;
}