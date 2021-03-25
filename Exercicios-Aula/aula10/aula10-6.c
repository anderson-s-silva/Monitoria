/**
* @file ex6.c
* @author Anderson Soares da Silva
* @date 13 Mar 2021
* @brief  exercicio 6 aula 10
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
  setlocale(LC_ALL,"");
  int numero = 0;
  int quadrado = 0;
  for(int i = 0; i < 10; i++){
    printf("[%d] - Insira um número para que o quadrado seja calculado\n", i);
    scanf("%d", &numero);
    quadrado = (float)pow(numero, 2);
    printf("Quadrado de %d = [%d]\n", numero, quadrado);
  }
  return 0;
}
