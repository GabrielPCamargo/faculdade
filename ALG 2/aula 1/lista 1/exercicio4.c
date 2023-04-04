#include <stdio.h>

void main() {
    int vector[9][2] = {1,2,3,4,5,6,7,8,9,5,7,6,9,2,8,4,0,3};

    printf("Digite os valores do vetor: \n");
    for (int i = 0; i < sizeof(vector) / sizeof(vector[0]); i++) {
        printf("Lugar %d: ", i);
        scanf("%d", &vector[i]);
    }
    
    for (int i = 0; i < sizeof(vector) / sizeof(vector[0]); i++) {
        printf("%d, ", i);
    }
   
    for (int i = 0; i < sizeof(vector) / sizeof(vector[0]); i++) {
        printf("Posicao %d do vetor: %d\n", i, vector[i]);
    }

}