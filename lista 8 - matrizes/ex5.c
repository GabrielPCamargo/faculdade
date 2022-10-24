/*
5)	Faça um programa que crie duas matrizes 4 x 4 de inteiros  
e posteriormente cria uma terceira com os maiores valores de cada posição das matrizes lidas.
*/

#include<stdio.h>

int main() {
    int numbers[4][4], numbers2[4][4], numbersSum[4][4], i, j, greaterTen = 0;

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            scanf("%d", &numbers[i][j]);
        }
    }

    printf("\n================\n");

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            scanf("%d", &numbers2[i][j]);
        }
    }

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            if(numbers[i][j] > numbers2[i][j]) {
                numbersSum[i][j] = numbers[i][j];
            } else {
                numbersSum[i][j] = numbers2[i][j];
            }
           
        }
    }

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d ", numbersSum[i][j]);
        }
        printf("\n");
    }


    return 0;
}