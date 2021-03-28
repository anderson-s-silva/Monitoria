/**
* @file aula12-5.c
* @author Anderson Soares da Silva
* @date 28 Mar 2021
* @brief  exercicio 5 aula 12
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  int matrizA[2][3];
  int matrizB[2][3];
  int matrizC[2][3];
  printf("Insira valores para a matrizA\n");
  for (int l = 0; l < 2; l++){
    for (int c = 0; c < 3; c++){
      printf("[%d][%d] = ", l, c);
      scanf("%d", &matrizA[l][c]);
    }
  }
  printf("Insira valores para a matrizB\n");
  for (int l = 0; l < 2; l++){
    for (int c = 0; c < 3; c++){
      printf("[%d][%d] = ", l, c);
      scanf("%d", &matrizB[l][c]);
    }
  }
  printf("Matriz soma\n");
  for (int l = 0; l < 2; l++){
    for (int c = 0; c < 3; c++){
      matrizC[l][c] = matrizA[l][c] + matrizB[l][c];
      printf("[%d]", matrizC[l][c]);
    }
    printf("\n");
  }
  return 0;
}
