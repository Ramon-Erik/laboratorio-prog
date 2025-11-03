#include <stdio.h>

#define TAM 10

int main() {
  char frase[TAM], tamanho = 0, *f = frase, *t = &tamanho;
  
  puts("frase: ");
  fgets(frase, TAM, stdin);

  char i = 0;
  while (1) {
    if (*(f + i) != '\n') {
      printf("%d %c %d\n", i, *(f + i), *(t));
      (*t)++;
    }
    if (*(f + i) == '\0') {
      break;
    }
    
    i++;
  }
  
  printf("a sua frase tem %d caractere(s)\n", *t);

  return 0;
}