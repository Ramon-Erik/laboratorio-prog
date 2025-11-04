#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 3 
#define MAX 2 

int main () {
  int matriz[TAM][TAM];
  
  for (char i = 0; i < TAM; i++) {
    for (char j = 0; j < TAM; j++ ) {
      matriz[i][j] = rand() % MAX;
    }
  }
  
  printf("[ \n");
  for (char i = 0; i < TAM; i++) {
    printf("  [");
    for (char j = 0; j < TAM; j++ ) {
      printf("%d, ", matriz[i][j]);
    }
    printf("], \n");
  }
  printf(" ]\n");
  
  int x;
  printf("diz ai teu x que eu te digo um y: \n");
  scanf("%d", &x);

  int y = 0;
  for (char i = 0; i < TAM; i++) {
    for (char j = 0; j < TAM; j++ ) {
      if (matriz[i][j] == x) {
        y++;
      }
    }
  }
  
  printf("y: %d :)\n", y);
  
  return 0;
} 