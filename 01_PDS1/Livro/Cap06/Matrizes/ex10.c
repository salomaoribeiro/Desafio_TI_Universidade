#include <stdio.h>

int main(void) {
  int vetor[10][3], contador, valor, menor[3] = {0, 0, 0};

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 3; j++) {
      printf("Entre com a nota para posição [%d][%d]: ", i, j);
      scanf("%d", &vetor[i][j]);
    }
  }

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d\t", vetor[i][j]);
      if (j == 0) {
        contador = 0;
        valor = vetor[i][0];
      } else if (valor > vetor[i][j]) {
        contador = j;
        valor = vetor[i][j];
      }
    }

    menor[contador] += 1;
    printf("\n");
  }

  for (int i = 0; i < 3; i++) {
    printf("%d\t", menor[i]);
  }

  printf("\n");

  return 0;
}
