#include <stdio.h>

int main(int argc, char *argv[]) {
  int x;

  printf("Entre com 1 valores inteiros: ");
  scanf("%d", &x);

  if (x % 2 == 0)
    printf("Par.\n");
  else
    printf("Ímpar.\n");

  return 0;
}
