#include <stdio.h>

int main(void) {
  int vetor[10];

  for (int i = 0; i < sizeof(vetor) / sizeof(vetor[0]); i++) {
    printf("Entre com o valor %d: ", i + 1);
    scanf("%d", &vetor[i]);
  }

  for (int i = 0; i < sizeof(vetor) / sizeof(vetor[0]); i++) {
    int valor = vetor[i];
    for (int j = i + 1; j <= sizeof(vetor) / sizeof(vetor[0]); j++) {
      if (valor == vetor[j]) {
        printf("Valor repetido: %d\n", valor);
      }
    }
  }

  printf("\n");
  return 0;
}
