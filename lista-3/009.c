#include <stdio.h>

#define TAM 3 

int main () {
  int matriz[TAM][TAM];
  
  for (char i = 0; i < TAM; i++) {
    for (char j = 0; j < TAM; j++ ) {
      printf("elemento [%d, %d] aí patrão: ", i, j);
      scanf("%d", &matriz[i][j]);
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
  
  printf("diagonal principal: \n");
  for (char i = 0; i < TAM; i++) {
    for (char j = 0; j < TAM; j++ ) {
      if (i == j) {
        printf("%d, ", matriz[i][j]);
      }
    }
  }
  
  printf(":)\n");
  
  return 0;
}