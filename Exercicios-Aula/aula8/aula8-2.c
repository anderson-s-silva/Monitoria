/**
* @file ex2.c
* @author Anderson Soares da Silva
* @date 13 Mar 2021
* @brief  exercicio 2 aula 8
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL,"");
  int limite = 100;
  while(limite > 0){
    printf("[%d]\n", limite);
    limite--;
  }

  return 0;
}
