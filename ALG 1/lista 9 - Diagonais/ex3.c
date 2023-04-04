/*
    3)	Elabore um programa que leia dados em matriz 4X4 
    de inteiros e posteriormente imprima os elementos que
     estão armazenados abaixo da diagonal secundária e
      some os valores que estão acima da diagonal principal.
*/

#include<stdio.h>

int main() {
    int numbers[4][4], sumUpperMain = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Digite o numero na posicao [%d, %d]", i, j);
            scanf("%d", &numbers[i][j]);
        }
        printf("\n");
        printf("\n");
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if(i < j) {
                printf("%d ", numbers[i][j]);
            } else {
                if (i > j) sumUpperMain += numbers[i][j];
                
            }
        }
    }

    printf("Soma dos numeros acima da diagonal principal: %d", sumUpperMain);
    return 0;
}