#include <stdio.h>

void converteHora(int total_segundos, int *hora, int *min, int* seg) {
    *hora = total_segundos / 3600;
    *min = (total_segundos % 3600)/60;
    *seg = (total_segundos % 3600)%60;
}

int main() {
    int hora, min, seg, total_segundos;
    total_segundos = 7360;
    converteHora(total_segundos, &hora, &min, &seg);
    printf("Total segundos: %d; Horas%d, Minutos: %d, Segundos: %d\n", total_segundos, hora, min, seg);
    return 0;
}