/**
* @file aula19-1.c
* @author Anderson Soares da Silva
* @date 30 Abr 2021
* @brief  exercicio 1 aula 19
*/
#include <stdio.h>

int main (){
  int x, y;
  printf("Digite um numero: ");
  scanf("%i", &x);
  printf("Digite mais um numero: ");
  scanf("%i", &y);

  if(&x > &y){
    printf(" x tem o maior endereco de memoria\n");
    return 0;
  }
  printf("y tem o maior endereco de memoria\n");
  return 0;
}
