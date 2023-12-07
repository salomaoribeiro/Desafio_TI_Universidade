#include <stdio.h>

int main(void) {
  int contador = 0, valor = 1, soma = 0;

  while (contador < 50) {
    if (valor % 2 == 0) {
      contador++;
      soma += valor;
    }

    valor++;
  }
  printf("Soma: %d\n", soma);

  return 0;
}
