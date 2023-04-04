#include <stdio.h>

void main() {
    int matrix[8][8];

    int i, j;

    for(i = 0; i < 8; i++) {
        for (j = 0; j < 2; j++) {
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            if(j > i) matrix[i][j] = 0;
        }
    }

    for(i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}