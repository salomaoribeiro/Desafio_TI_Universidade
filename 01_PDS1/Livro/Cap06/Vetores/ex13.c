#include <stdio.h>

int main(void) {
  int vetor[10];
  int valor, existe;

  for (int i = 0; i < sizeof(vetor) / sizeof(vetor[0]); i++) {
    do {
      existe = 0;

      printf("Entre com o valor %d: ", i + 1);
      scanf("%d", &valor);

      for (int j = 0; j < i; j++) {
        if (vetor[j] == valor) {
          existe = 1;
          printf("Valor já digitado anteriormente. Favor escolher outro.\n\n");
        }
      }
    } while (existe);

    vetor[i] = valor;
  }

  for (int i = 0; i < sizeof(vetor) / sizeof(vetor[0]); i++) {
    printf("%d ", vetor[i]);
  }

  printf("\n");
  return 0;
}
