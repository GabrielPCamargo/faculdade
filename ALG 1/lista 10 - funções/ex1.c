/*
    1)	Escreva um programa que implementa o uso de uma a função que calcule 
    e retorne a distância entre dois pontos ( x1, y1) e (x2, y2). 
    Todos os números e valores de retorno devem ser do tipo float.
*/

#include <stdio.h>
#include <math.h>

float distanciaEntrePontos(float x1, float y1, float x2, float y2) {
    float distance;
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return distance;
}

int main() {
    float x1, x2, y1, y2, distancia;
    printf("Digite o X1: ");
    scanf("%f", &x1);
    printf("Digite o Y1: ");
    scanf("%f", &y1);
    printf("Digite o X2: ");
    scanf("%f", &x2);
    printf("Digite o y2: ");
    scanf("%f", &y2);
    distancia = distanciaEntrePontos(x1, y1, x2, y2);
    printf("Distancia entre os dois pontos: %.2f", distancia);
    return 0;
}