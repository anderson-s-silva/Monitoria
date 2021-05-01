/**
 * /file aula19_exerc6.c
 * /author Muriel de Souza Godoi
 * /date 05 Nov 2019
 * /brief Resolução do exercício 6 da aula 17
 * Enunciado: Considere a seguinte declaração:
 *  int a, *b, **c, ***d;
 *  Escreva um programa que receba o valor de a, calcule e exiba:
 *
 * -> O dobro do valor a, utilizando o ponteiro b
 * -> O triplo do valor a, utilizando o ponteiro c
 * -> O quadruplo do valor a, utilizando o ponteiro d
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
  //Declara as variáveis e ponteiros
  int a, *b, **c, ***d;

  //Atribui os endereços de memória aos ponteiros
  b = &a;
  c = &b;
  d = &c;

  //Recebe o valor de a
  printf("Digite o valor de a:");
  scanf("%d", &a);

  // Exibe os valores dereferenciando os ponteiros
  printf("O dobro utilizando o ponteiro b: %d\n", (*b) * 2);
  printf("O triplo utilizando o ponteiro c: %d\n", (**c) * 3);
  printf("O quadruplo utilizando o ponteiro d: %d\n", (***d) * 4);

  return 0;
}//main
