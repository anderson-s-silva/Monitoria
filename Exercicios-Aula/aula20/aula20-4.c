/**
* @file aula20-4.c
* @author Anderson Soares da Silva
* @date 29 Mar 2021
* @brief  exercicio 4 aula 20
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
  char nome[50];
  char esporte[50];
  char idade[50];
  char altura[50];
}atletas;

int comparaIdade(const void * a, const void * b){
  int r = strcmp((*(atletas *)a).idade, (*(atletas *)b).idade);
  if(r == 0)
    return 0;
  else if(r < 0)
    return -1;
    else
      return 1;
}
int comparaAltura(const void * a, const void * b){
  int r = strcmp((*(atletas *)a).altura, (*(atletas *)b).altura);
  if(r == 0)
    return 0;
  else if(r < 0)
    return -1;
    else
      return 1;
}

int main(int argc, char const *argv[]) {
  atletas atleta[5];
  FILE *entrada;
  entrada = fopen("saida.dat", "rb");
  if(entrada == NULL)
    printf("Erro ao abrir o arquivo\n");
  else{
    for(int i = 0; i < 5; i++){
      fgets(atleta[i].nome, sizeof(atleta[i].nome), entrada);
      fgets(atleta[i].esporte, sizeof(atleta[i].esporte), entrada);
      fgets(atleta[i].idade, sizeof(atleta[i].idade), entrada);
      fgets(atleta[i].altura, sizeof(atleta[i].altura), entrada);
    }
    qsort(atleta, 5, sizeof(atletas), comparaIdade);
    printf("Mais velho: %s\n", atleta[4].nome);
    qsort(atleta, 5, sizeof(atletas), comparaAltura);
    printf("Mais alto: %s\n", atleta[4].nome);
    fclose(entrada);
  }
  return 0;
}
