#include <stdio.h>

int main(void) {
  int vetor[5][5], soma = 0;

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      printf("Entre com o valor para vetor[%d][%d]: ", i, j);
      scanf("%d", &vetor[i][j]);
    }
  }

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      printf("%d ", vetor[i][j]);
      if (j > i) {
        soma += vetor[i][j];
      }
    }
    printf("\n");
  }

  printf("Soma: %d\n", soma);

  return 0;
}
