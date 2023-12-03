#include <stdio.h>

int main() {
  float valor;

  printf("Entre com um valor: ");
  scanf("%f", &valor);

  printf("A quinta parte de %f = %f\n", valor, valor / 5);
  return 0;
}
