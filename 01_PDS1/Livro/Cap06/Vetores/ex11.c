#include <stdio.h>

int main(void) {
  int vetor[10], quadrado[10];

  for (int i = 0; i < sizeof(vetor) / sizeof(vetor[0]); i++) {
    printf("Entre com o valor %d: ", i + 1);
    scanf("%d", &vetor[i]);
  }

  for (int i = 0; i < sizeof(vetor) / sizeof(vetor[0]); i++) {
    quadrado[i] = vetor[i] * vetor[i];
  }

  for (int i = 0; i < sizeof(vetor) / sizeof(vetor[0]); i++) {
    printf("Valor: %d - Quadrado: %d\n", vetor[i], quadrado[i]);
  }

  return 0;
}
