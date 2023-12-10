#include <stdio.h>

int main(void) {
  int vetorA[10], vetorB[10], vetorC[10];

  for (int i = 0; i < sizeof(vetorA) / sizeof(vetorA[0]); i++) {
    printf("Entre com o valor %d (Vetor A): ", i + 1);
    scanf("%d", &vetorA[i]);
  }

  for (int i = 0; i < sizeof(vetorB) / sizeof(vetorB[0]); i++) {
    printf("Entre com o valor %d (Vetor B): ", i + 1);
    scanf("%d", &vetorB[i]);
  }

  for (int i = 0; i < sizeof(vetorA) / sizeof(vetorA[0]); i++) {
    vetorC[i] = vetorA[i] + vetorB[i];

    printf("Soma de vetorA[%d] + vetorB[%d] = %d\n", vetorA[i], vetorB[i],
           vetorC[i]);
  }

  printf("\n");
  return 0;
}
