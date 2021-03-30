/**
* @file aula11-3.c
* @author Anderson Soares da Silva
* @date 28 Mar 2021
* @brief  exercicio 3 aula 11
*/
// @Muriel: Deixar o enunciado como comentário no inicio
#include <stdio.h>
#include <stdlib.h>

int main(){
  int vetoridade[10];
  int contador = 0;
  printf("Insira a idade de 10 pessoas\n");
  for(int i = 0; i < 10; i++){
    scanf("%d", &vetoridade[i]);
    if(vetoridade[i] > 35)
      contador++;
  }
  printf("Nesse grupo, existe %d pessoas com mais de 35 anos de idade\n", contador);
}
