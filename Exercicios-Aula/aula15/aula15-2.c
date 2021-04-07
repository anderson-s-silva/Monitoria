/**
* @file aula15-2.c
* @author Anderson Soares da Silva
* @date 04 Abr 2021
* @brief  exercicio 2 aula 15
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
  int dia;
  int mes;
  int ano;
}data_nascimento;

typedef enum {BRASILEIRO = 1, ESTRANGEIRO} nacionalidade;

typedef struct{
  char nome[50];
  int idade;
  float peso;
  data_nascimento aniver;
  nacionalidade tipo;
  union{
    double cpf;
    double passport;
  }tipo_nacionalidade;
}pessoa;

int main(int argc, char const *argv[]) {
  pessoa individuo[5];
  for(int i = 0; i < 5; i++){
    printf("Insira o nome do individuo [%d]\n", i+1);
    fgets(individuo[i].nome, 50, stdin);
    individuo[i].nome[strcspn(individuo[i].nome,"\n")]='\0';
    setbuf(stdin, NULL);
    printf("Insira a idade do individuo [%d]\n", i+1);
    scanf("%d", &individuo[i].idade);
    printf("Insira o peso do individuo [%d]\n", i+1);
    scanf("%f", &individuo[i].peso);
    printf("Insira a data de aniversario do individuo [%d] (DIA MES ANO)\n", i+1);
    scanf("%d %d %d\n", &individuo[i].aniver.dia, &individuo[i].aniver.mes, &individuo[i].aniver.ano);
    do{
      printf("Insira a nascionalidade do individuo [%d]\n Insira 1 para BRASILEIRO\n Insira 2 para ESTRANGEIRO\n", i+1);
      scanf("%d", &individuo[i].tipo);
      if(individuo[i].tipo == BRASILEIRO){
        printf("Insira o cpf do individuo [%d]\n", i+1);
        scanf("%lf", &individuo[i].tipo_nacionalidade.cpf);
      }else if(individuo[i].tipo == ESTRANGEIRO){
        printf("Insira o passaporte do individuo [%d]\n", i+1);
        scanf("%lf", &individuo[i].tipo_nacionalidade.passport);
      }else{
        printf("Valor invalido, insira novamente\n");
      }
    }while(individuo[i].tipo != 1 && individuo[i].tipo != 2);
  }
  return 0;
}
