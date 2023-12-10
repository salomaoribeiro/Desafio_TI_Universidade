#include <stdio.h>

int main(void) {
  int vetor[3][3], soma = 0;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("Entre com o valor para vetor[%d][%d]: ", i, j);
      scanf("%d", &vetor[i][j]);
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", vetor[i][j]);
      if (i == j) {
        soma += vetor[i][j];
      }
    }
    printf("\n");
  }

  printf("Soma da diagonal principal: %d\n", soma);

  return 0;
}

