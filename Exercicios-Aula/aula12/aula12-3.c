/**
* @file aula12-3.c
* @author Anderson Soares da Silva
* @date 28 Mar 2021
* @brief  exercicio 3 aula 12
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  int matriz[5][5];
  int maior = 0;
  int linha, coluna;
  for (int l = 0; l < 5; l++){
    for (int c = 0; c < 5; c++){
      printf("[%d][%d] = ", l, c);
      scanf("%d", &matriz[l][c]);
      if(matriz[l][c] > maior){
        maior = matriz[l][c];
        linha = l;
        coluna = c;
      }
    }
  }

  printf("Maior elemento localizado: [%d][%d] = %d\n", linha, coluna, maior);
  return 0;
}
