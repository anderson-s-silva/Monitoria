/**
* @file aula19-4.c
* @author Anderson Soares da Silva
* @date 30 Abr 2021
* @brief  exercicio 4 aula 19
*/
#include <stdio.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int vetor[5];
  printf("Insira 5 valores para o vetor\n");
  for(int i = 0; i < 5; i++){
    scanf("%d", &vetor[i]);
    vetor[i] *= 2;
  }
  for(int i = 0; i < 5; i++){
    if(vetor[i] % 2 == 0){
      printf("%p\n", &vetor[i]);
    }
  }
  return 0;
}
