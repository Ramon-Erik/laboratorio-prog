#include <stdio.h>

int main() {
    int A, B, inicio, fim, count = 0;
    
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
        if (i % 3 == 0) {
            count++;
        }
    }
    
    printf("Quantidade de numeros divisiveis por 3 entre %d e %d: %d\n", inicio, fim, count);
    
    return 0;
}