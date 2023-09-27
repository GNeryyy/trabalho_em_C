#include <stdio.h>

int main() {
    int A, *B, **C, ***D;

   
    B = &A;
    C = &B;
    D = &C;

    
    printf("Digite o valor de A: ");
    scanf("%d", &A);

 
    *B = 2 * A;
    **C = 3 * A;
    ***D = 4 * A;

    
    printf("O dobro de A: %d\n", *B);
    printf("O triplo de A: %d\n", **C);
    printf("O quádruplo de A: %d\n", ***D);

    return 0;
}
