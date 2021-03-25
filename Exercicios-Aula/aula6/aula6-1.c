/*
* @file semana2-6.c
* @author Anderson Soares da Silva
* @date 05 Mar 2021
* @brief Resolução do exercício 1 da aula 6
*/

/*
Faça um programa que receba como entrada a nota de
um aluno. O programa deve exibir “aprovado” caso a nota
seja igual ou superior a 6, ou exibir “reprovado” caso
contrário.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[]) {
  setlocale(LC_ALL,"Portuguese_Brazil.1252");
  int nota;
  printf("Insira a nota do aluno\n");
  scanf("%d", &nota);
  if(nota >= 6){
    printf("aprovado!\n");
  }else{//fim if, inicio else
    printf("reprovado :(\n");
  }//else
  return 0;
}//main
