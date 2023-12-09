#include <stdio.h>

int main(void) {
  int vetor[10];
  int pares = 0;

  for (int i = 0; i < 10; i++) {
    printf("Entre com um valor para a posição %d: ", i);
    scanf("%d", &vetor[i]);
    if (vetor[i] % 2 == 0) {
      pares++;
    }
  }

  printf("Quantidade de números pares digitados: %d\n", pares);

  return 0;
}
