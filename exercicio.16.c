#include <stdio.h>

int potencia(int k, int n);

int main() {
  int k, n;

  printf("Digite o valor de k: ");
  scanf("%d", &k);

  printf("Digite o valor de n: ");
  scanf("%d", &n);

  int resultado = potencia(k, n);

  printf("O resultado de k^n e: %d\n", resultado);

  return 0;
}

int potencia(int k, int n) {
  if (n == 0) {
    return 1;
  } else {
    return k * potencia(k, n - 1);
  }
}
