#include <stdio.h>

int main(void) {
  int vetor[3][3], linha, coluna, soma = 0;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("Entre com o valor para vetor[%d][%d]: ", i, j);
      scanf("%d", &vetor[i][j]);
    }
  }

  linha = 0, coluna = 2;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", vetor[i][j]);
      if (linha == i && coluna == j) {
        soma += vetor[i][j];
      }
    }
    linha++;
    coluna--;

    printf("\n");
  }

  printf("Soma da diagnal secundária: %d\n", soma);

  return 0;
}
