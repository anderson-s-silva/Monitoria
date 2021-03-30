/**
* @file aula11-5.c
* @author Anderson Soares da Silva
* @date 28 Mar 2021
* @brief  exercicio 5 aula 11
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  int vetorA[20];
  int cont_trinta = 0, cont_maiormedia = 0, cont_menormedia = 0, soma = 0, media;
  printf("Insira 20 elemento no vetorA\n");
  for(int i = 0; i < 20; i++){
    scanf("%d", &vetorA[i]);
    soma += vetorA[i];
    if(vetorA[i] == 30)
      cont_trinta++;
  }
  media = soma/20;
  for(int i = 0; i < 20; i++){
    if(vetorA[i] > media)
      cont_maiormedia++;
    if(vetorA[i] < media)//@Muriel: item c é conta iguais a média
      cont_menormedia++;
  }//for melhorar comentários nos exercicio em geral
  printf("numeros iguais a 30 [%d]\nnumeros menores que a media [%d]\nnumeros maiores que a media [%d]\n", cont_trinta, cont_menormedia, cont_maiormedia);
  //@Muriel: Quebre em 3 printf, fica mais organizado
  return 0;
}//main
