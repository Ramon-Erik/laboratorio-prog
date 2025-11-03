#include <stdio.h>

int main() {
  int num = 0, maior = 0;
  int *n = &num, *m = &maior;

  do {
    puts("\nDiga um número (stop: 0) ");
    scanf("%d", n);

    if (!*n && !*m || *n > *m) {
      *m = *n;
    }
    printf("o maior, so far: %d\n", *m);
  } while (*n != 0);

  return 0;
}