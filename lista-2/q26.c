#include <stdio.h>

int main() {
    printf("Decimal  Binario      Octal  Hexadecimal\n");
    printf("----------------------------------------\n");
    
    for (int i = 1; i <= 256; i++) {
        printf("%5d   ", i);
        
        int temp = i;
        int binario[9] = {0};
        int index = 8;
        
        while (temp > 0) {
            binario[index--] = temp % 2;
            temp /= 2;
        }
        
        for (int j = 0; j < 9; j++) {
            printf("%d", binario[j]);
        }
        
        printf("   %3o   %5X\n", i, i);
    }
    
    return 0;
}