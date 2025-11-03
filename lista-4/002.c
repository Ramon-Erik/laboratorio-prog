#include <stdio.h>

int main() {
  int num1, num2;
  int *p1 = &num1, *p2 = &num2;

  puts("val 1: ");
  scanf("%d", p1);

  puts("val 1: ");
  scanf("%d", p2);

  printf("val 1: %d ; val 2: %d\n", *p1, *p2);
  
  *p1 = *p1 ^ *p2;
  *p2 = *p1 ^ *p2;
  *p1 = *p1 ^ *p2;
  
  printf("val 1: %d ; val 2: %d\n", *p1, *p2);
  
  return 0;
}