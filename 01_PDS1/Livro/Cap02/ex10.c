#include <stdio.h>

int main() {
  int dia, mes, ano;

  printf("Entre com o dia, mes e ano separado por espaço: ");

  scanf("%d %d %d", &dia, &mes, &ano);

  printf("A data formatada é: %d\\%d\\%d\n", dia, mes, ano);
  return 0;
}
