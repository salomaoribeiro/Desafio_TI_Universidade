#include <stdio.h>

int main(void) {
  int vetor[10];
  int negativo = 0, positivo = 0;

  for (int i = 0; i < sizeof(vetor) / sizeof(vetor[0]); i++) {
    printf("Entre com o valor %d: ", i + 1);
    scanf("%d", &vetor[i]);
  }

  for (int i = 0; i < sizeof(vetor) / sizeof(vetor[0]); i++) {
    if (vetor[i] >= 0)
      positivo++;
    else {
      negativo++;
    }
  }

  printf("Positivos: %d\n", positivo);
  printf("negativo: %d\n", negativo);

  return 0;
}
