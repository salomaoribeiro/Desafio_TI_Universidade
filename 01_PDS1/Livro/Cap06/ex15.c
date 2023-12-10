#include <stdio.h>

int main(void) {
  int vetor[10];
  int valor, ordenado;

  for (int i = 0; i < sizeof(vetor) / sizeof(vetor[0]); i++) {
    printf("Entre com o valor %d: ", i + 1);
    scanf("%d", &vetor[i]);
  }

  do {
    ordenado = 1;

    for (int i = 0; i < sizeof(vetor) / sizeof(vetor[0]) - 1; i++) {
      if (vetor[i] > vetor[i + 1]) {
        ordenado = 0;

        valor = vetor[i + 1];
        vetor[i + 1] = vetor[i];
        vetor[i] = valor;
      }
    }
  } while (!ordenado);

  for (int i = 0; i < sizeof(vetor) / sizeof(vetor[0]); i++) {
    printf("%d ", vetor[i]);
  }

  printf("\n");
  return 0;
}
