#include <stdio.h>


int main() {
 unsigned int num;
 long unsigned int fat = 1;


 puts("Informe um número ");
 scanf("%d", &num);


 if (num == 0 || num == 1) {
   printf("Fatorial: 1 \n");
   return 1;
 }
 if (num < 0)  {
   printf("Fatorial: indefinido");
   return 0;
 }


 for (int i = num; i > 0; i--) {
   fat *= i;
 }


 printf("Fatorial: %lu \n", fat);
 return fat;
}
