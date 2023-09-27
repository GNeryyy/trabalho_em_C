#include <stdio.h>

void inverter(float *vetor, int inicio, int fim);

int main() {
  float vetor[] = {1, 2, 3, 4, 5};

  inverter(vetor, 0, 4);

  for (int i = 0; i < 5; i++) {
    printf("%f ", vetor[i]);
  }

  return 0;
}

void inverter(float *vetor, int inicio, int fim) {
  if (inicio < fim) {
    float aux = vetor[inicio];
    vetor[inicio] = vetor[fim];
    vetor[fim] = aux;

    // Chamada recursiva
    inverter(vetor, inicio + 1, fim - 1);
  }
}
