/**
* @file aula18-1.c
* @author Anderson Soares da Silva
* @date 26 Abr 2021
* @brief  exercicio 1 aula 18
*/

#include <stdio.h>
int fat (n) {
  //Função que calcula, recursivamente, o fatorial de n.
  if ((n==1) || (n==0))
    return 1;
  else
    return fat(n-1)*n;}
int main(){
  //Declaração de n, o número informado que gera o fatorial.
  int n;
  printf("Informe o numero que deseja obter o fatorial:\n");
  scanf("%d",&n);
  printf("O fatorial de %d e %d \n",n,fat (n));
}
