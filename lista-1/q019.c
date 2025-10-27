#include <stdio.h>

int main () {
  int num;
  
  puts("num: ");
  scanf("%d", &num);

  printf("%d é %s", num, num % 2 ? "ímpar" : "par");
  puts(" ");
  
  return 0;
}