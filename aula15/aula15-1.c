/**
* @file aula15-1.c
* @author Anderson Soares da Silva
* @date 04 Abr 2021
* @brief  exercicio 1 aula 15
*/

#include <stdio.h>
#include <stdlib.h>

enum meses_do_ano {JAN = 1, FEV, MAR, ABR, MAI, JUN, JUL, AGO, SET, OUT, NOV, DEZ};
  int main(){
    enum meses_do_ano meses;
    printf("Digite o numero do mes: ");
    scanf("%d", &meses);
    if((meses >= JAN) && (meses <= DEZ)){
      switch(meses){

        case JAN:
        printf("%d - Janeiro\n",meses);
        break;

        case FEV:
        printf("%d - Fevereiro\n",meses);
        break;

        case MAR:
        printf("%d - Marco\n",meses);
        break;

        case ABR:
        printf("%d - Abril\n",meses);
        break;

        case MAI:
        printf("%d - Maio\n",meses);
        break;

        case JUN:
        printf("%d - Junho\n",meses);
        break;

        case JUL:
        printf("%d - Julho\n",meses);
        break;

        case AGO:
        printf("%d - Agosto\n",meses);
        break;

        case SET:
        printf("%d - Setembro\n",meses);
        break;

        case OUT:
        printf("%d - Outubro\n",meses);
        break;

        case NOV:
        printf("%d - Novembro\n",meses);
        break;

        case DEZ:
        printf("%d - Dezembro\n",meses);
        break;

      }
    }else{ //senão estiver na faixa válida
      printf("Valor INVALIDO!!!\n");
      printf("Os valores validos para os meses do ano sao: \n\n");
      for(meses = JAN; meses <= DEZ; meses++)
      printf("Mes: %d \n",meses);
    }
    return 0;
  }
