/*
    Elabore um programa que manipule com uma matriz 5X5 de inteiros, a qual será preenchida
    com valores lidos pelo teclado. Os valores devem ser maiores que 10 e pares. Depois de toda
    preenchida a matriz imprima ela (como foi preenchida pelo teclado) e depois troque os valores
    que estão na diagonal principal pelos valores que estão na diagonal secundária, assim a 
    diagonal principal ficará idêncida à diagonal secundária e, no final do processo,  imprima a 
    matriz modificada.
    Manipulando com a matriz modificada crie um vetor com os valores armazenados na matriz 
    que sejam maiores que 40. Após a vriação do vetor imprima ele de traz para frente.

    Observe: consista os valores lidos do teclado para que eles atendam as regras definidas.
    Use os tipos de dados adequados e os nomes das variáveis seguindo as normas informadas nas aulas.
*/

#include <stdio.h>

main() {
    int matrix[5][5], valorTeclado, diagonalSecundaria[5], maiorQuarenta[25], k = 0;

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            do {
                printf("Digite o valor da posicao [%d,%d]: ", i, j);
                scanf("%d", &valorTeclado);
            } while(valorTeclado <= 10 || valorTeclado % 2 != 0);
            matrix[i][j] = valorTeclado;
        }
    }

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n================================\n");

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if(4 - i == j) {
                diagonalSecundaria[i] = matrix[i][j];
            }
        }
    }

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if(i == j) {
                matrix[i][j] = diagonalSecundaria[i];
            }
        }
    }

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n================================\n");

    
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if(matrix[i][j] > 40) {
                maiorQuarenta[k] = matrix[i][j];
                k++;
            }
        }
    }

    printf("\n");
    for (int i = k - 1; i >= 0; i--)
    {
        printf("%d ", maiorQuarenta[i]);
    }

    printf("\n");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", maiorQuarenta[i]);
    }

}