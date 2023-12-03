#include <stdio.h>

int main() {
  float real, dolar;

  printf("Entre com a quantidade de reais: ");
  scanf("%f", &real);

  printf("Entre com o valor do dolar: ");
  scanf("%f", &dolar);

  printf("R$ %f convertido em dolar equivale a $ %f\n", real, real / dolar);
  return 0;
}
