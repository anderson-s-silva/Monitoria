/**
* @file aula12-5.c
* @author Anderson Soares da Silva
* @date 28 Mar 2021
* @brief  exercicio 5 aula 12
*/
// @Muriel: Deixar o enunciado como comentário no inicio
#include <stdio.h>
#include <stdlib.h>

int main(){
  int matrizA[2][3];
  int matrizB[3][2];
  int matrizC[2][2];
  int aux = 0;
  printf("Insira valores para a matrizA\n");
  for (int l = 0; l < 2; l++){
    for (int c = 0; c < 3; c++){
      printf("[%d][%d] = ", l, c);
      scanf("%d", &matrizA[l][c]);
    }
  }
  printf("Insira valores para a matrizB\n");
  for (int l = 0; l < 3; l++){
    for (int c = 0; c < 2; c++){
      printf("[%d][%d] = ", l, c);
      scanf("%d", &matrizB[l][c]);
    }
  }

  for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++) {
			matrizC[i][j] = 0;
			for(int x = 0; x < 3; x++) {
				aux +=  matrizA[i][x] * matrizB[x][j];
			}
			matrizC[i][j] = aux;
			aux = 0;
		}
	}

  printf("MatrizC:\n");
  for (int l = 0; l < 2; l++){
    for (int c = 0; c < 2; c++){
      printf("[%d]", matrizC[l][c]);
    }
    printf("\n");
  }
  return 0;
}
