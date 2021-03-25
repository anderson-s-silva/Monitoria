/*
* @file semana2-8.c
* @author Anderson Soares da Silva
* @date 05 Mar 2021
* @brief Resolução do exercício 3 da aula 6
*/

/*
Faça um programa que receba os coeficientes a, b e c
de uma equação do segundo grau e retorne as raízes da
equação (se existirem).
*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(int argc, char const *argv[]) {
  setlocale(LC_ALL,"");

  //Declara as vari�veis
  float a, b, c;
  float delta;
  float raiz1;
  float raiz2;

  //Recebe os valores
  printf("Insira o valor para a:\n");
  scanf("%f", &a);
  printf("Insira o valor para b:\n");
  scanf("%f", &b);
  printf("Insira o valor para c:\n");
  scanf("%f", &c);

  delta = pow(b,2)-4*(a*c);
  printf("\nEqua��o de Bhaskara montada:\nX = ((-(%.2f) +- sqrt(%.2f^2 -4 %.2f*%.2f))/2*%.2f)\n", b, b, a, c, a);
  if(delta >= 0){
    if (delta == 0) {
      raiz1 = ((-b)/2*a);
      printf("\nEquação possuí apenas uma solução real:\nx1 = %.2f\n", raiz1);
    }else{//if
      raiz1 = (-b + sqrt(delta))/(2*a);
      raiz2 = (-b - sqrt(delta))/(2*a);
      printf("x1 = %.2f\n", raiz1);
      printf("x2 = %.2f\n", raiz2);
    }//else
  }else{
    printf("Não existem raizes reais, delta < 0\n");
  }//else
  return 0;
}//main
