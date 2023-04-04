/*
1)	Escreva um programa que utilizando uma função minmax que receba um vetor inteiro e os endereços 
de duas variáveis inteiras (min e max), e deposite nessas variáveis o valor do  mínimo valor do vetor 
e o valor de um elemento máximo do vetor, respectivamente. No main o vetor é lido via teclado e depois 
imprime os valores de min e max. O vetor armazena até 10 valores inteiros.
*/

#include <stdio.h>

void minMax(int vector[10], int* min, int* max) {
    *min = vector[0];
    for (int i = 0; i < 10; i++)
    {
        if(vector[i] < *min) {
            *min = vector[i];
        } else if (vector[i] > *max) *max = vector[i];
    }
    
}

int main() {
    int vector[10], min, max = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vector[i]);
    }
    
    minMax(vector, &min, &max);

    printf("\n");
    printf("min: %d\n", min);
    printf("max: %d\n", max);

    return 0;
}