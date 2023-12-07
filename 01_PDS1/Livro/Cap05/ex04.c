#include <stdio.h>

int main(void) {
  int contador = 0, valor = 1;

  while (contador < 5) {
    if (valor % 3 == 0) {
      printf("%d ", valor);
      contador++;
    }

    valor++;
  }
  printf("\n");

  return 0;
}
