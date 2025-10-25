#include <stdio.h>

int main () {
    float entrada, x, y=1, lim = 0.00001;
    
    puts("Diga um numero: ");
    scanf("%f", &entrada);

    x = entrada;
    while (((x - y) > lim) || ((y - x) > lim)) {
        x = (x + y) / 2;
        y = entrada / x;
    }
    
    printf("valor final: %.5f \n", x);
    return 0;
}