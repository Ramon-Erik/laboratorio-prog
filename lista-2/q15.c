#include <stdio.h>
#include <math.h>

int main() {
    printf("Potencias de 3 (0 a 7):\n");
    for (int expoente = 0; expoente <= 7; expoente++) {
        long resultado = pow(3, expoente);
        printf("3^%d = %ld\n", expoente, resultado);
    }
    return 0;
}