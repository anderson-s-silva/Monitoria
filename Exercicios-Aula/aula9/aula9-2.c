/**
* @file ex2.c
* @author Anderson Soares da Silva
* @date 13 Mar 2021
* @brief  exercicio 2 aula 9
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL,"");
  int contador = 0;
  float entrada = 0;
  do{
    printf("Insira valores entre 500 e 1000\n");
    scanf("%f", &entrada);
    if(entrada > 500 && entrada < 1000)
      contador++;
  }while(entrada > 500 && entrada < 1000);
  printf("Quantidade de nÚmeros vÁlidos: [%d]\n", contador);
  return 0;
}
