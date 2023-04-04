/*
    Escreva uma função recursiva, ImprimeSerie(i,j,k: inteiro), que imprime na tela a
    série de valores do intervalo [i,j], com incremento k. 
*/

#include <stdio.h>

int somaSerie(int i, int j, int k) {
    if(i <= j) {
        return i + somaSerie(i + k, j, k);
    } else {
        return 0;
    }
}

int main() {
    printf("Valor da soma %d", somaSerie(2,10,1));
    return 0;
}