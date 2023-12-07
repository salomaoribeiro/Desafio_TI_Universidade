#include <stdio.h>

int main(void) {
  int valor;

  printf("Entre com um valor inteiro e positivo: ");
  scanf("%d", &valor);

  if (valor > 0) {
    for (int i = 1; i <= valor; i++) {
      if (valor % i == 0)
        printf("%d ", i);
    }

    printf("\n");
  } else {
    printf("Valor inválido.\n");
  }

  return 0;
}
