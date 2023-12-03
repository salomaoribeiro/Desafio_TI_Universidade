#include <stdio.h>

int main() {
  float a, b, c, d, media;
  printf("Entre com 4 valores: ");
  scanf("%f %f %f %f", &a, &b, &c, &d);

  media = (a + b + c + d) / 4;

  printf("A média dos valores é: %f\n", media);

  return 0;
}
