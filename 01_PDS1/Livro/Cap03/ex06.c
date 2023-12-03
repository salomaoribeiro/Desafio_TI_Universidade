#include <stdio.h>

int main() {
  float metro, velocidade;

  printf("Entre com a velocidade em kilometros: ");
  scanf("%f", &velocidade);

  metro = velocidade / 36;

  printf("%f km/h convertido para m/s = %f\n", velocidade, metro);
  return 0;
}
