/**
* @file ex4.c
* @author Anderson Soares da Silva
* @date 13 Mar 2021
* @brief  exercicio 4 aula 8
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL,"");
  int limite = 240 + 1; //desconsiderando o 240
  while(limite < 730){
    if(limite % 2 == 0)
    printf("[%d]\n", limite);
    limite++;
  }

  return 0;
}
