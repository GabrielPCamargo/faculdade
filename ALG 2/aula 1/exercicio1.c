#include <stdio.h>

void main() {
    int x[] = { 0, 1, 2, 3, 4, 5};
    int y[] = { 5, 8, 5, 3, 2, 1};
    
    int escalarProduct = 0;

    for (int i = 0; i < sizeof(x) / sizeof(x[0]); i++) {
        escalarProduct += x[i] * y[i];
    }

    printf("Vetor x: ");
    for (int i = 0; i < sizeof(x) / sizeof(x[0]); i++) {
        printf("%d, ", x[i]);
    }
    printf("\n");

    printf("Vetor y: ");
    for (int i = 0; i < sizeof(x) / sizeof(x[0]); i++) {
        printf("%d, ", y[i]);
    }
    printf("\n");

    printf("Produto escalar: %d", escalarProduct);
}