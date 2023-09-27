#include <stdio.h>

int main() {
  
  int x;
  int y;

 
  printf("Digite um número: ");
  scanf("%d", &x);

  printf("Digite mais um número: ");
  scanf("%d", &y);


  int* endereco_x = &x;
  int* endereco_y = &y;

  
  if (endereco_x > endereco_y) {
    printf("O endereço de x é maior que o endereço de y.\n");
  } else {
    printf("O endereço de y é maior que o endereço de x.\n");
  }

  
  printf("O conteúdo do maior endereço é: %d\n", *endereco_x > *endereco_y ? *endereco_x : *endereco_y);

  return 0;
}