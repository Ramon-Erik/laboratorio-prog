#include <stdio.h>

int main() {
    int x = 5, y;
    
    printf("Valor inicial: x = %d\n", x);
    
    y = x--;
    printf("Pos-decremento: y = x-- -> y = %d, x = %d\n", y, x);
    
    x = 5;
    y = --x;
    printf("Pre-decremento: y = --x -> y = %d, x = %d\n", y, x);
    
    return 0;
}