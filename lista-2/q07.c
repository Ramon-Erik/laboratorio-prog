#include <stdio.h> 

int main () {
    int num, den;

    puts("O numerador: ");
    scanf("%d", &num);
    do {
        puts("O denominador: ");
        scanf("%d", &den);
    } while (!den);

    printf("%d/%d res: %.2f\n",num, den, ((float) num / den));
    return 0;
}