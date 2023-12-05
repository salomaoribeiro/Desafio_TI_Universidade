#include <stdio.h>

int main() {
  float altura, peso;

  printf("Entre com a altura: ");
  scanf("%f", &altura);

  printf("Entre com o peso: ");
  scanf("%f", &peso);

  if (altura < 1.2) {
    if (peso <= 60) {
      printf("A\n");
    } else if (peso <= 90) {
      printf("D\n");
    } else {
      printf("G\n");
    }
  } else if (altura < 1.77) {
    if (peso <= 60) {
      printf("B\n");
    } else if (peso <= 90) {
      printf("E\n");
    } else {
      printf("H\n");
    }
  } else {
    if (peso <= 60) {
      printf("C\n");
    } else if (peso <= 90) {
      printf("F\n");
    } else {
      printf("I\n");
    }
  }
  return 0;
}
