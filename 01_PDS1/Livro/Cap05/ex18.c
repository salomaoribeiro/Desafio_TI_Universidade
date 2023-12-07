#include <stdio.h>

int main(void) {
  int primo = 1, numero;

  printf("Entre com um valor: ");
  scanf("%d", &numero);

  if (numero > 1) {
    for (int i = 2; i < numero; i++) {
      if (numero % i == 0) {
        primo = 0;
        break;
      }
    }
  } else {
    printf("Valor inválido.\n");
  }

  if (primo) {
    printf("%d é um número primo.\n", numero);
  } else {
    printf("%d não é um número primo.\n", numero);
  }

  return 0;
}
