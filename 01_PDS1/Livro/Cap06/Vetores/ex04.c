#include <stdio.h>

int main(void) {
  int A[6] = {1, 0, 5, -2, -5, 7};
  int soma;

  soma = A[0] + A[1] + A[5];

  printf("Soma (A[0], A[1], A[5]: %d\n", soma);

  A[4] = 100;

  for (int i = 0; i < sizeof(A) / sizeof(A[0]); i++) {
    printf("%d\n", A[i]);
  }

  printf("\n");
  return 0;
}
