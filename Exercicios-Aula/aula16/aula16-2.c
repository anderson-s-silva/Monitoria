#include <stdio.h>

float pesoideal(char sexo[], float altura){
  float pesomaneiro = 0;
  if (sexo == 'h'){
    pesomaneiro = (72.7*altura)-58;
  }else{
    pesomaneiro = (62.1*altura)-44.7;
  }
  return pesomaneiro;
}

int main(int argc, char const *argv[]) {
  char sexo = ' ';
  float altura;
  float pesobom;
  do{
    printf("Insira o sexo do individuo: ('h' para homem e 'm' para mulher)\n");
    scanf("%c", &sexo);
    setbuf(stdin, NULL);
  }while(sexo != 'h' && sexo != 'm');
    printf("Insira a altura em metros\n");
    scanf("%f", &altura);
    setbuf(stdin, NULL);
    pesobom = pesoideal(sexo, altura);
    printf("O peso ideal para o individuo: %f kg\n", pesobom);
  return 0;
}
