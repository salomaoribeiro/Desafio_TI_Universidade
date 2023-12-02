#include "aritimetica.h"
#include <stdio.h>

int main() {
  int x, y, z;
  char ch;

  printf("Digite a opperação aritmética (+ - / *) ");
  ch = getchar();

  printf("Digite 2 números: ");
  scanf("%d %d", &x, &y);

  switch (ch) {
  case '+':
    z = soma(x, y);
    break;
  case '-':
    z = subtracao(x, y);
    break;
  case '/':
    z = divisao(x, y);
    break;
  case '*':
    z = multilicacao(x, y);
    break;
  default:
    printf("Operação inválida.\n\nResultado aleatório.");
  }

  printf("Resultado: %d\n", z);

  return 0;
}
