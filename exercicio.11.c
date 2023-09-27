#include <stdio.h>

int ordena_numeros(int a, int b, int c) {
  
  if (a == b && b == c) {
    return 1;
  }

  if (a > b) {
    int aux = a;
    a = b;
    b = aux;
  }

  if (a > c) {
    int aux = a;
    a = c;
    c = aux;
  }

  if (b > c) {
    int aux = b;
    b = c;
    c = aux;
  }

  return 0;
}

int main() {
  
  int a, b, c;

  
  printf("Digite o valor de A: ");
  scanf("%d", &a);
  printf("Digite o valor de B: ");
  scanf("%d", &b);
  printf("Digite o valor de C: ");
  scanf("%d", &c);

 
  int ordenados = ordena_numeros(a, b, c);

  if (ordenados == 1) {
    printf("Os tres valores sao iguais.\n");
  } else {
    printf("Os valores ordenados sao: %d, %d e %d.\n", a, b, c);
  }

  return 0;
}
