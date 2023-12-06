#include <stdio.h>

int main() {
  int semana;

  printf("Entre com o dia da semana: ");
  scanf("%d", &semana);

  switch (semana) {
  case 1:
    printf("Segunda-feira.\n");
    break;
  case 2:
    printf("Terça-feira.\n");
    break;
  case 3:
    printf("Quarta-feira.\n");
    break;
  case 4:
    printf("Quinta-feira.\n");
    break;
  case 5:
    printf("Sexta-feira.\n");
    break;
  case 6:
    printf("Sábado.\n");
    break;
  case 7:
    printf("Domingo.\n");
    break;
  default:
    printf("valor inválido para dia.");
    break;
  }

  return 0;
}
