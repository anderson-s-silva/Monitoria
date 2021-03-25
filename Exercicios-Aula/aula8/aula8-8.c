/**
* @file ex8.c
* @author Anderson Soares da Silva
* @date 13 Mar 2021
* @brief  exercicio 8 aula 8
*/

/*
ao inserir um valor como 2.5 ou qualquer numero com '.' entra em loop infinito - switch case só pode ser int
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL,"");
  int menu = 2;
  while (menu != 3) {
    printf("\nMenu do programa:\n1 para Teste 1\n2 para Teste 2\n3 para Sair do programa\nDigite sua opção:\n");
    scanf("%d", &menu);
    if(menu != 3 && menu != 2 && menu != 1){
      printf("INVALID!\n" );
    }
    switch (menu) {
      case 1:
        printf("TESTE 1\n");
        break;
      case 2:
        printf("TESTE 2\n");
        break;
    }
  }
  printf("SAINDO!!\n");
  return 0;
}
