#include <stdio.h>

int main() {
    unsigned char X, Y;
    
    printf("Digite X (0-255): ");
    scanf("%hhu", &X);
    
    printf("Digite Y (5-250): ");
    scanf("%hhu", &Y);
    
    if (Y < 5) {
        printf("Y deve ser maior ou igual a 5\n");
        return 1;
    }
    
    printf("\nValores originais:\n");
    printf("X = %hhu (%08b)\n", X, X);
    printf("Y = %hhu (%08b)\n", Y, Y);
    
    printf("\nElementos anteriores a Y:\n");
    for (int i = 1; i <= 4; i++) {
        unsigned char elemento = Y - i;
        unsigned char modificado = (elemento & 0xFE) | ((X >> (i-1)) & 0x01);
        printf("Y-%d: %hhu (%08b) -> %hhu (%08b)\n", i, elemento, elemento, modificado, modificado);
    }
    
    printf("\nElementos posteriores a Y:\n");
    for (int i = 1; i <= 4; i++) {
        unsigned char elemento = Y + i;
        unsigned char modificado = (elemento & 0xFE) | ((X >> (i+3)) & 0x01);
        printf("Y+%d: %hhu (%08b) -> %hhu (%08b)\n", i, elemento, elemento, modificado, modificado);
    }
    
    return 0;
}