#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define MAX 110

void * findPar(int *vetor, int *pares, int tam) ;

int main() {
  int vetor[TAM], *v = vetor ;
  int pares[2], *p = pares ;

  srand(time(NULL));
  for (char i = 0 ; i < TAM; i++) {
    *(v + i) = rand() % MAX;
  }
  
  for (char i = 0 ; i < TAM; i++) {
    printf("%d, ", *(v + i));
  }
  printf("\n");
  
  int quant_par = findPar(v, p, TAM);
  if (quant_par >= 0) {
    for (char i = 0 ; i < 2; i++) {
      printf("%d, ", *(p + i));
    }
    printf("\n");
  } else {
    printf("sem elementos pares\n");
  }

  return 0;
}

void * findPar(int *vetor, int *pares, int tam) {
  char flag = 0;
  for (char i = 0; i < tam; i++) {
    if (!(*(vetor + i) % 2)) {
      *pares = *(vetor + i);
      flag++;
      break;
    }
  }
  
  for (char i = tam - 1; i >= 0; i--) {
    if (!(*(vetor + i) % 2)) {
      *(pares + 1) = *(vetor + i);
      flag++;
      break;
    }
  }
  return flag;
}