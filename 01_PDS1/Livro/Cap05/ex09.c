
#include <stdio.h>

int main(void) {
  int maior, menor, valor, contador = 10;

  printf("Entre com um valor: ");
  scanf("%d", &valor);

  maior = menor = valor;
  contador--;
  while (contador > 0) {
    printf("Entre com um valor: ");
    scanf("%d", &valor);

    if (valor > maior) {
      maior = valor;
    }
    if (valor < menor) {
      menor = valor;
    }
    contador--;
  }

  printf("Menor valor: %d\n", menor);
  printf("Maior valor: %d\n", maior);

  return 0;
}
