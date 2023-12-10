#include <stdio.h>

int main(void) {
  int vetor[10][10];

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (i < j) {
        vetor[i][j] = 2 * i + 7 * j - 2;
      } else if (i == j) {
        vetor[i][j] = 3 * (i * i) - 1;
      } else {
        vetor[i][j] = 4 * (i * i * i) + 5 * (j * j) + 1;
      }
    }
  }

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      printf("%d\t", vetor[i][j]);
    }
    printf("\n");
  }

  return 0;
}
