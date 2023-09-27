#include <stdio.h>

void imprime_numeros_pares(int n) {
  if (n == 0) {
    return;
  } else {
    printf("%d\n", n);
    imprime_numeros_pares(n / 2);
  }
}

int main() {
  int n = 10;
  imprime_numeros_pares(n);
  return 0;
}
