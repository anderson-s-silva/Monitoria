/**
* @file aula12-2.c
* @author Anderson Soares da Silva
* @date 28 Mar 2021
* @brief  exercicio 2 aula 12
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

  int matriz[3][3];
  int soma_p = 0;
  int soma_s = 0;

  for (int l = 0; l < 3; l++){
    for (int c = 0; c < 3; c++){
      printf("[%d][%d] = ", l, c);
      scanf("%d", &matriz[l][c]);
      if(l == c)
        soma_p += matriz[l][c];
    }
  }
  for(int i=0, j=2; i < 3 && j >= 0; i++, j--)
    soma_s += matriz[i][j];

  printf("\nmatriz digitada:\n");

  for (int l = 0; l < 3; l++){
    for (int c = 0; c < 3; c++){
      printf("[%d]", matriz[l][c]);
    }
    printf("\n");
  }

  printf("\nSoma da diagonal principal: %d\n", soma_p);
  printf("\nSoma da diagonal secundaria: %d\n", soma_s);

  return 0;
}
