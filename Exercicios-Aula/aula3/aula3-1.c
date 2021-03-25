/**
* @file aula3_exerc2.c
* @author Muriel de Souza Godoi
* @date 26 Aug 2019
* @brief Resolução do exercício 1 da aula 3
* Enunciado: Elabore um programa que exiba o seu nome na primeira
  linha e o seu e-mail segunda. Em seguida, exiba uma
  mensagem solicitando para o usuário pressionar uma tecla.
  Quando o usuário pressionar, exiba em uma nova linha o nome
  do seu amigo e, em outra, o e-mail dele.
**/
#include <stdio.h>
#include <stdlib.h>

int main(){
  printf("Anakin Skywalker\n");
  printf("anakin@imperio.com\n");
  getchar();//para atÃ© o usuÃ¡rio entrar um caractere
  //system("clear");//limpa a tela Linux
  system("cls");//limpa a tela Windows
  printf("Luke Skywalker\n");
  printf("luke@rebelde.com\n");
  return 0;
}//main
