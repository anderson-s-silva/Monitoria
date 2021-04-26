/**
* @file aula18-5.c
* @author Anderson Soares da Silva
* @date 26 Abr 2021
* @brief  exercicio 5 aula 18
*/

#include <stdio.h>
int bin(int k){
    if ( k < 2 ) //Caso base
        return k;
    return ( 10 * bin( k / 2 ) ) + k % 2; // Iniciando a multiplicação pelo valor que não pode mais ser dividido por 2 e somando com a sobra da divisão.
}

int main(int argc, char const *argv[]) {
int k;
printf("Insira um numero para ser convertido para binario\n");
scanf("%d", &k);
printf("%d em binario: %d\n", k, bin(k));
  return 0;
}
