#include <stdio.h>

int main() {
  int op, a, b;

  printf("Entre com a operação:\n\t1 - Adição\n\t2 - Subtração\n\t3 - "
         "Multiplicação\n\t4 - Divisão\nOpção: ");
  scanf("%d", &op);

  printf("Entre com 2 valores inteiros: ");
  scanf("%d %d", &a, &b);

  switch (op) {
  case 1:
    printf("%d + %d = %d\n", a, b, a + b);
    break;
  case 2:
    printf("%d - %d = %d\n", a, b, a - b);
    break;
  case 3:
    printf("%d * %d = %d\n", a, b, a * b);
    break;
  case 4:
    printf("%d / %d = %d\n", a, b, a / b);
    break;
  default:
    printf("Operação inválida.\n");
    break;
  }

  return 0;
}
