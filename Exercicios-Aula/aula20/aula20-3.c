/**
* @file aula20-3.c
* @author Anderson Soares da Silva
* @date 29 Mar 2021
* @brief  exercicio 3 aula 20
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{
  char nome[50];
  char esporte[50];
  char idade[50];
  char altura[50];
}atleta;

int main(int argc, char const *argv[]) {
  atleta atleta[5];
  FILE *entrada;
  FILE *saida;
  entrada = fopen("atletas.txt", "r");
  saida = fopen("saida.dat", "ab");
  if(entrada == NULL)
    printf("Erro ao abrir o arquivo\n");
  else{
    for(int i = 0; i < 5; i++){
      fgets(atleta[i].nome, sizeof(atleta[i].nome), entrada);
      fprintf(saida, "%s", atleta[i].nome);
      printf("%s", atleta[i].nome);
      fgets(atleta[i].esporte, sizeof(atleta[i].esporte), entrada);
      fprintf(saida, "%s", atleta[i].esporte);
      printf("%s", atleta[i].esporte);
      fgets(atleta[i].idade, sizeof(atleta[i].idade), entrada);
      fprintf(saida, "%s", atleta[i].idade);
      printf("%s", atleta[i].idade);
      fgets(atleta[i].altura, sizeof(atleta[i].altura), entrada);
      fprintf(saida, "%s", atleta[i].altura);
      printf("%s\n", atleta[i].altura);
    }
    fclose(entrada);
    fclose(saida);
  }
  return 0;
}
