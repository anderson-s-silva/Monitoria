#include <stdio.h>

float tipoMedia(char letra[], float nota1, float nota2, float nota3){
  float mediaArit, mediaPond, soma;
  if(letra == 'a')
    return mediaArit = (nota1 + nota2 + nota3)/3;
  else if(letra == 'p')
    return mediaPond = ((nota1 * 5) + (nota2 * 3) + (nota3 * 2)) / 5 + 3 + 2;
  else
    return soma = nota1 + nota2 + nota3;
}

int main(int argc, char const *argv[]) {
  char letra = ' ';
  float nota1, nota2, nota3;
  float resultado;
  printf("Insira 3 notas\n");
  scanf("%f %f %f", &nota1, &nota2, &nota3);
  printf("Insira a letra 'a' para que seja calculada a media aritmetica\nInsira a letra 'p' para que seja calculada a media ponderada\nInsira a letra 's' para que as notas sejam somandas\n");
  do{
    scanf("%c", &letra);
    setbuf(stdin, NULL);
  }while (letra != 'a' && letra != 'p' && letra != 's');
  resultado = tipoMedia(letra, nota1, nota2, nota3);
  printf("\n%.2f\n", resultado);
  return 0;
}
