#include <stdio.h>

int main() {
  int valor;

  printf("Entre com um valor inteiro: ");
  scanf("%d", &valor);

  printf("%d%d%d\n", valor % 10, valor / 10 % 10, valor / 100 % 10);
  return 0;
}
