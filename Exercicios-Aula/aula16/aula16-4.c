#include <stdio.h>

void conceito(float media){
  if(media <= 10 && media >= 9)
    printf("Conceito: A\n");
  else if(media < 9 && media >= 7)
    printf("Conceito: B\n");
  else if(media < 7 && media >= 5)
    printf("Conceito: C\n");
  else if(media < 5 && media >= 0)
    printf("Conceito: D\n");
}

int main(int argc, char const *argv[]) {
  float media;
  printf("Insira a media final do aluno: (0 a 10)\n");
  scanf("%f", &media);
  conceito(media);
  return 0;
}
