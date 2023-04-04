#include <stdio.h>

int divideByTen(float* number) {
    int result;
    result = ((int)*number % 10);
    *number = (*number / 10);
    return result;
}

int main() {

    float numero;
    int resto;
    printf("Digite um numero: ");
    scanf("%f", &numero);
    resto = divideByTen(&numero);
    printf("O resto da divisao e %d, a divisao e %.2f", resto, numero);
    return 0;
}