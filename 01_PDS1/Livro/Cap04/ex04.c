#include <stdio.h>

int main() {
  float salario, prestacao;

  printf("Entre com o valor do salário: R$ ");
  scanf("%f", &salario);

  printf("Entre com o valor da prestação: R$ ");
  scanf("%f", &prestacao);

  if (prestacao > salario * 0.2) {
    printf("Empréstimo não concedido.\n");
  } else {
    printf("Empréstimo concedido.\n");
  }
  return 0;
}
