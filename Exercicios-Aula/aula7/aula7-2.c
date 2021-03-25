/**
* @file ex2.c
* @author Anderson Soares da Silva
* @date 13 Mar 2021
* @brief exercicio 2 aula7
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL,"");
  //variáveis
  int menu = 0;
  float numero1 = 0;
  float numero2 = 0;
  //HERE: //alternativa para voltar ao menu
  //system("cls");
  printf("MENU\nAperte 1 para soma\nAperte 2 para subtração\nAperte 3 para multiplicação\nAperte 4 para divisão\nAperte 5 para sair\n");
  scanf("%d", &menu);
  switch (menu) {
    case 1:
      printf("Insira dois números para que eles sejam somados\n");
      scanf("%f", &numero1);
      scanf("%f", &numero2);
      printf("\nA soma ú: %.2f\n", numero1+numero2);
      //sleep(2);
      //goto HERE;
      break;
    case 2:
      printf("Insira dois números para que eles sejam subtraidos\n");
      scanf("%f", &numero1);
      scanf("%f", &numero2);
      printf("\nA subtração é: %.2f\n", numero1-numero2);
      //sleep(2);
      //goto HERE;
      break;
    case 3:
      printf("Insira dois números para que eles sejam multiplicados\n");
      scanf("%f", &numero1);
      scanf("%f", &numero2);
      printf("\nA multiplicação é: %.2f\n", numero1*numero2);
      //sleep(2);
      //goto HERE;
      break;
      case 4:
        printf("Insira dois números para que eles sejam divididos\n");
        scanf("%f", &numero1);
        scanf("%f", &numero2);
        printf("\nA divisão é: %.2f\n", numero1/numero2);
        //sleep(2);
        //goto HERE;
        break;
  }
  return 0;
}
