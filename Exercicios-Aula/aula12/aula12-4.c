/**
* @file aula12-4.c
* @author Anderson Soares da Silva
* @date 28 Mar 2021
* @brief  exercicio 4 aula 12
*/
// @Muriel: Deixar o enunciado como comentário no inicio

#include <stdio.h>
#include <stdlib.h>

int main(){
  int matrizA[2][3];
  int matrizB[2][3];
  int escalar;
  printf("Insira valores para a matrizA\n");
  for (int l = 0; l < 2; l++){
    for (int c = 0; c < 3; c++){
      printf("[%d][%d] = ", l, c);
      scanf("%d", &matrizA[l][c]);
    }
  }
  printf("Insira o valor do escalar\n");
  scanf("%d", &escalar);
  for (int l = 0; l < 2; l++){
    for (int c = 0; c < 3; c++){
      matrizB[l][c] = matrizA[l][c] * escalar;
    }
  }
  printf("MatrizB:\n");
  for (int l = 0; l < 2; l++){
    for (int c = 0; c < 3; c++){
      printf("[%d]", matrizB[l][c]);
    }
    printf("\n");
  }



  return 0;
}
