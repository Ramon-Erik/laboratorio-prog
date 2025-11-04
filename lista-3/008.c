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

  char flag;
  for (char i = 0; i < TAM - 1; i++) {
    
    char flag = 1;
    
    printf("= %d \n", i);
    for (char j = 0; j < TAM - 1 - i; j++) {
      if (nums[j] > nums[j + 1]) {
        nums[j]   = nums[j] ^ nums[j+1];
        nums[j+1] = nums[j] ^ nums[j+1];
        nums[j]   = nums[j] ^ nums[j+1];
        
        flag = 0;
      }
    }

    if (flag)
      break;
    
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