#include <stdio.h>

void main() {
    int vector[16], auxiliar[8];

    printf("Digite os valores do vetor: \n");
    for (int i = 0; i < sizeof(vector) / sizeof(vector[0]); i++) {
        printf("Lugar %d: ", i);
        scanf("%d", &vector[i]);
    }

    for(int i = 0; i < 8; i++) {
        auxiliar[i] = vector[i];
        vector[i] = vector[i + 8];
        vector[i + 8] = auxiliar[i];
    }

    for (int i = 0; i < sizeof(vector) / sizeof(vector[0]); i++) {
        printf("Posicao %d do vetor: %d\n", i, vector[i]);
    }
}