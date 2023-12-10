#include <stdio.h>

int main(void) {
  int vetor[100], contador = 0, valor = 1;

  while (contador < 100) {
    if (valor % 7 != 0) {
      vetor[contador] = valor;
      contador++;
    }
    valor++;
  }

  for (int i = 0; i < sizeof(vetor) / sizeof(vetor[0]); i++) {
    printf("%d ", vetor[i]);
  }

  printf("\n");
  return 0;
}
