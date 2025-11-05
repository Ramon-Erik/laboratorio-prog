#include <stdio.h>

#define TAM 10

int main() {
  char s1[TAM], s2[TAM], *ps1 = s1, *ps2 = s2;

  puts("s1:");
  fgets(ps1, TAM, stdin);
  
  for (char i = 0; i<TAM; i++) {
    *(ps2 + i) = *(ps1 +i);

    if (*(ps1 + i) == '\0') {
      break;
    }
  }

  puts(ps2);

  return 0;
}