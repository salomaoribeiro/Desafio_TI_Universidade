#include <stdio.h>

int main() {
  int estado;
  float valor;

  printf(
      "Estados:\n\t1 - MG\n\t2 - SP\n\t3 - RJ\n\t4 - MS\nEntre com o estado: ");
  scanf("%d", &estado);

  printf("Entre com o valor: R$ ");
  scanf("%f", &valor);

  switch (estado) {
  case 1:
    valor = valor * 1.07;
    printf("Preço final com imposto: R$ %f\n", valor);
    break;
  case 2:
    valor = valor * 1.12;
    printf("Preço final com imposto: R$ %f\n", valor);
    break;
  case 3:
    valor = valor * 1.15;
    printf("Preço final com imposto: R$ %f\n", valor);
    break;
  case 4:
    valor = valor * 1.08;
    printf("Preço final com imposto: R$ %f\n", valor);
    break;
  default:
    printf("Estado inválido.\n");
  }
  return 0;
}
