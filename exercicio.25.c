#include <stdio.h>

void imprime_numeros_pares_decrescentes(int n) {
  if (n == 0) {
    return;
  } else {
    imprime_numeros_pares_decrescentes(n / 2);
    printf("%d\n", n);
  }
}

int main() {
  int n = 10;
  imprime_numeros_pares_decrescentes(n);
  return 0;
}
