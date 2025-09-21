#include <stdio.h>

int main() {
    int numero, original, digito, reverso = 0;
    
    printf("Digite um numero de 5 digitos: ");
    scanf("%d", &numero);
    
    original = numero;
    
    digito = numero % 10;
    reverso = reverso * 10 + digito;
    numero /= 10;
    
    digito = numero % 10;
    reverso = reverso * 10 + digito;
    numero /= 10;
    
    digito = numero % 10;
    reverso = reverso * 10 + digito;
    numero /= 10;
    
    digito = numero % 10;
    reverso = reverso * 10 + digito;
    numero /= 10;
    
    digito = numero % 10;
    reverso = reverso * 10 + digito;
    
    if (original == reverso) {
        printf("%d e um palindromo\n", original);
    } else {
        printf("%d nao e um palindromo\n", original);
    }
    
    return 0;
}