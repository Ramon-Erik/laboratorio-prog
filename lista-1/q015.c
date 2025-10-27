#include <stdio.h>

int main() {
  float valor_hora_aula, horas_trabalhadas_mes;

  puts("Horas do mês");
  scanf("%f", &horas_trabalhadas_mes);
  puts("valor do mês");
  scanf("%f", &valor_hora_aula);
  
  float sal_bruto = valor_hora_aula * horas_trabalhadas_mes;
  float desconto_INSS, sal_liquido;
  
  puts("percentual de desconto do INSS em numero inteiro");
  scanf("%f", &desconto_INSS);

  sal_liquido = sal_bruto * (100 - desconto_INSS)/100;

  printf("valor bruto: %.2f\n", sal_bruto);
  printf("valor liquido: %.2f\n", sal_liquido);


  return 0;
}