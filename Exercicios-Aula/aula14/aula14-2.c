/**
* @file aula14-2.c
* @author Anderson Soares da Silva
* @date 04 Abr 2021
* @brief  exercicio 2 aula 14
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    float hora;
    float minutos;
    char segundos;
}horario;

typedef struct{
  int dia;
  char mes[20];
  int ano;
}data;

typedef struct{
  char local[50];
  data calendario;
  horario clock;
  char assunto[100];
}compromisso;

int main(int argc, char const *argv[]) {
  compromisso agenda;
  return 0;
}
