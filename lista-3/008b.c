#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5

int main() {
  int nums[TAM], min, max;
  
  puts("min: ");
  scanf("%d", &min);

  puts("max: ");
  scanf("%d", &max);

  if (max < min) {
    max = max ^ min;
    min = max ^ min;
    max = max ^ min;
  }

  
  srand(time(NULL));
  for (char i = 0; i < TAM; i++) {
    nums[i] = min + (rand() % (max - min + 1));
  }
  
  printf("um vetor entre [%d, %d] tem-se\n[ ", min, max);
  for (char i = 0; i < TAM; i++) {
    if (i > 1 && !(i % 10)) {
      printf("\n  ");
    } 
    printf("%d", nums[i]);
    if (i != TAM - 1) {
      printf(", ");
      
    } else {
      printf(" ]\n");
    }
  }

  char pos_menor;
  for (char i = 0; i < TAM - 1; i++) {
    pos_menor = i;
    for (char j = i+1; j < TAM; j++) {
      if (nums[j] < nums[pos_menor]) {
        pos_menor = j;
      }
    }
    if (pos_menor != i) {
      nums[i]         = nums[i] ^ nums[pos_menor];
      nums[pos_menor] = nums[i] ^ nums[pos_menor];
      nums[i]         = nums[i] ^ nums[pos_menor];
    }
  }

  puts("ordenando");
  
  printf("\num vetor entre [%d, %d] tem-se\n[ ", min, max);
  for (char i = 0; i < TAM; i++) {
    if (i > 1 && !(i % 10)) {
      printf("\n  ");
    } 
    printf("%d", nums[i]);
    if (i != TAM - 1) {
      printf(", ");
      
    } else {
      printf(" ]\n");
    }
  }
  
  return 0;
}