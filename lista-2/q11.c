#include <stdio.h>

int main() {
    int A, B, inicio, fim;
    
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    
    if (A > B) {
        inicio = B;
        fim = A;
    } else {
        inicio = A;
        fim = B;
    }
    
    printf("Quadrados dos multiplos de 4 entre %d e %d:\n", inicio, fim);
    
    for (int i = inicio; i <= fim; i++) {
        if (i % 4 == 0) {
            printf("%d² = %d\n", i, i * i);
        }
    }
    
    return 0;
}