/*
    3)	Faça um programa que leia 2 valores inteiros e chame uma função que receba estas  2 variáveis e troque o seu conteúdo, 
    ou seja, esta função é chamada passando duas variáveis e, após  a execução da função¸ os valores das duas variáveis devem 
    ter sido trocados entre si. Utilize ponteiros para a implementação do programa.
*/


#include <stdio.h>

void troca(int* a, int* b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 3, b =5;
    troca(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}