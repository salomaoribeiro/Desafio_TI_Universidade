#include <stdio.h>

int main(void) {
  float total = 0, valor;
  int quantidade = 10;

  for (int i = 0; i < quantidade; i++) {
    printf("Entre com um valor: ");
    scanf("%f", &valor);
    total += valor;
  }

  printf("Total: %f\n", total / quantidade);
  return 0;
}
