#include <stdio.h>

int main() {
  int numero;

  printf("Entre com um valor inteiro: ");
  scanf("%d", &numero);

  if (!(numero % 3 == 0 && numero % 5 == 0)) {
    if (numero % 3 == 0) {
      printf("Número é divisível por 3.\n");
    } else if (numero % 5 == 0) {
      printf("Número é divisível por 5.\n");
    } else {
      printf("Número não é divisível por 3 ou 5.\n");
    }
  } else {
    printf("Número não corresponde ao que procuramos pois é divisível por 3 e "
           "5.\n");
  }

  return 0;
}
