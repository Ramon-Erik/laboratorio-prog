#include <stdio.h>


int main() {
 int dia_semana;


 puts("Informe um dia da semana: ");
 scanf("%d", &dia_semana);


 while (dia_semana != 0) {
   switch (dia_semana) {
   case 1:
     puts("domingo");
     break;
   case 2:
     puts("segunda");
     break;
   case 3:
     puts("terça");
     break;
   case 4:
     puts("quarta");
     break;
   case 5:
     puts("quinta");
     break;
   case 6:
     puts("sexta");
     break;
   case 7:
     puts("sábado");
     break;
   default:
     puts("dia inválido");
     break;
   }
   printf("\nInforme um dia da semana: ");
   scanf("%d", &dia_semana);
 }
   puts("Saindo... Obrigado por usar!");


 return 0;
}