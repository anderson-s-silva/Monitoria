/**
* @file ex5.c
* @author Anderson Soares da Silva
* @date 13 Mar 2021
* @brief  exercicio 5 aula 10
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL,"");
  int numero = 0;
  int fat = 0;
  int exibe = 0;
  printf("Insira um número para que seu fatorial seja calculado\n");
  scanf("%d", &numero) ;
  exibe = numero;
  for(fat = 1; numero > 1; numero -= 1)
  {
    fat = fat * numero;
  }
  printf("[%d]! = [%d]\n", exibe, fat);
  return 0;
}
