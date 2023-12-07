#include <stdio.h>

int main() {
  int num, contador = 1;

  printf("Entre com um valor inteiro: ");
  scanf("%d", &num);

  for (int i = 1; i <= num;) {

    if (contador % 2 != 0) {
      i++;
      printf("%d ", contador);
    }

    contador++;
  }

  printf("\n");
  return 0;
}
