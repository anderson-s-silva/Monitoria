/**
* @file ex1.c
* @author Anderson Soares da Silva
* @date 13 Mar 2021
* @brief Menu com switch case exercicio 1 aula 7
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL,"");
  //vari�veis
  int menu = 0;
  int idade = 0;
  int verificacao = 0;
  //HERE: //alternativa para voltar ao menu//PANDAS -> :(
  system("cls");
  printf("MENU\nAperte 1 para verificação de par ou impar\nAperte 2 para vericação da maioridade\n");
  scanf("%d", &menu);
  switch (menu) {
    case 1:
      printf("Insira o valor para verificação\n");
      scanf("%d", &verificacao);
      if (verificacao % 2 == 0) {
        printf("%d é par!\n", verificacao);
      }else{
        printf("%d é impar!\n", verificacao);
      }

      //sleep(2);
      //goto HERE;
      break;
    case 2:
      printf("Insira a idade:\n");
      scanf("%d", &idade);
      if (idade >= 18) {
        printf("Maior de idade\n");
      }else{
        printf("Menor de idade\n");
      }
      //sleep(2);
      //goto HERE;
      break;
  }
  return 0;
}
