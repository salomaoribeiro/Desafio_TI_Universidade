#include <stdio.h>

int main(void) {
  int valor, anterior = 0, atual = 1, proximo = 0;

  printf("Entre com um valor inteiro: ");
  scanf("%d", &valor);

  if (valor >= 0) {
    for (int i = 0; i < valor; i++) {
      anterior = atual;
      atual = proximo;
      proximo = anterior + atual;
    }
  } else {
    printf("Valor inválido.\n");
  }

  printf("%d\n", atual);
  return 0;
}
