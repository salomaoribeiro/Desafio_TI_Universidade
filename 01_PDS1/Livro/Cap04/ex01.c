#include <stdio.h>

int main() {
  int x, y, maior;

  printf("Entre com 2 valores inteiros: ");
  scanf("%d %d", &x, &y);

  maior = x > y ? x : y;

  printf("O maior valor difitado foi %d.\n", maior);
  return 0;
}
