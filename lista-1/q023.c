#include <stdio.h>

int main() {
  int x, valor;
  puts("Valor x e o expoente");
  scanf("%d%d", &x, &valor);

  printf("o resultado de %d vezes 2 elevado a %d é %d\n", x, valor, x << valor);
  return 0;
}