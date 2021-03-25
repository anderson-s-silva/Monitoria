/**
* @file ex6.c
* @author Anderson Soares da Silva
* @date 13 Mar 2021
* @brief  exercicio 6 aula 8
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
  setlocale(LC_ALL,"");
  float quadrado = 0;
  int cont = 1;
  while(cont > 0){
    printf("\nInsira um número para que o quadrado seja calculado\n");
    scanf("%f", &quadrado);
    cont = quadrado;
    if (cont > 0) {
      quadrado = pow(quadrado, 2);
      printf("O quadrado do número é: [%.2f]\n", quadrado);
    }
  }
  return 0;
}
