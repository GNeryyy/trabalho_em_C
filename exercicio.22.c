#include <stdio.h>

void imprime_numeros(int n) {
  if (n == 0) {
    printf("%d\n", n);
  } else {
    imprime_numeros(n - 1);
    printf("%d\n", n);
  }
}

int main() {
  int n = 5;
  imprime_numeros(n);
  return 0;
}
