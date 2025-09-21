#include <stdio.h>
int main() {
   int num = 1;
   int maior = 0;
   int menor = 0;
   while (num != 0) {
       puts("Informe um valor: ");
       scanf("%d", &num);

       if (menor == 0 && maior == 0) {
        maior = menor = num;
       } else {
        if (num != 0 && num > maior) {
            maior = num;
        }
        if (num != 0 && num < menor) {
            menor = num;
        }
       }
   }
   printf("o maior: %d\n", maior);
   printf("o menor: %d\n", menor);
   return 0;
}
