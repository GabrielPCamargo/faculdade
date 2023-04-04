#include <stdio.h>

int main() {
    int matrix[5][5], matrixBuffer[5];

    int i, j;

    for(i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if(i == j)matrixBuffer[i] = matrix[i][j];
        }
    }

    for(i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if((i + j) == 5) matrix[i][i] = matrix[i][j];
        }
    }

    for(i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if(i == j) matrix[i][i] = matrixBuffer[i];
        }
    }

    for(i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}