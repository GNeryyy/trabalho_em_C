#include <stdio.h>

void imprime_numeros_decrescentes(int n) {
  if (n == 0) {
    return;
  } else {
    printf("%d\n", n);
    imprime_numeros_decrescentes(n - 1);
  }
}

int main() {
  int n = 5;
  imprime_numeros_decrescentes(n);
  return 0;
}
