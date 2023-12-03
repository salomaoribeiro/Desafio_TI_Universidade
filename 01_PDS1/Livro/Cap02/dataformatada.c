#include <stdio.h>

int main() {
  int dia, mes, ano;

  printf("Entre com uma data valida no formato dd/mm/aa: ");
  // leitura de dados inteiros com barra entre eles
  scanf("%d/%d/%d", &dia, &mes, &ano);

  printf("Data: %d/%d/%d\n", dia, mes, ano);
  return 0;
}
