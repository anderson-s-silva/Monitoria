/**
* @file aula18-3.c
* @author Anderson Soares da Silva
* @date 26 Abr 2021
* @brief  exercicio 3 aula 18
*/

/*
Crie uma função que retorne x elevado a y através de operação de
multiplicação. A função recebe x e y por parâmetro
*/

/*plano
1-caso base sera o expoente == 0
2-recursao na multiplicacao da base pela funcao potencia decaindo expoente
*/

#include <stdio.h>

int potencia(int base, int expoente){
 if(expoente == 0)
  return 1;
 else
  return (base * potencia(base, expoente-1));
}

int main(){
 int base, expoente, resultado;
 printf("Insira a base e o expoente respectivamente\n");
 scanf("%d %d", &base, &expoente);
 resultado = potencia(base,expoente);
 printf("%d elevado a %d = %d", base, expoente, resultado);
}
