/**
* @file aula13-3.c
* @author Anderson Soares da Silva
* @date 04 Abr 2021
* @brief  exercicio 3 aula 13
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char nome[5][50];
  int telefone[5];
  int posicao;
  for(int i = 0; i < 5; i++){//input de dados
    printf("Insira o nome\n");
    fgets(nome[i], 50, stdin);
    nome[i][strcspn(nome[i],"\n")]='\0';
    setbuf(stdin, NULL);
    printf("Insira o telefone\n");
    scanf("%d", &telefone[i]);
    setbuf(stdin, NULL);
  }//for

  do{
    printf("Qual posicao deseja visualizar? (0 a 4)\n");
    scanf("%d", &posicao);
    if (posicao < 5 && posicao > -1) {
      printf("Nome: %s\nTelefone: %d\n\n",nome[posicao], telefone[posicao]);
    }
  }while (posicao != -1);
  return 0;
}
