#include <stdio.h>

void changeOrderNumber(int number[3]) {

    int cent, dez;

    for (int i = 0; i < 3; i++) {
        cent = number[i] / 100;
        number[i] %= 100;
        dez = number[i] / 10;
        number[i] %= 10;
        
        number[i] *= 100;
        number[i] += dez * 10;
        number[i] += cent;
    }

}

int main() {
    int numbers[3];

    for (int i = 0; i < 3; i++) {
        do {
            printf("Digite um numero com 3 digitos: ");
            scanf("%d", &numbers[i]);
        } while (numbers[i] < 100 || numbers[i] > 999);
    }

    changeOrderNumber(&numbers);
    for (int i = 0; i < 3; i++) {
        printf("O numero invertido e: %d\n", numbers[i]);  
    }
    

    return 0;
}