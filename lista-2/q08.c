#include <stdio.h>

int main() {
    float valor_mercadoria;
    int prestacao;
    
    printf("Digite o valor da mercadoria: R$ ");
    scanf("%f", &valor_mercadoria);
    
    prestacao = (int)(valor_mercadoria / 3);
    
    float entrada = valor_mercadoria - (2 * prestacao);
    
    while (entrada < prestacao) {
        prestacao--;
        entrada = valor_mercadoria - (2 * prestacao);
    }
    
    printf("Entrada: R$ %.2f\n", entrada);
    printf("Prestacoes: 2x R$ %d.00\n", prestacao);
    
    return 0;
}