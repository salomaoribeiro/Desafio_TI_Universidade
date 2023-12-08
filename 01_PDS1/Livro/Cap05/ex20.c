#include <stdio.h>

int main(void) {
  int quantidade, fatorial;
  float resultado = 0;

  printf("Quantos valores somar? ");
  scanf("%d", &quantidade);

  if (quantidade > 0) {

    for (int i = 1; i <= quantidade; i++) {
      int contador = 1;
      fatorial = 1;

      for (int j = 1; j <= i; j++) {
        fatorial *= j;
      }

      resultado += 1.0 / fatorial;
    }

    printf("Resultado: %f\n", resultado);
  } else {
    printf("Valor inválido.\n");
  }

  return 0;
}
