/**
* @file aula13-2.c
* @author Anderson Soares da Silva
* @date 04 Abr 2021
* @brief  exercicio 2 aula 13
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define AUMENTO 0.08

int main(int argc, char const *argv[]) {
  char nome[5][50];
  float salario[5];
  for(int i = 0; i < 5; i++){
    printf("Insira o nome do funcionario\n");
    fgets(nome[i], 50, stdin);
    nome[i][strcspn(nome[i],"\n")]='\0';
    setbuf(stdin, NULL);
    printf("Insira o salario\n");
    scanf("%f", &salario[i]);
    setbuf(stdin, NULL);
    salario[i] = salario[i] * AUMENTO + salario[i];
  }//for

  for(int i = 0; i < 5; i++){
    printf("Funcionario: %s\nPagamento: %.2f\n\n", nome[i], salario[i]);
  }//for
  return 0;
}//main
