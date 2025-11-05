#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define MAX 10

int main() {
  int vetor[TAM], *p = vetor;

  srand(time(NULL));
  for(char i = 0; i < TAM; i++) {
    *(p + i) = rand() % MAX;
  }
  
  for(char i = 0; i < TAM; i++) {
    printf("%d, ", *(p + i));
  }
  printf("\n");
  
  char flag;
  for (char i = 0; i < TAM - 1; i++) {
    flag = 1;
    for (char j = 0; j < TAM - i - 1; j++) {
      if (*(p + j) > *(p + j + 1)) {
        *(p + j)      = *(p + j) ^ *(p + j + 1);
        *(p + j + 1)  = *(p + j) ^ *(p + j + 1);
        *(p + j)      = *(p + j) ^ *(p + j + 1);
        flag = 0;
      }
    }
    
    if (flag)
    break;
  }
  
  for(char i = 0; i < TAM; i++) {
    printf("%d, ", *(p + i));
  }
  printf("\n");

  return 0;
}