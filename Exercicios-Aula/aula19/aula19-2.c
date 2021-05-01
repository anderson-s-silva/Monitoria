/**
* @file aula19-2.c
* @author Anderson Soares da Silva
* @date 30 Abr 2021
* @brief  exercicio 2 aula 19
*/
#include <stdio.h>
#include <stdlib.h>

int main (void){
 float vet[10];
 int i, *pontvet;
 pontvet = vet;

 printf("ELEMENTOS:\n\n");
 for(i = 0; i < 10; i++){
  printf("[%.2f] ", (vet[i] = 10 + rand() %100) / 3.27);
 }
 printf("\n\nENDERECOS DO ARRAY:\n\n");

 for(i = 0; i < 10; i++){
     printf("%i : %.2f : %i\n",i+1, vet[i]/3.27, pontvet++);
 }

 return 0;
}
