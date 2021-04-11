#include <stdio.h>

void converteHora(int total_segundos, int* hora, int* min, int* seg){
  int horas_seg = 3600;
  *hora = (total_segundos / horas_seg);
  *min = (total_segundos - (horas_seg * (*hora))) / 60;
  *seg = (total_segundos - (horas_seg * (*hora)) - ((*min) * 60));
}

int main(int argc, char const *argv[]) {
  int total_sec, hora, min, seg;

  printf("Insira o total de segundos\n");
  scanf("%d", &total_sec);
  
  converteHora(total_sec, &hora, &min, &seg);
  printf("%d:%d:%d\n", hora, min, seg);
  return 0;
}
