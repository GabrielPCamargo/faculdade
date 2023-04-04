#include <stdio.h>

void main() {
    int matrix[4][4], matrixBuffer[4];

    int i, j;

    for(i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if(i == 0) {
                matrixBuffer[j] = matrix[i][j];
                matrix[i][j] = matrix[j][3];
            }
            if (j == 3) {
                matrix[i][j] = matrixBuffer[i];
            }
        }
    }

    for(i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}