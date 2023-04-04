#include <stdio.h>

void main() {
    int matrix[5][5];

    int i, j, greater, positionI, positionJ;

    for(i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    greater = matrix[0][0];

    for(i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if(matrix[i][j] > greater) {
                greater = matrix[i][j];
                positionI = i;
                positionJ = j;
            }
        }
    }

    printf("Maior valor = %d, na posicao [%d,%d]", greater, positionI, positionJ);
}