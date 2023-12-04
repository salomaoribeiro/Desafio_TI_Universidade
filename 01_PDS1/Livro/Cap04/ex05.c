#include <math.h>
#include <stdio.h>

int main() {
  float valor;

  printf("Entre com um valor inteiro: ");
  scanf("%f", &valor);

  if (valor > 0) {
    printf("%f ao quadrado = %f\n", valor, pow(valor, 2.0));
    printf("%f ao quadrado = %f\n", valor, sqrt(valor));
  } else {
    printf("O valor não é positivo.\n");
  }

  return 0;
}
