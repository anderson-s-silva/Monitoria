/*
* @file semana2-4.c
* @author Anderson Soares da Silva
* @date 05 Mar 2021
* @brief Resolução do exercício 4 da aula 5
*/

/*
Calcule a média aritmética de 4 números reais que o usuário
digitar. Imprima a média na tela apenas com 2 casas decimais.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[]) {
  setlocale(LC_ALL,"Portuguese_Brazil.1252");
  int n1, n2, n3, n4;
  float media;
  printf("Insira 4 números reais para que a média aritmética seja calculada\n");
  printf("\nPrimeiro número:\n");
  scanf("%d", &n1);
  printf("\nPrimeiro número:\n");
  scanf("%d", &n2);
  printf("\nPrimeiro número:\n");
  scanf("%d", &n3);
  printf("\nPrimeiro número:\n");
  scanf("%d", &n4);
  media = (n1 + n2 + n3 + n4)/4;
  printf("\nMédia aritmética: %.2f\n", media);
  return 0;
}
