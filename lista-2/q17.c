#include <stdio.h>

int main() {
    printf("Celsius  Fahrenheit\n");
    printf("-------------------\n");
    
    for (int celsius = 10; celsius <= 100; celsius += 10) {
        float fahrenheit = (celsius * 9.0 / 5.0) + 32;
        printf("%4d°C   %6.1f°F\n", celsius, fahrenheit);
    }
    
    return 0;
}