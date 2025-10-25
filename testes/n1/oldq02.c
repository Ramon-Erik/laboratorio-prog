#include <stdio.h>

int main () {
    int v, n;

    for (int i = 0 ; i < 10; i++) {
        puts("---Um valor");
        scanf("%d", &n);

        if (!i || n > v) {
            v = n;
        }

        printf("\nv: %d \n", v);
    }

    return 0;
}