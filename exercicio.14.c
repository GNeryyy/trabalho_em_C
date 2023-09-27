#include <stdio.h>


int calcularFatorial(int N) {
    if (N == 0 || N == 1) {
        return 1; 
    } else {
        return N * calcularFatorial(N - 1); 
    }
}

int main() {
    int numero;
    printf("Digite um numero inteiro para calcular o fatorial: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("O fatorial de um numero negativo nao e definido.\n");
    } else {
        int fatorial = calcularFatorial(numero);
        printf("O fatorial de %d e %d\n", numero, fatorial);
    }

    return 0;
}
