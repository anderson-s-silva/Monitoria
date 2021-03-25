/**
* @file ex7.c
* @author Anderson Soares da Silva
* @date 13 Mar 2021
* @brief  exercicio 7 aula 8
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL,"");
  #include <stdio.h>

  int numero, fatorial,exibe;

  printf("Insira um número: ");
  scanf("%d", &numero);
  exibe = numero; // mostrar no printf

  fatorial = 1;

  while (numero > 0) {
    fatorial *= numero; // fatorial = fatorial * numero
    numero--;
  }

  printf("Fatorial: [%d!] = [%d]\n", exibe, fatorial);

  return 0;
}
