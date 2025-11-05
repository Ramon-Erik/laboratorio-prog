#include <stdio.h>

#define TAM 10

int main() {
  char pal[TAM], letra, *p = pal, *l = &letra;

  puts("frase");
  fgets(p, TAM, stdin);
  
  puts("letra");
  scanf(" %c", l);

  char cont = 0;
  for (char i = 0; i < TAM; i++) {
    if (*(p + i) == *l) {
      cont++;
    }
  }

  printf("a letra '%c' apareceu %d vezes\n", *l, cont);  

  return 0; 
}