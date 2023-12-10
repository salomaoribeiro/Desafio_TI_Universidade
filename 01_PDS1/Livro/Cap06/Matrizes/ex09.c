#include <stdio.h>

int main(void) {
  int vetor[3][3], soma[3];

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("Entre com o valor para vetor[%d][%d]: ", i, j);
      scanf("%d", &vetor[i][j]);
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d\t", vetor[i][j]);
      soma[j] += vetor[i][j];
    }
    printf("\n");
  }

  for (int i = 0; i < 3; i++) {
    printf("%d\t", soma[i]);
  }

  printf("\n");

  return 0;
}
