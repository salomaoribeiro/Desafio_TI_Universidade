#include <stdio.h>

int main(int argc, char *argv[]) {
  int valor;
  printf("Entre com um valor inteiro: ");
  scanf("%d", &valor);

  printf("Valor digitado: %d\nAntecessor: %d\nSucessor: %d\n", valor, valor - 1,
         valor + 1);

  return 0;
}
