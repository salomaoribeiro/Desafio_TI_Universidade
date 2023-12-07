#include <stdio.h>

int main(void) {
  int valor, soma = 0, quantidade = 10, contador = 0;

  while (contador < quantidade) {
    printf("Entre com um valor inteiro: ");
    scanf("%d", &valor);

    if (valor > 0) {
      contador++;
      soma += valor;
    }
  }

  printf("Média: %f\n", soma / 1.0 / quantidade);

  return 0;
}
