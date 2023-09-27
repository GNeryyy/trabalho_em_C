#include <stdio.h>

int somatorio(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + somatorio(n - 1);
    }
}

int main() {
    int n;
    printf("Digite um numero inteiro positivo N: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("O numero deve ser positivo.\n");
    } else {
        int resultado = somatorio(n);
        printf("O somatorio de 1 a %d e %d.\n", n, resultado);
    }

    return 0;
}


