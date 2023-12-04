#include <stdio.h>

int main(void) {
  int x, y;

  printf("Entre com 2 números inteiros: ");
  scanf("%d %d", &x, &y);

  if (x == y)
    printf("Os valores são iguais.\n");
  else if (x > y)
    printf("%d é maior que %d.\n", x, y);
  else
    printf("%d é maior que %d.\n", y, x);

  return 0;
}
