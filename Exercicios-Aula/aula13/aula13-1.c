/**
* @file aula13-1.c
* @author Anderson Soares da Silva
* @date 04 Abr 2021
* @brief  exercicio 1 aula 13
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char nome[10][50];//cria matriz nome com 10 índices podendo conter 50 caracteres cada

  for(int i = 0; i < 10; i++){//preenche matriz char
    printf("Insira um nome\n");
    fgets(nome[i], 50, stdin);
    nome[i][strcspn(nome[i],"\n")]='\0';
    setbuf(stdin, NULL);
  }//for

  for(int i = 0; i < 10; i++){//imprime lista de nome enumerada
    printf("[%d]:%s\n",i+1,nome[i]);
  }//for

  return 0;
}//main
