#include <stdio.h>

int main(void) {
  int linhas, contador = 1;

  printf("Quantas linhas imprimir: ");
  scanf("%d", &linhas);

  for (int i = 1; i <= linhas; i++) {
    int valores = i;
    while (valores > 0) {
      printf("%d ", contador);
      contador++;
      valores--;
    }

    printf("\n");
  }

  return 0;
}
