/**
* @file ex4.c
* @author Anderson Soares da Silva
* @date 13 Mar 2021
* @brief  exercicio 4 aula 10
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL,"");
  for(int i = 241; i < 730; i++){
    if(i % 2 == 0){
      printf("[%d]\n", i);
    }
  }
  return 0;
}
