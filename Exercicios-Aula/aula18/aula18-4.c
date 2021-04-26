/**
* @file aula18-4.c
* @author Anderson Soares da Silva
* @date 26 Abr 2021
* @brief  exercicio 4 aula 18
*/

#include <stdio.h>

int fibonacci(int num){
  if(num==1 || num==2)
    return 1;
  else
    return fibonacci(num-1) + fibonacci(num-2);
}

int main(){
  int n,i;
  printf("Digite a quantidade de termos da sequencia de Fibonacci: ");
  scanf("%d", &n);
  printf("\nA sequencia de Fibonacci e: \n");
  for(i=0; i<n; i++)
    printf("%d ", fibonacci(i+1));

}
