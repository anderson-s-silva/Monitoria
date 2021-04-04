/**
* @file aula14-3.c
* @author Anderson Soares da Silva
* @date 04 Abr 2021
* @brief  exercicio 3 aula 14
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
  char nome[50];
  char curso[50];
  float notas[4];
  float media;
  char situacao[50];
}info;

int main(int argc, char const *argv[]) {
  info aluno;
  float soma = 0;

  printf("Insira o nome\n");
  fgets(aluno.nome, 50, stdin);
  aluno.nome[strcspn(aluno.nome,"\n")]='\0';
  setbuf(stdin, NULL);

  printf("Insira o curso\n");
  fgets(aluno.curso, 50, stdin);
  aluno.curso[strcspn(aluno.curso,"\n")]='\0';
  setbuf(stdin, NULL);

  for(int i = 0; i < 4; i++){
    printf("Insira a nota %d do aluno:\n", i+1);
    scanf("%f", &aluno.notas[i]);
    setbuf(stdin, NULL);
    soma += aluno.notas[i];
  }

  aluno.media = soma / 4;
  if(aluno.media >= 7)
    strcpy(aluno.situacao, "Aprovado");
  else if(aluno.media < 7 && aluno.media >= 3)
    strcpy(aluno.situacao, "Exame");
  else
    strcpy(aluno.situacao, "Reprovado");

  return 0;
}
