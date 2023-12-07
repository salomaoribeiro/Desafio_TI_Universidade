#include <stdio.h>

int main(void) {
  int numerador = 1, denominador = 1, quantidade;
  float soma;

  printf("Entre com a quantidade de valores da soma: ");
  scanf("%d", &quantidade);

  while (denominador <= quantidade) {
    soma += (numerador / 1.0) / denominador;
    numerador += 2;
    denominador++;
  }
  printf("Soma: %f\n", soma);

  return 0;
}
