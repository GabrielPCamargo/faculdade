#include <stdio.h>

void minutesToTime(int totalMinutes, int* hours, int* minutes) {
    if(totalMinutes / 60 >= 1) {
        *hours = totalMinutes / 60;
        *minutes = totalMinutes % 60;
    }
}

int main() {

    int totalMinutes, hours = 0, minutes = 0;

    printf("Digite o numero de minutos passados: ");
    scanf("%d", &totalMinutes);
    minutesToTime(totalMinutes, &hours, &minutes);

    printf("Horario: %dh:%dmin", hours, minutes);
    return 0;
}