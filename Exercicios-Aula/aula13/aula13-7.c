/**
* @file aula13-7.c
* @author Anderson Soares da Silva
* @date 04 Abr 2021
* @brief  exercicio 7 aula 13
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//Paraná, Rio Grande do Sul e Santa Catarina.
//Espírito Santo, Minas Gerais, Rio de Janeiro e São Paulo.

//strcasecmp
int main(int argc, char const *argv[]) {
  char sigla[2];
  char es[2] = "ES";
  char rj[2] = "RJ";
  char mg[2] = "MG";
  char sp[2] = "SP";
  char pr[2] = "PR";
  char rs[2] = "RS";
  char sc[2] = "SC";

  printf("Insira uma sigla de estado\n" );
  fgets(sigla, 2, stdin);
  sigla[strcspn(sigla,"\n")]='\0';
  setbuf(stdin, NULL);

  if(strcasecmp(sigla, es) == 0)
    printf("Espirito Santo\n");
  if(strcasecmp(sigla, mg) == 0)
    printf("Minas Gerais\n");
  if(strcasecmp(sigla, rj) == 0)
    printf("Rio de janeiro\n");
  if(strcasecmp(sigla, sp) == 0)
    printf("Sao paulo\n");
  if(strcasecmp(sigla, pr) == 0)
    printf("Parana\n");
  if(strcasecmp(sigla, rs) == 0)
    printf("Rio Grande do Sul\n");
  if(strcasecmp(sigla, sc) == 0)
    printf("Santa Catarina\n");

  return 0;
}

//retornar para corrigir codigo
