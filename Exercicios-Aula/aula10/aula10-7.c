/**
* @file ex7.c
* @author Anderson Soares da Silva
* @date 13 Mar 2021
* @brief  exercicio 7 aula 10
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
  setlocale(LC_ALL,"");
  int a, b, aux, i, quantidade;
  printf("Quantos numero da sequencia de fibonnaci deseja ver?\n");
  a = 0;
  b = 1;
  scanf("%d", &quantidade);
  printf("Fibonacci:\n");
  printf("1: 1\n"); //primeiro número sempre é 1
  for(i = 0; i < quantidade-1; i++){
    aux = a + b;
    a = b;
      b = aux;
    printf("%d: %d\n", i+2, aux);
  }
  return 0;
} 
