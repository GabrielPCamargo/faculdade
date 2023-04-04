/*
1)	Elabore um programa que manipule com uma matriz 4 x 4 de inteiros, conte e escreva quantos valores maiores que 10 ela possui.
*/

#include<stdio.h>

int main() {
    int numbers[4][4], i, j, greaterTen = 0;

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            scanf("%d", &numbers[i][j]);
        }
    }

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            if(numbers[i][j] > 10) greaterTen++;
        }
    }

    printf("Foram digitados %d numeros maiores que 10", greaterTen);

    return 0;
}