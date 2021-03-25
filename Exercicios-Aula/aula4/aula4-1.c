/**
* @file aula3_exerc2_1.c
* @author Muriel de Souza Godoi
* @date 27 Aug 2019
* @brief Resolu��o do exerc�cio 1 da aula 4
* Enunciado:  Escreva um programa para determinar a quantidade de litros
de combust�vel gastos em uma viagem por um autom�vel que
faz 12 km/litro. Para isso, sabe-se que o tempo gasto na viagem
� de 35 min e a velocidade m�dia do autom�vel � 80 km/h.

*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[]) {

  //Declaração de variáveis
  float tempoMin = 35;
  float tempoHoras;
  float rendimento = 12;//km/l
  float velocidade = 80;
  float distancia;
  float litrosConsumidos;

  //Realiza as contas
  tempoHoras = tempoMin / 60;
  distancia = velocidade * tempoHoras;
  litrosConsumidos  = distancia / rendimento;

  //Exibe a resposta
  printf("Foram consumidos %.2f litros\n", litrosConsumidos);

  return 0;
}//main
