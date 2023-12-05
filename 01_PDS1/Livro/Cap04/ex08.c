#include <stdio.h>

int main() {
  int idade;
  printf("Digite a idade: ");
  scanf("%d", &idade);

  switch (idade) {
  case 5:
  case 6:
  case 7:
    printf("Infantil A\n");
    break;
  case 8:
  case 9:
  case 10:
    printf("Infantil B\n");
    break;
  case 11:
  case 12:
  case 13:
    printf("Juvenil A\n");
    break;
  case 14:
  case 15:
  case 16:
  case 17:
    printf("Juvenil B\n");
    break;
  default:
    printf("Sênior.\n");
    break;
  }
  return 0;
}
