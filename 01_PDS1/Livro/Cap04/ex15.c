#include <math.h>
#include <stdio.h>

int main() {
  float a, b, c, delta;

  printf(
      "Entre com os coeficientes de a, b e c para a equação do segundo grau: ");
  scanf("%f %f %f", &a, &b, &c);

  if (a == 0) {
    printf("Não é uma equação do segundo grau.\n");
  } else {
    delta = (b * b) - (4 * a * c);

    if (delta < 0) {
      printf("Não existe raiz.\n");
    } else if (delta == 0) {
      printf("Raiz única.\n");
      printf("Raiz: %f\n", (-b + sqrt(delta) / 2 * a));
    } else {
      printf("Existem 2 raizes.\n");
      printf("Raiz 1: %f\n", (-b + sqrt(delta) / 2 * a));
      printf("Raiz 2: %f\n", (-b - sqrt(delta) / 2 * a));
    }
  }
  return 0;
}
