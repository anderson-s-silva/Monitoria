/**
* @file aula13-5.c
* @author Anderson Soares da Silva
* @date 04 Abr 2021
* @brief  exercicio 5 aula 13
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char frase[60];
  int contador;
  int cont_a=0, cont_e=0, cont_i=0, cont_o=0, cont_u=0;
  printf("Insira uma frase\n");
  fgets(frase, 50, stdin);
  frase[strcspn(frase,"\n")]='\0';
  setbuf(stdin, NULL);
  contador = strlen(frase);
  for(int i = 0; i < contador; i++){
    if(frase[i] == 'a')
      cont_a++;
    if(frase[i] == 'e')
      cont_e++;
    if(frase[i] == 'i')
      cont_i++;
    if(frase[i] == 'o')
      cont_o++;
    if(frase[i] == 'u')
      cont_u++;
  }
  printf("A vogal 'A' aparece %d vezes\nA vogal 'E' aparece %d vezes\nA vogal 'I' aparece %d vezes\nA vogal 'O' aparece %d vezes\nA vogal 'U' aparece %d vezes", cont_a, cont_e, cont_i, cont_o, cont_u);
  return 0;
}
