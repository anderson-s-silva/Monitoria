/**
* @file ex1.c
* @author Anderson Soares da Silva
* @date 13 Mar 2021
* @brief  exercicio 1 aula 10
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL,"");
  for (int i = 1; i <= 100; i++){
    printf("[%d]\n", i);
  }
  return 0;
}
