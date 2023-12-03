#include <stdio.h>

int main() {

  int x, z;
  float y;

  printf("Entre com um valor inteiro: ");
  // lendo um valor inteiro
  scanf("%d", &x);

  printf("Entre com um valor float: ");
  // lendo um valor real
  scanf("%f", &y);

  printf("Inteiro: %d\nFloat: %f", x, y);

  printf("\nEntre com 2 valores inteiros: ");
  // lendo 2 valores inteiros
  scanf("%d %d", &x, &z);

  printf("Primeiro inteiro: %d\nSegundo inteiro: %d\n", x, z);
  return 0;
}
