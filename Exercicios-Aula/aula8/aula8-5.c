/**
* @file ex5.c
* @author Anderson Soares da Silva
* @date 13 Mar 2021
* @brief  exercicio 5 aula 8
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
  setlocale(LC_ALL,"");
  float quadrado = 0;
  int cont = 0;
  while(cont < 10){
    printf("\nInsira um número para que o quadrado seja calculado\n");
    scanf("%f", &quadrado);
    quadrado = pow(quadrado, 2);
    printf("O quadrado do número é: [%.2f]\n", quadrado);
    cont++;
  }
  return 0;
}
