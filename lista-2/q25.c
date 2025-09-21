#include <stdio.h>

int main() {
    int termos;
    double pi = 0.0;
    int sinal = 1;
    
    printf("Termos  Valor de π\n");
    printf("------------------\n");
    
    for (int i = 1; i <= 1000; i++) {
        pi += sinal * 4.0 / (2 * i - 1);
        sinal *= -1;
        
        if (i % 100 == 0 || i <= 10) {
            printf("%4d    %10.8f\n", i, pi);
        }
    }
    
    return 0;
}