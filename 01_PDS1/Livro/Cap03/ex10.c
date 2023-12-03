#include <stdio.h>

int main() {
  const float valor = 780000.0;
  float g1, g2, g3;

  g1 = valor * 0.46;
  g2 = valor * 0.32;
  g3 = valor - (g1 + g2);

  printf("Ganhador 1 = R$ %f\n", g1);
  printf("Ganhador 2 = R$ %f\n", g2);
  printf("Ganhador 3 = R$ %f\n", g3);
  return 0;
}
