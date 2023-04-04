/*
    2)	Dado dois vetores do tipo inteiro, o primeiro com 5 elementos e segundo com 8 elementos,
     faça um programa em C que imprima todos os elementos comuns aos dois vetores.
*/

#include<stdio.h>

int main() {
    int vector1[5];
    int vector2[7];
    int vectorSimilar[5];
    int k = 0;
    int isThere = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite o numero %d do veotor 1:", i);
        scanf("%d", &vector1[i]);
    }

    for (int i = 0; i < 7; i++) {
        printf("Digite o numero %d do veotor 2:", i);
        scanf("%d", &vector2[i]);
    }

    for (int i = 0; i < 5; i++) {
        isThere = 0;

        for (int j = 0; j < 7; j++) {
            if(vector1[i] == vector2[j]) {
                for (int l = 0; l < k; l++) {
                    if(vectorSimilar[j] == vector1[i]) {
                        isThere = 1;
                    }
                }
                if(!isThere) {
                    vectorSimilar[j] = vector1[i];
                    j++;
                }
                
            }
        }
        
    }
    
    return 0;
}