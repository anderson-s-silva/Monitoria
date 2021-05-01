/**
* @file aula20-2.c
* @author Anderson Soares da Silva
* @date 30 Abr 2021
* @brief  exercicio 2 aula 20
*/

/*
Escreva uma função que receba um valor inteiro positivo N por parâmetro e retorne
o ponteiro para um vetor de tamanho N alocado dinamicamente. Se N for negativo ou
igual a zero, um ponteiro nulo deverá ser retornado.
*/

#include <stdio.h>
#include <stdlib.h>

int *recebe(int n){
  if(n > 0){
    int *ptr = malloc(n * sizeof(int));
    return ptr;
  }else{
    int *ptr = NULL;
    return ptr;
  }
}

int main(int argc, char const *argv[]) {
  int *ponteiro;
  int n;
  printf("Insira um valor inteiro positivo\n");
  scanf("%d", &n);
  ponteiro = recebe(n);
  //printf("%d\n", ponteiro);
  free(ponteiro);
  return 0;
}
