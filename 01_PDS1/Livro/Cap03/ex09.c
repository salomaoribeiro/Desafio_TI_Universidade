#include <stdio.h>
const float PI = 3.1415;

int main(int argc, char *argv[]) {
  float graus, radianos;

  printf("Digite o valor do angulo em graus: ");
  scanf("%f", &graus);

  radianos = graus * PI / 180;
  printf("%f graus equivale a %f radianos\n", graus, radianos);
  return 0;
}
