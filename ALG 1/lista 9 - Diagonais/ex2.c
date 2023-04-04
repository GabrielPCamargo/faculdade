/*
    2)	Elabore um programa que leia elementos inteiros 
    em uma matriz 4X4 e posteriormente crie um vetor com os
     elementos armazenados na diagonal principal da matriz.
*/

#include<stdio.h>

int main() {
    int numbers[4][4], vector[4];
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

    for(int i = 0; i < 4; i++) {
        vector[i] = numbers[i][i];
    }

    for(int i = 0; i < 4; i++) {
        printf("\n%d ", vector[i]);
    }
    
    return 0;
}