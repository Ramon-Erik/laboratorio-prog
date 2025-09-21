#include <stdio.h>

int main() {
    int numero, maior, menor, primeiro = 1;
    
    printf("Digite numeros inteiros (negativo par para sair):\n");
    
    while (1) {
        scanf("%d", &numero);
        
        if (numero < 0 && numero % 2 == 0) {
            break;
        }
        
        if (primeiro) {
            maior = numero;
            menor = numero;
            primeiro = 0;
        } else {
            if (numero > maior) {
                maior = numero;
            }
            if (numero < menor) {
                menor = numero;
            }
        }
    }
    
    if (!primeiro) {
        printf("Maior: %d, Menor: %d\n", maior, menor);
        printf("Produto: %d\n", maior * menor);
    } else {
        printf("Nenhum numero valido foi digitado.\n");
    }
    
    return 0;
}