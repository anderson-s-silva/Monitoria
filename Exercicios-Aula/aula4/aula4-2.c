/**
2.  * @file aula3_exerc2_2.c
3.  * @author Muriel de Souza Godoi
4.  * @date 27 Aug 2019
5.  * @brief ResoluÃ§Ã£o do exercÃ­cio 2 da aula 4
6.  * Enunciado: Uma conta de caderneta de poupança foi aberta com um
      depósito de R$ 500,00. Imagine que esta conta é remunerada
      em 1% de juros ao mês. Qual será o valor da conta após três
      meses?
9.  */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  //DeclaraÃ§Ã£o de variÃ¡veis
  float capital = 500;
  float taxaJuros = 0.01;
  int tempo = 3;
  float montante;

  //Realiza as contas
  montante = capital * pow(1+taxaJuros, tempo);

  //Exibe a resposta
  printf("O valor serÃ¡ de R$ %.2f\n", montante);

  return 0;
}//main
