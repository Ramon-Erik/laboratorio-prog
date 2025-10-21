#include <stdio.h>
#include <math.h>

// para compilar este arquivo use <gcc q025.c -o main.e -lm>

int main() {
  float x, y, a, b, media;
  puts("Informe um ponto x e y: ");
  scanf("%f%f", &x,&y);
  puts("Informe um ponto a e b: ");
  scanf("%f%f", &a,&b);
  
  media = sqrt(pow(x-a, 2)+pow(y-b, 2));

  printf("A distância entre (%.2f, %.2f) e (%.2f, %.2f) é %.2f unidades.\n", x,y,a,b, media);

  return 0;
}