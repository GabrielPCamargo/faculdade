/*
    2)	Faça uma função que recebe um valor inteiro e verifica se o valor é positivo, 
    negativo ou zero. A função deve retornar 1 para valores positivos, -1 para negativos
     e 0 para o valor 0.
*/

#include <stdio.h>

int verificaNumero(int number) {
    int answer;
    if(number > 0) {
        answer = 1;
    } else {
        if (number < 0) {
            answer = -1;
        } else {
            answer = 0;
        }
    }
    return answer;
}

int main() {
    int number;

    printf("Digite um numero: ");
    scanf("%d", &number);

    number = verificaNumero(number);
    
    printf("Resultado: %d", number);
    return 0;
}