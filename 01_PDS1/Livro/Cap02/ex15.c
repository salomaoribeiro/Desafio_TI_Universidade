#include <stdio.h>

int main() {
  char c;
  int valorinteiro;
  float valorfloat;

  printf("Entre com 1 char, 1 int e 1 float: ");

  scanf("%c %d %f", &c, &valorinteiro, &valorfloat);

  printf("%c %d %f\n", c, valorinteiro, valorfloat);
  printf("%c\t%d\t%f\n", c, valorinteiro, valorfloat);
  printf("%c\n%d\n%f\n", c, valorinteiro, valorfloat);

  return 0;
}
