#include <stdio.h>

int main() {
  int num, contador = 0;

  printf("Digite um valor inteiro: ");
  scanf("%d", &num);

  while (contador <= num) {
    printf("%d ", contador);
    contador++;
  }

  printf("\n");
  return 0;
}
