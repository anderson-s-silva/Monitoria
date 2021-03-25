/*
* @file semana2-3.c
* @author Anderson Soares da Silva
* @date 05 Mar 2021
* @brief Resolução do exercício 3 da aula 5
*/

/*
Tendo como entrada de dados o total vendido por um
funcionário no mês, calcule a sua comissão e o salário bruto no
mês. Para isso, considere um salário base de R$1.200,00 e
comissão de 10% sobre o total vendido.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define SALARIO 1200
int main(int argc, char const *argv[]) {
  setlocale(LC_ALL,"");
  float vendido;
  float salario_bruto;
  float comissao = 0.1;

  printf("Insira o valor vendido no mês: \n");
  scanf("%f", &vendido);
  bruto = SALARIO + (vendido * comissao);
  printf("Salário bruto: R$ %.2f\n", bruto);

  return 0;
}
