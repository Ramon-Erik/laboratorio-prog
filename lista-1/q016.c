#include <stdio.h>

int main () {
  int num;
  
  puts("valor");
  scanf("%d", &num);

  printf("abs: %d\n", num > 0 ? num : num*(-1));

  return 0;
}