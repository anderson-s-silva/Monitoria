/**
 * /file aula17_exerc5.c
 * /author Muriel de Souza Godoi
 * /date 05 Nov 2019
 * /brief Resolução do exercício 5 da aula 19
 * Enunciado: Elabore uma função que receba duas strings como parâmetros e
 * verifique se a segunda string está dentro da primeira.
 * Para isso, utilize apenas aritmética de ponteiros.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h> // Biblioteca para utilizar o tipo bool

/**
 * Recebe uma string do teclado e limpa o buffer
 * \param string a ser preenchida
 * \param tam tamanho maximo
 */
void leString(char* string, int tam){
  fgets(string, tam, stdin);
  string[strcspn(string, "\n")] = '\0';
  setbuf(stdin, NULL);
  //limpaBuffer();
}//leString

/**
 * Verifica se a string2 está contida na string1
 * \param string1 texto onde será procurado a substring
 * \param string2 substring a ser procurada
 * \return true se a substring for encontrada, false caso contrario
 */
bool verificaSubString(char* string, char* substring ){
  int tamString = strlen(string);
  int tamSub = strlen(substring);
  bool saoIguais;// Booleano - 2 valores possiveis: true ou false

  //Percorre todas as posiçoes possivel de inicio da substring
  for (int l = 0; l < tamString - tamSub + 1; l++) {
    saoIguais = true;//
    for (int c = 0; c < tamSub; c++) {//Verifica cada posicao da substring
      if(*(string + l + c) != *(substring + c)){
        saoIguais = false;// Não são iguais, recomeça busca
        break;
      }// if
    }// for
    if(saoIguais){// Se permanecer true retorna verdadeiro
      return true;
    }
  }// for
  return false; //Não encontrou substring
}// verificaSubString

int main(){
  //Declara as strings
  char string1[30];
  char string2[30];

  //Recebe as strings
  printf("Digite a string 1: ");
  leString(string1,30);

  printf("Digite a string 2: ");
  leString(string2,30);

  //Chama a função e exibe resposta
  if(verificaSubString(string1, string2)){
    printf("A string %s está contida na string %s\n", string2, string1);
  }else{
    printf("A string NÃO %s está contida na string %s\n", string2, string1);
  }//else

  return 0;
}//main
