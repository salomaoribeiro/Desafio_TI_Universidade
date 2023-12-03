#include <stdio.h>

int main() {
  double valor;

  printf("Entre com um valor decimal: ");
  scanf("%lf", &valor);

  printf("O valor em notação científica é: %e\n", valor);

  return 0;
}
