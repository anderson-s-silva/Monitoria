/**
* @file ex1.c
* @author Anderson Soares da Silva
* @date 13 Mar 2021
* @brief  exercicio 1 aula 9
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL,"");
  int aluno = 1;
  float nota1, nota2;
  float media = 0;
  do{
    printf("Insira as duas notas do aluno [%d]:\n", aluno);
    scanf("%f %f", &nota1, &nota2);
    if(nota1 >= 0 && nota1 <= 10 && nota2 >=0 && nota2 <= 10){
      media = (float)(nota1 + nota2) / 2;
      printf("A média do aluno [%d] é %.2f\n\n\n", aluno, media);
      aluno++;
    }else{
      printf("Insira um valor de 0 a 10\n");
    }
  }while(aluno <= 5);

  return 0;
}
