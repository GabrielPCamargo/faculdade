#include <stdio.h>

void main() {
    int vector[5], searchedValue, position;

    printf("Digite os valores do vetor: \n");
    for (int i = 0; i < sizeof(vector) / sizeof(vector[0]); i++) {
        printf("Lugar %d: ", i);
        scanf("%d", &vector[i]);
    }

    printf("Digite o valor a ser encontrado: ");
    scanf("%d", &searchedValue);
    for (int i = 0; i < sizeof(vector) / sizeof(vector[0]); i++) {
        if (vector[i] == searchedValue) {
            printf("Valor encontrado na posicao: %d", i);
            position = i;
            i = sizeof(vector) / sizeof(vector[0]);
        }
    }

    if (position == -1) {
        printf("Valor não encontrado");
    }
}