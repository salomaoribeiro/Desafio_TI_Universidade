#include <stdio.h>

int main() {
  int x, y, z, op;
  float result;

  printf("Entre com 3 valores inteiros e positivos: ");
  scanf("%d %d %d", &x, &y, &z);

  printf("Entre com a operação (1-4): ");
  scanf("%d", &op);

  switch (op) {
  case 1: {
    result = z * y * z;
    printf("Média Geométrica");
    printf("Resultado: %f\n", result);
    break;
  }
  case 2: {
    result = (x + 2 * y + 3 * z) / 6.0;
    printf("Média Ponderada");
    printf("Resultado: %f\n", result);
    break;
  }
  case 3: {
    result = 1.0 / (1.0 / x + 1.0 / y + 1.0 / z);
    printf("Média Harmônica");
    printf("Resultado: %f\n", result);
    break;
  }
  case 4: {
    result = (x + y + z) / 3.0;
    printf("Média Aritimética");
    printf("Resultado: %f\n", result);
    break;
  }
  default:
    printf("Operação inválida.\n");
  }

  return 0;
}
