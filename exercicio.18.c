#include <stdio.h>

int mdc(int x, int y);

int main() {
  int x = 12;
  int y = 18;

  int resultado = mdc(x, y);

  printf("O maximo divisor comum de %d e %d é: %d\n", x, y, resultado);

  return 0;
}

int mdc(int x, int y) {
  if (y == 0) {
    return x;
  } else {
    return mdc(y, x % y);
  }
}
