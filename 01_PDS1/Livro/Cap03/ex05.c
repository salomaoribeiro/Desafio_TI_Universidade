#include <stdio.h>

int main() {
  int ano, idade;

  printf("Entre com o ano atual e sua idade: ");
  scanf("%d %d", &ano, &idade);

  printf("Você nasceu em: %d\n", ano - idade);
  return 0;
}
