#include <stdio.h>

int main() {
  
  int vetor[5];

  
  int *p = vetor;

  
  for (int i = 0; i < 5; i++) {
    printf("Digite o valor da posicao %d: ", i);
    scanf("%d", p + i);
  }

  
  for (int i = 0; i < 5; i++) {
    if (*(p + i) % 2 == 0) {
      printf("O endereco da posicao %d é %p.\n", i, p + i);
    }
  }

  return 0;
}
