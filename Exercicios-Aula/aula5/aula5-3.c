/*
* @file semana2-3.c
* @author Anderson Soares da Silva
* @date 05 Mar 2021
* @brief Resolu��o do exerc�cio 3 da aula 5
*/

/*
Tendo como entrada de dados o total vendido por um
funcion�rio no m�s, calcule a sua comiss�o e o sal�rio bruto no
m�s. Para isso, considere um sal�rio base de R$1.200,00 e
comiss�o de 10% sobre o total vendido.
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

  printf("Insira o valor vendido no m�s: \n");
  scanf("%f", &vendido);
  bruto = SALARIO + (vendido * comissao);
  printf("Sal�rio bruto: R$ %.2f\n", bruto);

  return 0;
}
