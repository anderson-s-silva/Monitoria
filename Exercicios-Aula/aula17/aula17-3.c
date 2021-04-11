#include <stdio.h>
#include <string.h>

typedef struct{
  char nome[50];
  char estilo[50];
  int integrantes;
  int posicao;
}Bandas;

void preenche(Bandas* grupo){
  for(int i = 0; i < 5; i++){
    printf("Insira o nome da Banda\n");
    fgets(grupo[i].nome, 50, stdin);
    grupo[i].nome[strcspn(grupo[i].nome,"\n")]='\0';
    setbuf(stdin, NULL);
    printf("Insira o estilo musica da banda\n");
    fgets(grupo[i].estilo, 50, stdin);
    grupo[i].estilo[strcspn(grupo[i].estilo,"\n")]='\0';
    setbuf(stdin, NULL);
    printf("Insira a quantidade de integrantes da banda\n");
    scanf("%d", &grupo[i].integrantes);
    setbuf(stdin, NULL);
    printf("Insira a posicao dessa banda no seu top 5\n");
    scanf("%d", &grupo[i].posicao);
    setbuf(stdin, NULL);
  }
  for(int i = 0; i < 5; i++){
    printf("Banda #%d\nNome:%s\nEstilo Musical:%s\nQuantidade de integrantes:[%d]\nPosicao no top 5: [%d]\n", i, grupo[i].nome, grupo[i].estilo, grupo[i].integrantes, grupo[i].posicao);
  }
}

void exibePosicRank(Bandas* grupo){
  int posicao;
  do{
    printf("Insira a posicao que deseja ver: (1 a 5)\n");
    scanf("%d", &posicao);
  }while (posicao > 5 || posicao < 1);
  printf("Banda #%d\nNome:%s\nEstilo Musical:%s\nQuantidade de integrantes:[%d]\nPosicao no top 5:[%d]\n", posicao, grupo[posicao].nome, grupo[posicao].estilo, grupo[posicao].integrantes, grupo[posicao].posicao);
}

void exibeEstilo(Bandas* grupo){
  char tipo[50];
  printf("Insira um estilo de musica para que as bandas desse estilo sejam exibidas\n");
  fgets(tipo, 50, stdin);
  tipo[strcspn(tipo,"\n")]='\0';
  setbuf(stdin, NULL);
  for(int i = 0; i < 5; i++){
    if(strcmp(grupo[i].estilo, tipo) == 0){
      printf("Banda #%d\nNome:%s", i, grupo[i].nome);
    }
  }
}

void verificaNome(Bandas* grupo){
  char nome[50];
  printf("Insira um nome de banda para verificar se esta no seu top 5\n");
  fgets(nome, 50, stdin);
  setbuf(stdin, NULL);
  int aux = 0;
  nome[strcspn(nome,"\n")]='\0';
  for(int i = 0; i < 5; i++){
    if(strcmp(grupo[i].nome, nome) == 0){
      printf("Banda #%d\nNome:%s", i, grupo[i].nome);
      aux = 1;
    }
  }
  if(aux == 0){
    printf("A banda nao foi encontrada :c\n");
  }
}

int main(int argc, char const *argv[]) {
  Bandas grupos[5];
  int menu = 0;
  do{
    do{
      printf("\tMenu\t\nInsira 1 para preencher o top5 das suas bandas favoritas\nInsira 2 para ver qual banda esta no rank desejado\nInsira 3 para ver quais bandas do top5 tocam o estilo desejado\nInsira 4 par ver se um nome de banda esta no top5\nInsira 5 para sair do menu\n");
      scanf("%d", &menu);
      setbuf(stdin, NULL);
    }while (menu < 1 || menu > 5);
    switch (menu) {
      case 1:
      preenche(grupos);
      break;

      case 2:
      exibePosicRank(grupos);
      break;

      case 3:
      exibeEstilo(grupos);
      break;

      case 4:
      verificaNome(grupos);
      break;
    }
  }while(menu != 5);
  return 0;
}
