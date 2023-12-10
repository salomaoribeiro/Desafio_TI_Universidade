#include <stdio.h>

int main(void) {
  int vetor[4][4], maior;
  int linha = 0, coluna = 0;

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      printf("Entre com o valor %d: ", i + 1);
      scanf("%d", &vetor[i][j]);
    }
  }

  maior = vetor[0][0];

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%d ", vetor[i][j]);
      if (vetor[i][j] > maior) {
        maior = vetor[i][j];
        linha = i;
        coluna = j;
      }
    }
    printf("\n");
  }

  printf("Maior valor: %d\n", maior);
  printf("Contido na linha: %d - Coluna: %d\n", linha, coluna);

  return 0;
}
