#include <stdio.h>

int main() {
    int numero, temp, count = 0;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    
    temp = numero;
    
    while (temp != 0) {
        if (temp % 10 == 7) {
            count++;
        }
        temp /= 10;
    }
    
    printf("O numero %d possui %d digitos 7\n", numero, count);
    
    return 0;
}