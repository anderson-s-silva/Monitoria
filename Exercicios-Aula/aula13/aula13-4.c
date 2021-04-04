/**
* @file aula13-4.c
* @author Anderson Soares da Silva
* @date 04 Abr 2021
* @brief  exercicio 4 aula 13
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char nome[50];
  int fuga = 1;
  do{
    printf("Insira um nome\n");
    fgets(nome, 50, stdin);
    nome[strcspn(nome,"\n")]='\0';
    setbuf(stdin, NULL);
    if(strlen(nome) > 5){
      printf("nome: %s\n", nome);
      fuga = 1;
    }else
      fuga = 0;

  }while(fuga != 1);

  return 0;
}
