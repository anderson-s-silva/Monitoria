/**
* @file aula3_exerc2_1.c
* @author Muriel de Souza Godoi
* @date 27 Aug 2019
* @brief Resolução do exercício 1 da aula 4
* Enunciado:  Escreva um programa para determinar a quantidade de litros
de combustível gastos em uma viagem por um automóvel que
faz 12 km/litro. Para isso, sabe-se que o tempo gasto na viagem
é de 35 min e a velocidade média do automóvel é 80 km/h.

*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[]) {

  //DeclaraÃ§Ã£o de variÃ¡veis
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
