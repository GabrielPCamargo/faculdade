#include<stdio.h>

int fact(int n) {
    if (n > 0) {
        return n * fact(n - 1);
    } else {
        return 1;
    }
}

float imprimeSerie(int n) {
    if(n > 0) {
        return (float)(1)/(float)fact(n) + imprimeSerie(n-1);
    } else {
        return 1;
    }
}

int main() {
    printf("Serie imprimida: %f", imprimeSerie(4));
    return 0;
}