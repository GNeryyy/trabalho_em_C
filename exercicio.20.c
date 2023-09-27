#include <stdio.h>

int conta_digitos(int n, int k) {
  if (n == 0) {
    return 0;
  } else if (n % 10 == k) {
    return 1 + conta_digitos(n / 10, k);
  } else {
    return conta_digitos(n / 10, k);
  }
}

int main() {
  int n = 762021192;
  int k = 2;
  int qtd = conta_digitos(n, k);
  printf("O digito %d ocorre %d vezes em %d\n", k, qtd, n);
  return 0;
}
