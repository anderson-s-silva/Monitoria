/**
* @file ex2.c
* @author Anderson Soares da Silva
* @date 13 Mar 2021
* @brief  exercicio 2 aula 10
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL,"");
  for (int i = 100; i > 0; i--){
    printf("[%d]\n", i);
  }
  return 0;
}
