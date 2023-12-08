#include <stdio.h>

int main(void) {
  int vetor[6];

  for (int i = 0; i < sizeof(vetor) / sizeof(vetor[0]); i++) {
    printf("Entre com o valor %d: ", i + 1);
    scanf("%d", &vetor[i]);
  }

  for (int i = sizeof(vetor) / sizeof(vetor[0]) - 1; i >= 0; i--) {
    printf("%d ", vetor[i]);
  }

  printf("\n");
  return 0;
}
