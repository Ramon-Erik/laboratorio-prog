#include <stdio.h>

#define PI 3.14159

int main() {
  float r;

  puts("raio: ");
  scanf("%f", &r);

  printf("diâmetro: %.6f\n", 2*r);
  printf("circunfereência: %.6f\n", 2*PI*r);
  printf("área: %.6f\n", PI*(r*r));

  return 0;
}