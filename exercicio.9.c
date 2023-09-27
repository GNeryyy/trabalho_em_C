#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  
  int vetor[5];

  int *p = vetor;
 
  for (int i = 0; i < 5; i++) {

    setlocale(LC_ALL, "Portuguese");
    printf("Digite o valor da posição %d: ", i);
    scanf("%d", p + i);
  }

  for (int i = 0; i < 5; i++) {
    printf("O dobro do valor da posição %d é %d.\n", i, *(p + i) * 2);
  }

  return 0;
}
