#include <stdio.h>

int main() {
  char c;

  printf("Entre com um caracter: ");
  c = getchar();

  printf("O caracter %c em inteiro é: %d\n", c, c);
  return 0;
}
