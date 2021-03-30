/**
* @file aula11-4.c
* @author Anderson Soares da Silva
* @date 28 Mar 2021
* @brief  exercicio 4 aula 11
*/
// @Muriel: Deixar o enunciado como comentário no inicio
#include <stdio.h>
#include <stdlib.h>

int main(){
  int soma = 0;
  int vetorInicio[8] = {1, 2, 3, 4, 5, 6 , 7, 8};
  for(int i = 0; i < 8; i++){
    soma += vetorInicio[i];
  }
  printf("soma: [%d]\n", soma);
  return 0;
}
