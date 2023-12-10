#include <stdio.h>

int main(void) {
  int vetor[8];
  int x, y;

  for (int i = 0; i < sizeof(vetor) / sizeof(vetor[0]); i++) {
    printf("Entre com o valor %d: ", i);
    scanf("%d", &vetor[i]);
  }

  printf("Entre com uma posição: ");
  scanf("%d", &x);

  printf("Entre com outra posição: ");
  scanf("%d", &y);

  printf("Soma dos valores: %d\n", vetor[x] + vetor[y]);

  return 0;
}
