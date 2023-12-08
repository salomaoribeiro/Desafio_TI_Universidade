#include <stdio.h>

int main(void) {
  int vetor[5];
  int soma = 0;

  for (int i = 0; i < sizeof(vetor) / sizeof(vetor[0]); i++) {
    printf("Entre com o valor %d: ", i + 1);
    scanf("%d", &vetor[i]);
  }

  for (int i = 0; i < sizeof(vetor) / sizeof(vetor[0]); i++) {
    printf("%d ", vetor[i]);
    soma += vetor[i];
  }

  printf("Média: %f\n", soma / 5.0);
  return 0;
}
