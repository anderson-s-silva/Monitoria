#include <stdio.h>

typedef struct{
  int hora, min, seg;
}Horario;

void converteHorario(int total_segundos, Horario* hor){
  int horas_seg = 3600;
  hor->hora = (total_segundos / horas_seg);
  hor->min = (total_segundos - (horas_seg * (hor->hora))) / 60;
  hor->seg = (total_segundos - (horas_seg * (hor->hora)) - ((hor->min) * 60));
}

int main(int argc, char const *argv[]) {
  Horario relogio;
  int total_sec;

  printf("Insira o total de segundos\n");
  scanf("%d", &total_sec);

  converteHorario(total_sec, &relogio);
  printf("%d:%d:%d\n", relogio.hora, relogio.min, relogio.seg);

  return 0;
}
