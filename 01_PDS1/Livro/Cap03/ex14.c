#include <stdio.h>

int main() {
  char c;

  printf("Entre com uma letra maiúscula: ");
  c = getchar();

  printf("%c\n", c + 32);
  return 0;
}
