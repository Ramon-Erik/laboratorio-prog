#include <stdio.h>

int main () {
    int sum = 0, y = 10;
    for (int i = 0; i < y; i++) {
        if (!(i % 2))
            sum += i;
    }
    printf("%d\n", sum);
    return sum;
}