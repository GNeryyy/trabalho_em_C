#include <stdio.h>

int main() {
  
  float vetor[10];

  for (int i = 0; i < 10; i++) {
    printf("O endereco da posicao %d e %p.\n", i, &vetor[i]);
  }

  return 0;
}