/**
* @file aula12-1.c
* @author Anderson Soares da Silva
* @date 28 Mar 2021
* @brief  exercicio 1 aula 12
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  int matriz[5][5];
  for (int l = 0; l < 5; l++){
    for (int c = 0; c < 5; c++){
      if(l == c)
        matriz[l][c] = 1;
      else
        matriz[l][c] = 0;
      printf("[%d]", matriz[l][c]);
    }
    printf("\n");
  }

  return 0;
}
