/*
    3) Escreva uma função recursiva que faça o seguinte: leia um número; se o número for
    negativo, a função para; caso contrário, a função imprime o número e faz uma
    chamada recursiva a si mesma. 
*/

#include <stdio.h>

int myFunction() {
    int number;
    printf("Digite um numero");
    scanf("%d", &number);
    if(number > 0) {
        printf("Numero digitado: %d", number);
        return myFunction();
    } else {
        return number;
    }
}

int main() {
    myFunction();
    return 0;
}