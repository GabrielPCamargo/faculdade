/*
    Escreva uma função recursiva, ImprimeSerie(i,j,k: inteiro), que imprime na tela a
    série de valores do intervalo [i,j], com incremento k. 
*/

#include <stdio.h>

int imprimeSerie(int i, int j, int k) {
    if(i <= j) {
        printf("%d ", i);
        return imprimeSerie(i + k, j, k);
    } else {
        return 0;
    }
}

int main() {
    imprimeSerie(2,10,2);
    return 0;
}