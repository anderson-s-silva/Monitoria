/**
* @file aula20-4.c
* @author Anderson Soares da Silva
* @date 30 Abr 2021
* @brief  exercicio 4 aula 20
*/

/*
Escreva uma função que receba como parâmetro um valor L e um valor C e retorne
o ponteiro para uma matriz alocada dinamicamente contendo L linhas e C colunas.
Essa matriz deve ser inicializada com o valor 0 em todas as suas posições.
*/

#include <stdio.h>
#include <stdlib.h>

int **aloca(int l, int c){
  int **ptr = malloc(l * sizeof(int));
  for(int i = 0; i < c; i++){
    ptr[i] = (int*)malloc(c*sizeof(int));
  }
  for(int i = 0; i < l; i++){
    for(int j = 0; j < c; j++){
      ptr[i][j] = 0;
    }
  }
  return ptr;
}

int main(int argc, char const *argv[]) {
  int l, c;
  int **ptr;
  printf("Insira um valor para L e em seguida para C\n");
  scanf("%d %d", &l, &c);
  ptr = aloca(l, c);
  for(int i = 0; i < l; i++){
    for(int j = 0; j < c; j++){
      printf("%d ", ptr[i][j]);
    }
    printf("\n");
  }
  return 0;
}
