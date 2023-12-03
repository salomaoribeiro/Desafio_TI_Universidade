#include <stdio.h>

int main() {
  float celsius, fahren;

  printf("Entre com a temperatura em Celsius: ");
  scanf("%f", &celsius);

  printf("%f graus Celcius = %f graus em Fahrenheit\n", celsius,
         celsius * (9.0 / 5.0) + 32);
  return 0;
}
