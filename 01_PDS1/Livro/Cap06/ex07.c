#include <stdio.h>

int main(void) {
  int vetor[10];
  int maior, menor;

  for (int i = 0; i < sizeof(vetor) / sizeof(vetor[0]); i++) {
    printf("Entre com o valor %d: ", i + 1);
    scanf("%d", &vetor[i]);
  }
  menor = maior = vetor[0];

  for (int i = 1; i < sizeof(vetor) / sizeof(vetor[0]); i++) {
    if (vetor[i] > maior)
      maior = vetor[i];
    if (vetor[i] < menor)
      menor = vetor[i];
  }

  printf("Maior: %d\n", maior);
  printf("Menor: %d\n", menor);

  return 0;
}
