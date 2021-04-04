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
  char nome[15];
  float potencia;
  float tempo_ativo;
}info;

int main(int argc, char const *argv[]) {
  info eletrodomestico[5];
  float consumo_parcial[5];
  float consumo_total = 0;
  float porcentagem[5];

  for(int i = 0; i < 5; i++){
    printf("Insira o nome do eletrodomestico\n");
    fgets(eletrodomestico[i].nome, 15, stdin);
    eletrodomestico[i].nome[strcspn(eletrodomestico[i].nome,"\n")]='\0';
    setbuf(stdin, NULL);
    printf("Insira a potencia do eletrodomestico\n");
    scanf("%f", &eletrodomestico[i].potencia);
    printf("Insira o tempo em dias que o eletrodomestico esta ativo\n");
    scanf("%f", &eletrodomestico[i].tempo_ativo);
    setbuf(stdin, NULL);
    consumo_parcial[i] = eletrodomestico[i].potencia * (eletrodomestico[i].tempo_ativo * 24); //dia em hora
    consumo_total += consumo_parcial[i];
  }

  printf("Consumo total do eletrodomesticos: %.2f\n", consumo_total);

  for(int i = 0; i < 5; i++){
    porcentagem[i] = consumo_parcial[i] / consumo_total;
    printf("Consumo parcial: %s\n %.2f%%\n\n", eletrodomestico[i].nome, porcentagem[i]);
  }

  return 0;
}
