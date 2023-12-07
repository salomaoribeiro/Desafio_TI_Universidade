#include <stdio.h>

int main(void) {
  int maior = 0, valor = 0;

  while (valor >= 0) {
    printf("Entre com um valor: ");
    scanf("%d", &valor);
    if (valor > maior)
      maior = valor;
  }

  printf("Maior valor digitado: %d\n", maior);

  return 0;
}
