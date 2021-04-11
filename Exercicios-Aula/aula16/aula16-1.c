#include <stdio.h>

int exibemaior(int x, int y, int z){
  int maior = x;
  if(maior < y)
      maior = y;
  if(maior < z)
      maior = z;
  printf("maior: %d\n", maior);
}

int main(int argc, char const *argv[]) {
  int num1, num2, num3;
  printf("Insira tres valores para que o maior seja exibido\n");
  scanf("%d %d %d", &num1, &num2, &num3);
  exibemaior(num1, num2, num3);
  return 0;
}
