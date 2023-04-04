#include<stdio.h>

int main() {

    float salario[5], salarioTotal = 0;
    int i, j = 0, mesMaiorSalario = 0, aumento = 0;

    for(i = 0; i < 5; i++) {
        do {
            printf("Digite o salario do mes %d: ", i + 1);
            scanf("%f", &salario[i]);
        } while(salario[i] < salario[j]);
        salarioTotal += salario[i];
        j = (i == 0) ? 0 : ++j;
    }

    for(i = 0, j = 1; i < 5; i++) {
        if(salario[j] > salario[i]) {
            printf("Houve aumento no salario no mes %d\n", j + 1);
            aumento = 1;
        }

        j = (i >= 4) ? 4 : ++j;
    }
    if(!aumento) {
        printf("Nao houve aumento\n");
    }
    printf("O total de salarios recebidos: %.2f\n", salarioTotal);
    return 0;
}