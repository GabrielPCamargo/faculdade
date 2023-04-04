/*
    1)	Elabore um programa que manipule com uma matriz 5 x 5
     de inteiros, posteriormente conte quantos elementos da
      diagonal secundária são maiores que 20.
*/

#include<stdio.h>

int main() {
    int numbers[5][5], greaterTwenty = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Digite o numero na posicao [%d, %d]", i, j);
            scanf("%d", &numbers[i][j]);
        }
        printf("\n");
        printf("\n");
    }

    for(int i = 0; i < 5; i++) {
        if(numbers[i][i] > 20) {
            greaterTwenty++;
        }
    }

    printf("Houve %d numeros maiores que 20 na diagonal principal", greaterTwenty);
    
    return 0;
}