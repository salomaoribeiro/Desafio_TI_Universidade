#include <stdio.h>

int main(void) {
  int valor, resultado = 0;

  for (int i = 1; i <= 10; i++) {
    printf("Digite o %d valor: ", i);
    scanf("%d", &valor);
    resultado += valor;
  }
  printf("Soma: %d\n", resultado);

  return 0;
}
