#include <stdio.h>

int main() {
  int num1,num2, sum;
  int *p1 = &num1, *p2 = &num2, *s = &sum;

  puts("num 1: ");
  scanf("%d", p1);

  puts("num 2: ");
  scanf("%d", p2);

  *s = *p1 + *p2;

  printf("end: %p ; val: %d\n", p1, *p1);
  printf("end: %p ; val: %d\n", p2, *p2);
  printf("end: %p ; val: %d\n", s, *s);

  return 0;
}