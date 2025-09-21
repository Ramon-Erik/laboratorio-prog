#include <stdio.h>

int main() {
    printf("Quadrados dos multiplos de 4 entre 15 e 90:\n");
    
    for (int i = 16; i <= 90; i += 4) {
        printf("%d² = %d\n", i, i * i);
    }
    
    return 0;
}