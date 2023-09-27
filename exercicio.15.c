#include <stdio.h>


int main() {
  int n = 123;
  int invertido = inverter(n);
  printf("N invertido: %d\n", invertido);
  return 0;
}


int inverter(int n) {
  if (n == 0) {
    return 0;
  } else {
    return 10 * inverter(n / 10) + n % 10;
  }
}



