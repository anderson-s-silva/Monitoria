/**
* @file aula11-5.c
* @author Anderson Soares da Silva
* @date 28 Mar 2021
* @brief  exercicio 5 aula 11
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  int vetorA[4] = {1 , 8 , 65, 32};
  int vetorB[5] = {2 , 9 , 65, 32, 1};
  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 5; j++){
      if(vetorB[j] == vetorA[i])
        printf("[%d] ", vetorB[j]);
    }
  }
  return 0;
}
