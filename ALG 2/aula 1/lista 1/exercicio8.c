#include <stdio.h>

void main() {
    int matrix[6][6];

    int i, j, greater10 = 0;

    for(i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            if(matrix[i][j] > 10) {
                greater10++;
            }
        }
    }

    printf("Foram encontrados %d valores maiores que 10 \n", greater10);
}