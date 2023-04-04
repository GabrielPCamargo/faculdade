#include <stdio.h>

void readTimeClock(int time[]) {
    do {
        printf("Digite a quantidade de horas: ");
        scanf("%d", &time[0]);
    } while (time[0] < 0 || time[0] > 23);

    do {
        printf("Digite a quantidade de minutos: ");
        scanf("%d", &time[1]);
    } while (time[1] < 0 || time[1] > 59);

    do {
        printf("Digite a quantidade de segundos: ");
        scanf("%d", &time[2]);
    } while (time[2] < 0 || time[2] > 59);
}

void calculateDifference(int time1[],int  time2[],int  difference[3]) {
    for (int i = 0; i < 3; i++)
    {
        if(time1[i] - time2[i] < 0) {
            if (i != 0 && difference[i-1] != 0)
            {
                difference[i-1] = difference[i-1] - 1;
                time1[i] = time1[i] + 60;
            }
            
        }
        difference[i] = time1[i] - time2[i];
    }
    
}

int main() {
    int time1[3], time2[3], differenceTime[3];
    printf("Digite para o tempo um: \n");
    readTimeClock(time1);
    printf("Digite para o tempo dois: \n");
    readTimeClock(time2);
    calculateDifference(time1, time2, differenceTime);
    printf("A diferenca do horario e: %dh, %dm, %ds", differenceTime[0], differenceTime[1], differenceTime[2]);


    return 0;
}