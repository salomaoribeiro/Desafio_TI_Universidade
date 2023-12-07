#include <stdio.h>

int main(void) {
  int quantidade;
  float resultado = 0;

  printf("Entre qual a quantidade a ser calculada: ");
  scanf("%d", &quantidade);

  for (int i = 1; i <= quantidade; i++) {
    resultado += 1.0 / i;
  }

  printf("Resultado: %f\n", resultado);

  return 0;
}
