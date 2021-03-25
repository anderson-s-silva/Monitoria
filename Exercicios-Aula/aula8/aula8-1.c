/**
* @file ex1.c
* @author Anderson Soares da Silva
* @date 13 Mar 2021
* @brief  exercicio 1 aula 8
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL,"");
  int limite = 1;
  while(limite <= 100 ){
    printf("[%d]\n", limite);
    limite++;
  }
  return 0;
}
