#include <stdio.h>

void main() {
    int vector[15], searchedValue, aux, changed = 0;

    printf("Digite os valores do vetor: \n");
    for (int i = 0; i < sizeof(vector) / sizeof(vector[0]); i++) {
        printf("Lugar %d: ", i);
        scanf("%d", &vector[i]);
    }
    
    do {
        changed = 0;
        for (int i = 0; i < (sizeof(vector) / sizeof(vector[0])) - 1; i++) {
            if(vector[i] == 0 && vector[i + 1] != 0) {
                vector[i] = vector[i + 1];
                vector[i + 1] = 0;
                changed = 1;
            }
        }
    } while (changed);
    
    for (int i = 0; i < sizeof(vector) / sizeof(vector[0]); i++) {
        printf("Posicao %d do vetor: %d\n", i, vector[i]);
    }

}