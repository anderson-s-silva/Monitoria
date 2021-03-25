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
  int n = 0;
  printf("Insira o tamanho\n");
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      printf("#");
    }
    printf("\n");
  }
  return 0;
}
