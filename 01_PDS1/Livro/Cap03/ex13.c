#include <math.h>
#include <stdio.h>

int main() {
  int lado1, lado2;
  float hipotenusa;

  printf("Entre com os lados do triângulo: ");
  scanf("%d %d", &lado1, &lado2);

  hipotenusa = sqrt(lado1 * lado1 + lado2 * lado2);

  printf("Hipotenusa: %f\n", hipotenusa);

  return 0;
}
