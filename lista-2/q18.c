#include <stdio.h>

int main() {
    unsigned long long graos = 0;
    unsigned long long graos_quadro = 1;
    
    printf("Quadro  Graos no quadro  Total acumulado\n");
    printf("----------------------------------------\n");
    
    for (int quadro = 1; quadro <= 64; quadro++) {
        graos += graos_quadro;
        printf("%4d   %15llu   %15llu\n", quadro, graos_quadro, graos);
        graos_quadro *= 2;
    }
    
    printf("\nTotal final de graos: %llu\n", graos);
    
    return 0;
}