#include <stdio.h>

int main() {
  int valor;
  puts("Valor de três digitos: ");
  scanf("%d", &valor);

  printf("valor invertido: %d%d%d\n", valor%10, (valor/10)%10, valor/100 );
  return 0;
}