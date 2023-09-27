#include <stdio.h>

int maior_menor() {
     int a, b;
 
  int maior = a;
  if (b > a) {
    maior = b;
  }

  int menor = a;
  if (a > b) {
    menor = b;
  }

  return maior, menor;
}

int main() {
  
  int a, b;

  
  printf("Digite o primeiro valor: ");
  scanf("%d", &a);
  printf("Digite o segundo valor: ");
  scanf("%d", &b);

 
  int maior, menor;
  maior_menor(a, b, &maior, &menor);

  
  printf("O maior valor é %d.\n", maior);
  printf("O menor valor é %d.\n", menor);

  return 0;
}
