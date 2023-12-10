#include <stdio.h>

int main(void) {
  int vetor[3][3], menor;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("Entre com o valor %d: ", i + 1);
      scanf("%d", &vetor[i][j]);
    }
  }

  menor = vetor[0][0];

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", vetor[i][j]);
      if (vetor[i][j] < menor) {
        menor = vetor[i][j];
      }
    }
    printf("\n");
  }

  printf("Menor valor: %d\n", menor);

  return 0;
}
