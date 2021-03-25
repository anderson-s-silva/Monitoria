/*
* @file semana2-2.c
* @author Anderson Soares da Silva
* @date 05 Mar 2021
* @brief Resolução do exercício 2 da aula 5
*/

/*
Faça um programa que calcule e mostre a idade de uma
pessoa a partir do ano em que a pessoa nasceu e do ano atual.
Os valores ser�o digitados pelo usu�rio.
Obs.:Considere que ela j�� fez anivers�rio neste' ano
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[]) {
  setlocale(LC_ALL,"Portuguese_Brazil.1252");
  //printf ("Localidade corrente: %s\n", setlocale(LC_ALL,NULL) );
  int nasceu, hoje, idade;
  printf("Insira o ano de nascimento: \n");
  scanf("%d", &nasceu);
  printf("Insira o ano atual: \n");
  scanf("%d", &hoje);
  idade = hoje - nasceu;
  printf("A idade �: [%d] anos\n", idade);

  return 0;
}
