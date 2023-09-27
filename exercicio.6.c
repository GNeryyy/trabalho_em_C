#include <stdio.h>

void soma(int *a, int *b) {

  *a = *a + *b;
}

int main() {

  int a = 20, b = 30;

  printf("A = %d\n", a);
  printf("B = %d\n", b);

  soma(&a, &b);

  printf("A = %d\n", a);
  printf("B = %d\n", b);

  return 0;
}
