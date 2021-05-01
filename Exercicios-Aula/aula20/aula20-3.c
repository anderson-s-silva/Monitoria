/**
* @file aula20-3.c
* @author Anderson Soares da Silva
* @date 30 Abr 2021
* @brief  exercicio 3 aula 20
*/

/*
Escreva uma função que receba como parâmetro dois vetores via referência( A e B)
e o tamanho N. A função deve retornar o ponteiro para um vetor C de tamanho N
alocado dinamicamente, em que:
C[i] = A[i] * B[i]
*/

#include <stdio.h>
#include <stdlib.h>

int *aloca(int a[], int b[], int tam){
  int *ptrC = malloc(tam * sizeof(int));
  for(int i = 0; i < tam; i++){
    ptrC[i] = a[i] * b[i];
  }
  return ptrC;
}

int main(int argc, char const *argv[]) {
  int tam1;
  int *ptrC;
  printf("Insira o tamanho para os vetores");
  scanf("%d", &tam1);
  int vetorA[tam1], vetorB[tam1];
  printf("Agora insria o conteudo para o vetor A\n");
  for(int i = 0; i < tam1; i++){
    scanf("%d", &vetorA[i]);
  }
  printf("Agora insria o conteudo para o vetor B\n");
  for(int i = 0; i < tam1; i++){
    scanf("%d", &vetorB[i]);
  }
  ptrC = aloca(vetorA, vetorB, tam1);
  for(int i = 0; i < tam1; i++){
    printf("[%d]", ptrC[i]);
  }
  free(ptrC);
  return 0;
}
