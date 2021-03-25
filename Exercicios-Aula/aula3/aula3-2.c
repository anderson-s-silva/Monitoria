/**
* @file aula3_exerc1_3.c
* @author Muriel de Souza Godoi
* @date 26 Aug 2019
* @brief Resolução do exercício 2 da aula 3
* Enunciado: Considere que A e B armazenam valores inteiros diferentes.
* Escreva um programa que efetue a troca dos valores de forma que a
* variável A passe a possuir o valor da variável B e que a variável B
* passe a possuir o valor da variável A. Apresente os valores iniciais
* e finais de A e B.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
  //Declara as variaveis e inicializa a e b
  int variavel_a = 10;
  int variavel_b = 20;
  int troca;

  //Exibe os valores antes da troca
  printf("Valor de a: %d\n",variavel_a);
  printf("Valor de b: %d\n",variavel_b);

  //Realiza a troca utilizando uma variável auxiliar
  troca = variavel_a;
  variavel_a = variavel_b;
  variavel_b = troca;

  //Exibe os valores depois da troca
  printf("Valor de a: %d\n",variavel_a);
  printf("Valor de b: %d\n",variavel_b);

  return 0;
}//main
