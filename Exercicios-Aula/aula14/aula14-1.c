/**
* @file aula14-1.c
* @author Anderson Soares da Silva
* @date 04 Abr 2021
* @brief  exercicio 1 aula 14
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct{
	float x;
	float y;
}Ponto;

int main(int argc, char const *argv[]) {
  Ponto a1, b1;
  float distancia;

  printf("Insira o primeiro ponto\n");
  scanf("%f", &a1.x);
  scanf("%f", &a1.y);

  printf("Insira o segundo ponto\n");
  scanf("%f", &b1.x);
  scanf("%f", &b1.y);

  distancia = sqrt(pow((b1.x - a1.x),2) + pow((b1.y - a1.y),2));

  printf("distancia: %.2f\n", distancia);

  return 0;
}
