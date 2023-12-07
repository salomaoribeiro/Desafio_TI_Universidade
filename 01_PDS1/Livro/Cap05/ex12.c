#include <stdio.h>

int main(void) {
  int valor, soma = 0;

  printf("Entre com um valor inteiro e positivo: ");
  scanf("%d", &valor);

  if (valor > 0) {
    for (int i = 1; i < valor; i++) {
      if (valor % i == 0)
        soma += i;
    }

    printf("%d\n", soma);

  } else {
    printf("Valor inválido.\n");
  }

  return 0;
}
