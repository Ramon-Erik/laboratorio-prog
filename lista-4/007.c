#include <stdio.h>

#define TAM 10

int main() {
  char pal1[TAM], pal2[TAM], juntas[TAM*2];
  char *p_pal1 = pal1, *p_pal2 = pal2, *p_juntas = juntas;

  puts("pal1:");
  fgets(p_pal1, TAM, stdin);

  puts("pal2:");
  fgets(p_pal2, TAM, stdin);

  for (char i = 0; i < TAM; i++) {
    if (*(p_pal1 + i) == '\0') {
      for (char j = 0; j < TAM; j++) {
        *(p_juntas + i) = *(p_pal2 + j);
        i++;
        if (*(p_pal2 + j) == '\0') {
          break;
        }
      }
    } else {
      *(p_juntas + i) = *(p_pal1 + i); 
    }
    
  }

  puts(p_juntas);
}