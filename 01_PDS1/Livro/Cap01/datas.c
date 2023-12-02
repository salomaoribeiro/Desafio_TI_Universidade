#include <stdio.h>
#include <time.h>

int main() {
  time_t tempo;
  struct tm *infotempo;
  char texto[80];
  time(&tempo);
  infotempo = localtime(&tempo);
  strftime(texto, 80, "Hora atual %I:%M %p.", infotempo);
  puts(texto);

  return 0;
}
