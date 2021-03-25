/*
* @file semana2-5.c
* @author Anderson Soares da Silva
* @date 05 Mar 2021
* @brief Resolução do exercício 5 da aula 5
*/

/*
Sabendo que a função sqrt(valor), que está na biblioteca
math.h retorna a raiz quadrada do valor, calcule a raiz
quadrada de um número que o usuário digitar.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(int argc, char const *argv[]) {
  setlocale(LC_ALL,"Portuguese_Brazil.1252");
  double valor, raiz;
  printf("Qual número deseja saber a raiz quadrada?\n");
  scanf("%lf", &valor);
  raiz = sqrt(valor);
  printf("Raiz quadrada: %.2lf\n", raiz);
  return 0;
}
