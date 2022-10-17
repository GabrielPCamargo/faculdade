#include<stdio.h>

int main() {
    float mes1[10], mes2[10], mes3[10], mes4[10], totalMes1 = 0, totalMes3 = 0;
    int i, mesMaior;

    for(i = 0; i < 10; i++) {
        do {
            printf("Digite o peso da cabra %d no mes 1: ", i + 1);
            scanf("%f", &mes1[i]);
        } while(mes1[i] <= 0);
        totalMes1 += mes1[i];
    }

    for(i = 0; i < 10; i++) {
        do {
            printf("Digite o peso da cabra %d no mes 2: ", i + 1);
            scanf("%f", &mes2[i]);
        } while(mes2[i] <= 0);
    }

    for(i = 0; i < 10; i++) {
        do {
            printf("Digite o peso da cabra %d no mes 3: ", i + 1);
            scanf("%f", &mes3[i]);
        } while(mes3[i] <= 0);
        totalMes3 += mes3[i];
    }

    for(i = 0; i < 10; i++) {
        if(mes1[i] > mes2[i]) {
            if(mes1[i] > mes3[i]) {
                printf("O mes com maior peso da cabra %d foi 1, peso: %.2f\n", i + 1, mes1[i]);
            } else {
                if(mes1[i] < mes3[i]) {
                    printf("O mes com maior peso da cabra %d foi 3, peso: %.2f\n", i+1, mes3[i]);
                } else {
                    printf("O mes com maior peso da cabra %d foi 1 e 3, peso: %.2f\n", i + 1, mes1[i]);
                }
            }

        } else {
            if(mes1[i] < mes2[i]) {
                if(mes2[i] > mes3[i]) {
                    printf("O mes com maior peso da cabra %d foi 1, peso: %.2f\n", i + 1, mes2[i]);
                } else {
                    if(mes2[i] < mes3[i]) {
                        printf("O mes com maior peso da cabra %d foi 3, peso: %.2f\n", i + 1, mes3[i]);
                        
                    } else {
                        printf("O mes com maior peso da cabra %d foi 2 e 3, peso: %.2f\n", i + 1, mes2[i]);
                    }
                }
            } else {
                printf("O mes com maior peso da cabra %d foi 1 e 2, peso: %.2f\n", i + 1, mes1[i]);
            }
        }

        if(mes1[i] > mes3[i]) {
            printf("A cabra %d teve perda de peso: %.2f\n", i + 1, mes1[i] - mes3[i]);
        } else {
            printf("A cabra %d teve ganho de peso: %.2f\n", i + 1, mes3[i] - mes1[i]);
        }
    }

    return 0;
}