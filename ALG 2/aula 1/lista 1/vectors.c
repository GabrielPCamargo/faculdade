#include <stdio.h>
#include "vectors.h"

void scanvector(int vector[], int tam) {
    printf("Digite os valores do vetor: \n");
    for (int i = 0; i < tam / sizeof(vector[0]); i++) {
        printf("Lugar %d: ", i);
        scanf("%d", &vector[i]);
    }
}

void printvector(int vector[], int tam) {
    for (int i = 0; i < tam / sizeof(vector[0]); i++) {
        printf("Posicao %d do vetor: %d\n", i, vector[i]);
    }
}