#include <stdio.h>

int main() {
  const float PI = 3.1415;
  int altura, raio;

  printf("Entre com raio e a altura do cilindro: ");
  scanf("%d %d", &raio, &altura);

  printf("Volume do cilindro = %f", raio * raio * PI * altura);

  return 0;
}
