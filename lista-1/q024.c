#include <stdio.h>

int main() {
  int tempo;

  puts("Fale o tempo em segundos: ");
  scanf("%d", &tempo);

  printf("Tem-se: ");
 
  if ((tempo / 3600) > 0) 
    printf("%d hora(s) ", tempo / 3600);
  if ((tempo / 60) > 0) 
    printf("%d minuto(s) ", tempo / 60);
  if ((tempo % 60) > 0) 
    printf("%d segundo(s)", tempo % 60);

    printf("\n");
}