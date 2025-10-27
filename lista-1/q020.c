#include <stdio.h>

int main() {
  int x, y;
  
  puts("valores a e b:");
  scanf("%d%d", &x,&y);

  printf("%d", x);
  printf(x % y ? " não é " : " é ");
  printf("multiplo de %d\n", y);
}