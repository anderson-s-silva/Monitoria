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
  for(int i = 1; i<=10; ++i){
    for(int j = 1; j<=10; j++){
      printf("%ix%i = %i\n", i, j, i * j);
    }
    printf("\n");
  }
  return 0;
}
