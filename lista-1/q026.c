#include <stdio.h>
#include <math.h>

// para compilar esse código, talvez seja necessário utilizar a falg -lm
// assim: gcc q026.c -o main.e -lm

int main() {
  float num1, num2, num3;

  puts("Número 1: ");
  scanf("%f", &num1);
  
  puts("Número 2: ");
  scanf("%f", &num2);

  puts("Número 3: ");
  scanf("%f", &num3);

  printf("Para %.2f, %.2f e %.2f temos:\n", num1,num2,num3);
  printf("Média aritmética: %.5f\n", (num1 + num2 + num3) / 3);
  printf("Média geométrica: %.5lf\n", pow(num1*num2*num3, (float) 1/3));
}