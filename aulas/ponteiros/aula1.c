#include <stdio.h>

int main() {
  int num = 0, *ptr;
  ptr = &num;

  printf("número: %d\n", *ptr);
  printf("ponteiro: %p\n", ptr);
  printf("endereco ponteiro: %p\n", &ptr);
  return 0;
}