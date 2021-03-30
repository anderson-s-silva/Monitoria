/**
* @file aula11-2.c
* @author Anderson Soares da Silva
* @date 28 Mar 2021
* @brief  exercicio 2 aula 11
*/
// @Muriel: Deixar o enunciado como comentário no inicio
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int vetorA[10];
  int vetorB[10];
  printf("Insira 10 valores para o vetorA\n");
  for(int i = 0; i < 10; i++){
    scanf("%d", &vetorA[i]);
    vetorB[i] = pow(vetorA[i], 2);
  }
  printf("Quadrado do vetorA:\n");
  for(int i = 0; i < 10; i++){
     printf("[%d] ", vetorB[i]);
  }
  return 0;
}
