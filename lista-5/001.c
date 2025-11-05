#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define MAX 11

int findPar(int *, int );

int main() {
  int vetor[TAM], *v = vetor ;

  srand(time(NULL));
  for (char i = 0 ; i < TAM; i++) {
    *(v + i) = rand() % MAX;
  }
  
  for (char i = 0 ; i < TAM; i++) {
    printf("%d, ", *(v + i));
  }
  printf("\n");

  int pos_par = findPar(v, TAM);
  if (pos_par >= 0) {
    printf("O primeiro elemento par é %d na posição %d\n", *(vetor + pos_par), pos_par);
  } else {
    printf("sem elementos pares\n");
  }

  return 0;
}

int findPar(int *vetor, int tam) {
  for (char i = 0; i < tam; i++) {
    if (!(*(vetor + i) % 2)) {
      return i;
    }
  }
  
  return -1;
}