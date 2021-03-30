/**
* @file aula12-3.c
* @author Anderson Soares da Silva
* @date 28 Mar 2021
* @brief  exercicio 3 aula 12
*/
// @Muriel: Deixar o enunciado como comentário no inicio

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

      //Testa se o valor é maior
      if(matriz[l][c] > maior){
        //Atualiza o maior e sua posição
        maior = matriz[l][c];
        linha = l;
        coluna = c;
      }//if
    }//for coluna
  }//for linha

  printf("Maior elemento localizado: [%d][%d] = %d\n", linha, coluna, maior);
  return 0;
}
