#include <stdio.h>

int main() {
  int num;

  printf("Digite um valor inteiro: ");
  scanf("%d", &num);

  while (num >= 0) {
    printf("%d ", num);
    num--;
  }

  printf("\n");
  return 0;
}
