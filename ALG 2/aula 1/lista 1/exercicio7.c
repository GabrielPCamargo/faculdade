#include <stdio.h>

int main() {
    int matrix1[4][4], matrix2[4][4], greater[4][4];

    int i, j;

    for(i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Digite o valor matrix1 da posicao [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    for(i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Digite o valor matrix2 da posicao [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    for(i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if(matrix1[i][j] > matrix2[i][j]) {
                greater[i][j] = matrix1[i][j];
            } else {
                greater[i][j] = matrix2[i][j];
            }
        }
    }

    for(i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", greater[i][j]);
        }
        printf("\n");
    }

    return 0;
}