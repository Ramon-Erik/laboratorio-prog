#include <stdio.h>

int main() {
    int A, B, inicio, fim, soma = 0, count = 0;
    
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
        soma += i;
        count++;
    }
    
    float media = (float)soma / count;
    
    printf("Media aritmetica entre %d e %d: %.2f\n", inicio, fim, media);
    
    return 0;
}