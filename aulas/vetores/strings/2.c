#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 20

int main() {
  // strcpy -> copia um valor para colocar em uma variavel
  // strcat -> colar uma string na outra
  // strlen -> passa a quantidade de caracteres dentro da str
  // strcmp -> fala se a string 1 é estritamente igual a string 2

  // a lib locale com setlocale deixa usar acento

  setlocale(LC_ALL, "Portuguese");

  char origenes[TAM] = {"olá, mundo"};
  char destino[TAM];
  puts("origem: ");
  puts(origenes);

  puts("destino: ");
  puts(destino);
  
  strcpy(destino, origenes);
  puts("destino depois strcpy: ");
  puts(destino);

  return 0;
}