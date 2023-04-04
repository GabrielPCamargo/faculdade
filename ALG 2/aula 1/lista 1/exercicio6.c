#include <stdio.h>

void main() {
    int matrix[5][5];

    int i, j, greater, positionI, positionJ;

    for(i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if(i == j) {
                matrix[i][j] = 1;
            } else {
                matrix[i][j] = 0;
            }
        }
    }

    for(i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}