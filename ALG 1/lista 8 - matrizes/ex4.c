/*
    4)	Faça um programa que manipule com uma matriz 5 x 5 de inteiros. 
    Leia também um valor inteiro independente. 
    O programa deverá fazer uma busca à desse valor na matriz e, ao final, 
    escrever a localização (linha e coluna) ou uma mensagem de “não encontrado”. 

*/

#include<stdio.h>

int main() {
    int numbers[5][5], i, j, number, found = 0, foundI, foundJ;

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            scanf("%d", &numbers[i][j]);
        }
    }

    printf("Digite o numero a ser encontrado: ");
    scanf("%d", &number);

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            if(numbers[i][j] == number) {
                found = 1;
                foundI = i;
                foundJ = j;
            }
        }
    }

    if(found) {
        printf("Foi encontrado o numero %d, no indice [%d,%d]", number, foundI, foundJ);
    } else {
        printf("Numero nao foi encontrado");
    }

    return 0;
}