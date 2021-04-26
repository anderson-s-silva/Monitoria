/**
* @file aula18-6.c
* @author Anderson Soares da Silva
* @date 26 Abr 2021
* @brief  exercicio 6 aula 18
*/

/*
Considere a funcaox abaixo. O que essa função faz? Escreva
uma função não-recursiva que resolve o mesmo problema
*/

/*
Essa função soma o numero de forma decrescente até o chegar em 0 e exibe o resultado da soma
*/

#include <stdio.h>

int funcaox(int a){
 if(a <= 0) return 0;
 else return a + funcaox(a-1);
}

int main(int argc, char const *argv[]) {
  int a;
  scanf("%d", &a);
  printf("%d\n", funcaox(a));
  return 0;
}
