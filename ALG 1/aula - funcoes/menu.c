#include<stdio.h>

int menu() {
    int opcao;
    printf("Menu\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Digite a opcao: ");
    scanf("%d", &opcao);
    return opcao;
}

int main() {

    return 0;
}