#include <stdio.h>

int main() {
  const float PI = 3.1415;
  int raio;

  printf("Entre com o valor do raio do círculo: ");
  scanf("%d", &raio);

  printf("A área do círculo de raio %d = %f\n", raio, raio * raio * PI);
  return 0;
}
