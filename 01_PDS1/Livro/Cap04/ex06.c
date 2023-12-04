#include <stdio.h>

int main() {
  float altura, pesoideal;
  char sexo;

  printf("Entre com sua altura e sexo: ");
  scanf("%f %c", &altura, &sexo);

  if (sexo == 'm' || sexo == 'f') {
    pesoideal = sexo == 'm' ? (62.1 * altura) - 44.7 : (72.7 * altura) - 58;
    printf("Seu peso ideal é: %f kg\n", pesoideal);
  } else {
    printf("Sexo inválido.\n");
  }

  return 0;
}
