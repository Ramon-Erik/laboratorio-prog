#include <stdio.h>

int main() {
    int termo1 = 1, termo2 = 1, proximo;
    
    printf("Serie de Fibonacci (20 primeiros termos):\n");
    printf("%d, %d", termo1, termo2);
    
    for (int i = 3; i <= 20; i++) {
        proximo = termo1 + termo2;
        printf(", %d", proximo);
        termo1 = termo2;
        termo2 = proximo;
    }
    printf("\n");
    
    return 0;
}