/**
* @file aula13-6.c
* @author Anderson Soares da Silva
* @date 04 Abr 2021
* @brief  exercicio 6 aula 13
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char nome[50];
  char sobrenome[50];

  printf("Insira nome:\n");
  fgets(nome, 50, stdin);
  nome[strcspn(nome,"\n")]='\0';
  setbuf(stdin, NULL);

  printf("Insira sobrenome\n");
  fgets(sobrenome, 50, stdin);
  sobrenome[strcspn(sobrenome,"\n")]='\0';
  setbuf(stdin, NULL);

  strcat(sobrenome,nome);
  printf("%s\n",sobrenome);
  return 0;
}
