#include <stdio.h>

int main(void) {
  int valor = 10;

  while (valor >= 0) {
    printf("%d ", valor);
    valor--;
  }
  printf("\nFim!\n");

  return 0;
}
