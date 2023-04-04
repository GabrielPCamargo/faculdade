/*
   /*
    3)	Faça um programa que leia 2 valores inteiros e chame uma função que receba estas  2 variáveis e troque o seu conteúdo, 
    ou seja, esta função é chamada passando duas variáveis e, após  a execução da função¸ os valores das duas variáveis devem 
    ter sido trocados entre si. Utilize ponteiros para a implementação do programa.
*/


#include <stdio.h>

int maior(int* a, int* b) {
    printf("variavel a: %d, variavel b: %d\n", a, b);
    if(a > b) {
        printf("Endereco:: %x\n", a);
        return *a;
    } else {
        return *b;
    }
}

int main() {
    int a = 3, b =5;
    int greater = maior(&a, &b);
    printf("O maior e o de numero: %d\n", greater);
    return 0;
}
