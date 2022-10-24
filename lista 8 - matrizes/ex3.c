/*
3)	Faça um programa que manipule com uma matriz 4 x 4 de inteiros, 
imprima a matriz e retorne a localização (linha e a coluna) do maior valor. 
*/
#include<stdio.h>

int main() {
    int numbers[4][4], i, j, greater, greaterI, greaterJ;

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            scanf("%d", &numbers[i][j]);
        }
    }

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            if(i == 0 && j == 0) greater = numbers[i][j];
            if(numbers[i][j] > greater) {
                greater = numbers[i][j];
                greaterI = i;
                greaterJ = j;
            }
        }
    }

    printf("O maior numero digitado foi: %d, no indice [%d,%d]", greater, greaterI, greaterJ);

    return 0;
}