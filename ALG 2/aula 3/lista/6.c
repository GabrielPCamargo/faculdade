#include<stdio.h>

float imprimeSerie(int n) {
    if(n > 1) {
        return (float)(1 + n*n)/n + imprimeSerie(n-1);
    } else {
        return 2;
    }
}

int main() {
    printf("Serie imprimida: %f", imprimeSerie(3));
    return 0;
}