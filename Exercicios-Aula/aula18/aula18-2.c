/**
* @file aula18-2.c
* @author Anderson Soares da Silva
* @date 26 Abr 2021
* @brief  exercicio 2 aula 18
*/

/*
Crie uma função que retorne x*y através de operação de soma. A função
recebe x e y por parâmetro
*/

/*plano
 1-tratar o n que é o número de vezes que o seu código é iterado, que deve ser um valor fixo a ser somado com ele mesmo por n vezes.
 2-Nunca se deve retornar n, somente v.
 3-O valor de n deve ser decrementado a cada iteração, ou incrementado, caso n seja um valor negativo.
 4-tratar valores negativos
*/
#include <stdio.h>
int mult(int n, int v){
  int vs;
  if(n>0){
    n--;
    vs = v;
  }
  else if (n<0){
    n++;
    vs = -v;
  }

  if(n==0)
    return vs;
  else
    return vs + mult(n,v);
}

int main(){
  int n,v,res=0;
  printf("Insira dois numeros para a multiplicacao\n");
  scanf("%d%d",&n,&v);
  res=mult(n,v);
  printf("Res = %d\n",res);

  return 0;

}
