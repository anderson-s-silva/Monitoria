#include <stdio.h>

int fatorial(int numero){
  int fat;
  for(fat = 1; numero > 1; numero -= 1)
    fat = fat * numero;
  return fat;
}

int main(int argc, char const *argv[]) {
  int fat, numero;
  do{
    printf("Insira um numero positivo inteiro para que o fatorial seja calculado\n");
    scanf("%d", &numero);
  }while(numero < 0);
  fat = fatorial(numero);
  printf("Fatorial: [%d]\n", fat);
  return 0;
}
