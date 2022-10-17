#include<stdio.h>

int main() {
    int qtdAsteriscos, i, j, meio;
    do {
        printf("Digite a quantidade de asteriscos(impares): ");
        scanf("%d", &qtdAsteriscos);
    } while (qtdAsteriscos <= 0 || qtdAsteriscos % 2 != 1);

    meio = qtdAsteriscos / 2;

    for (i = 0; i <= meio; i++) {
        for(j = 0; j < qtdAsteriscos; j++) {
            if(j >= (meio - i) && j <= (meio + i)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (i = meio; i >= 0; i--) {
        for(j = 0; j < qtdAsteriscos; j++) {
            if(j >= (meio - i) && j <= (meio + i)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}