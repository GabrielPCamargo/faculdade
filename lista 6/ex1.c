#include<stdio.h>

int main() {
    int numbers[7], odds[7], i, j = 0;

    for(i = 0; i < 7; i++) {
        do {
            printf("Digite o valor %d: ", i + 1);
            scanf("%d", &numbers[i]);
        } while (numbers[i] < 10);
    }

    for(i = 0; i < 7; i++) {
        if(numbers[i] % 2 == 1) {
            odds[j] = numbers[i];
            j++;
        }
    }

    for(i = 0; i < 7; i++) {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    for(i = 0; i < j; i++) {
        printf("%d ", odds[i]);
    }

    return 0;
}