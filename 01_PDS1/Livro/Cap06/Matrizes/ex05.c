#include <stdio.h>

int main(void) {
  int vetor[4][4], quantidade;

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      printf("Entre com o valor para vetor[%d][%d]: ", i, j);
      scanf("%d", &vetor[i][j]);
    }
  }

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%d ", vetor[i][j]);
      if (vetor[i][j] < 0) {
        quantidade++;
      }
    }
    printf("\n");
  }

  printf("Valores negativos: %d\n", quantidade);

  return 0;
}
