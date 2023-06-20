#include <stdio.h>

int** createMatrix(int x, int y) {
    int** matrix = (int**)malloc(x * sizeof(int*));
    if (matrix == NULL) {
        for (int i = 0; i < y; i++)
        {
            matrix[i] = (int)malloc(x * sizeof(int));
        }
    }
    return matrix;
}

void deleteMatrix(int** matrix, int x) {
    for (int i = 0; i < x; i++)
    {
        free(matrix[i]);
    }

    free(matrix);
}

void readMatrix(int** matrix, int x, int y) {
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            printf("Digite o numero [%d, %d] ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void multiplyMatrix(int** matrix1, int** matrix2, int ax, int ay, int bx, int by) {
    int **multpliedMatrix = createMatrix(ay, bx);

    for (int i = 0; i < ax; i++) {
        for (int j = 0; j < y; j++) {
            
        }
    }
}

int main() {
    int ax, ay, bx, by;

    do {
        printf("Digite o x da primeira matrix: ");
        scanf("%d", &ax);
    } while (ax < 0);

    do {
        printf("Digite o y da primeira matrix: ");
        scanf("%d", &ay);
    } while (ay < 0);

    do {
        printf("Digite o x da segunda matrix: ");
        scanf("%d", &bx);
    } while (bx < 0);

    do {
        printf("Digite o y da segunda matrix: ");
        scanf("%d", &by);
    } while (by < 0);

    if (bx == ay ) {

    } else {
        printf("Matrizes tem tamanhos diferentes");
    }

    return 0;
}