/**
2.  * @file aula3_exerc2_2.c
3.  * @author Muriel de Souza Godoi
4.  * @date 27 Aug 2019
5.  * @brief Resolução do exercício 2 da aula 4
6.  * Enunciado: Uma conta de caderneta de poupan�a foi aberta com um
      dep�sito de R$ 500,00. Imagine que esta conta � remunerada
      em 1% de juros ao m�s. Qual ser� o valor da conta ap�s tr�s
      meses?
9.  */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  //Declaração de variáveis
  float capital = 500;
  float taxaJuros = 0.01;
  int tempo = 3;
  float montante;

  //Realiza as contas
  montante = capital * pow(1+taxaJuros, tempo);

  //Exibe a resposta
  printf("O valor será de R$ %.2f\n", montante);

  return 0;
}//main
