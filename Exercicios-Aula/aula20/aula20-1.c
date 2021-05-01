/**
* @file aula20-1.c
* @author Anderson Soares da Silva
* @date 30 Abr 2021
* @brief  exercicio 1 aula 20
*/

/*
Elabore um programa que leia do usuário o tamanho de um vetor a ser lido. Em
seguida, faça a alocação dinâmica desse vetor. Por fim, leia o vetor do usuário e o
imprima.

*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int tam;
  printf("Insira um tamanho para o vetor\n");
  scanf("%d", &tam);
  int *vet = (int*)malloc(sizeof(int));
  printf("Insira conteudo para o vetor\n");
  for(int i = 0; i < tam; i++){
    scanf("%d", &vet[i]);
  }
  for(int i = 0; i < tam; i++){
    printf("[%d] ", vet[i]);
  }
  free(vet);
  return 0;
}
