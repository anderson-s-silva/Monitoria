/**
* @file aula11-1.c
* @author Anderson Soares da Silva
* @date 28 Mar 2021
* @brief  exercicio 1 aula 11
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int vetor1[5];
  int vetor2[5];
  printf("Insira 5 valores para o primeiro vetor\n");
  for (int i = 0; i < 5; i++) {
    scanf("%d", &vetor1[i]);
  }
  printf("Insira 5 valores para o segundo vetor\n");
  for (int i = 0; i < 5; i++) {
    scanf("%d", &vetor2[i]);
  }
  printf("Vetor soma:\n");
  for (int i = 0; i < 5; i++) {
    printf("[%d] ", vetor1[i]+vetor2[i]);
  }
  return 0;
}
