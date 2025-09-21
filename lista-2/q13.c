#include <stdio.h>

int main() {
    int A, B, inicio, fim, soma = 0;
    
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
    
    for (int i = inicio; i <= fim; i++) {
        if (i % 2 == 0) {
            soma += i;
        }
    }
    
    printf("Soma dos numeros pares entre %d e %d: %d\n", inicio, fim, soma);
    
    return 0;
}