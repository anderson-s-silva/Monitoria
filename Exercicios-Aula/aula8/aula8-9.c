/**
* @file ex8.c
* @author Anderson Soares da Silva
* @date 13 Mar 2021
* @brief  exercicio 9 aula 8
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main() {
  setlocale(LC_ALL,"");
  int aleatorio = 0;
  int tentativas = 6;
  int chute = 0;
  int menu = 0;
  srand (time(NULL));
  aleatorio = rand() % 100 + 1;
  printf("JOGO DO ANDSÃO!\nDESCUBRA O NÚMERO ALEATÓRIO DE 1 A 100 EM ATÉ 6 TENTATIVAS!\nSÓ QUEM TEM 300QI+ CONSEGUE!\n");
  printf("\nAPERTE 1 PARA JOGAR!\n");
  scanf("%d", &menu);
  if(menu != 1){
    printf("INVALID\nSAINDO");
    return 0;
  }
  switch (menu) {
    case 1:
    while (tentativas > 0) {
      printf("\nINSIRA UM CHUTE!\n");
      scanf("%d", &chute);
      if (chute > aleatorio){
        tentativas--;
        printf("PUUXA NÃO FOI DESSA VEZ!! N