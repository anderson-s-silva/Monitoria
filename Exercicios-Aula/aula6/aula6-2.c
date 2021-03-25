/*
* @file semana2-7.c
* @author Anderson Soares da Silva
* @date 05 Mar 2021
* @brief Resolução do exercício 2 da aula 6
*/

/*
Faça um programa que receba um número e determine
se ele é um número par ou ímpar.
Obs.: Utilize o operador % que retorna o resto da divisão)
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[]) {
  setlocale(LC_ALL,"Portuguese_Brazil.1252");
  int recebi;
  printf("Insira um número para saber se ele é par ou impar\n");
  scanf("%d", &recebi);
  if (recebi%2==0) {
    printf("Seu número é par!!\n");
  }else{
    printf("Seu número é impar!!\n");
  }
  return 0;
}
