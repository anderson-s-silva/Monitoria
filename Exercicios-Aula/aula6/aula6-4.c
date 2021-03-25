/*
* @file semana2-9.c
* @author Anderson Soares da Silva
* @date 05 Mar 2021
* @brief Resolução do exercício 4 da aula 6
*/

/*
Fa�aa um programa que calcule o imposto de renda a ser
pago tendo como entrada o sal�rio de um empregado. O
imposto deve ser calculado da seguinte maneira:
imposto = sal�rio x al�quota - parcela da dedu��o
*/
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[]) {
  setlocale(LC_ALL,"");
  double salario, aliquota, parcela_deduzir, imposto;
  printf("Insira seu salàrio: \n");
  scanf("%lf", &salario);
  if(salario <= 1903.98){
    printf("Isento de imposto de renda\n");
    aliquota = 0.0;
    parcela_deduzir = 0.0;
  }else if(salario <= 2826.65){
    aliquota = 0.075;
    parcela_deduzir = 142.80;
  }else if(salario <= 3751.05){
    aliquota = 0.15;
    parcela_deduzir = 354.80;
  } else if(salario <= 4664.68){
    aliquota = 0.225;
    parcela_deduzir = 638.13;
  } else {
    aliquota = 0.275;
    parcela_deduzir = 869.36;
  }//else
  imposto = salario * aliquota - parcela_deduzir;
  printf("Imposto à ser pago:R$ %.2lf\n", imposto);
  return 0;
}
