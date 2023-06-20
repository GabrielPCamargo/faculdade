#include <stdio.h>
#include <stdlib.h>

int main() {
    int **mat, x, y;
    
    do {
        printf("Digite o x: ");
        scanf("%d", &x);
    } while (x <= 0);

     do {
        printf("Digite o y: ");
        scanf("%d", &y);
    } while (y <= 0);

    mat = (int**)malloc(x * sizeof(int*));

    if(mat != NULL) {
        for (int i = 0; i < y; i++)
        {
           *(mat + i) = (int*)malloc(y * sizeof(int));
        }
    }

    for(int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++)
        {
            do {
                printf("Digite o valor: [%d,%d]", i, j);
                scanf("%d", (*(mat + i) + j));
            } while(*(*(mat + i) + j) < 1 || *(*(mat + i) + j) > 10000);
        }
    }

    for(int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++)
        {
                printf("%d ", *(*(mat + i) + j));
        }
        printf("\n");
    }

    free(mat);


    return 0;
}