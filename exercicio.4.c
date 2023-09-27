#include <stdio.h>

void troca_valores(int *a, int *b) {

  int aux = *a;
 
  *a = *b;

  *b = aux;
}

int main() {
 
  int a, b;

  
  printf("Digite o primeiro valor: ");
  scanf("%d", &a);
  printf("Digite o segundo valor: ");
  scanf("%d", &b);

  troca_valores(&a, &b);

  printf("O primeiro valor agora é %d.\n", a);
  printf("O segundo valor agora é %d.\n", b);

  return 0;
}

