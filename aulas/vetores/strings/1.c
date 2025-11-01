#include <stdio.h>

#define TAM 4

int main()
{
  char texto[TAM]; // guarda text até a posição 8, na nona vem o \0

  // printf("Digite um texto: ");
  // scanf("%s", texto);
  // fflush(stdin); // limpa o o que vem do teclado
  // // não considera o espaço, pode dar leak de dado

  // printf("\n\n%s\n\n", texto);

  // printf("Digite um texto: ");
  // scanf(" %9[^\n]s", texto);
  // fflush(stdin);

  // printf("\n\n%s\n\n", texto);
  // printf("\n\n%s\n\n", texto);
  // printf("\n\n%s\n\n", texto);

  printf("Lendo valores com fgets: \n");
  fgets(texto, TAM, stdin);

  printf("Texto: ");
  puts(texto);

  
  printf("De novo: ");
  fgets(texto, TAM, stdin);
  puts(texto);

  return 0;
}