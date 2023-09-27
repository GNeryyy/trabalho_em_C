#include <stdio.h>

int multip_rec(int n1, int n2) {
    if (n2 == 0) {
        return 0;
    } else if (n2 > 0) {
        return n1 + multip_rec(n1, n2 - 1);
    } else {  
        return -multip_rec(n1, -n2);
    }
}

int main() {
    int n1, n2;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &n1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &n2);

    int resultado = multip_rec(n1, n2);
    printf("%d * %d = %d\n", n1, n2, resultado);

    return 0;
}