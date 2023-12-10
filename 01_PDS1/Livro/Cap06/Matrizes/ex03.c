#include <stdio.h>

int main(void) {
  int vetor[5][5];

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      vetor[i][j] = i == j ? 1 : 0;
    }
  }

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      printf("%d ", vetor[i][j]);
    }
    printf("\n");
  }

  return 0;
}

