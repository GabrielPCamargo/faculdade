/*
1)	Faça um programa que pergunte ao usuário quantos valores ele deseja armazenar 
em um vetor de doubles, depois use a função MALLOC para reservar (alocar) o espaço
de memória de acordo com o especificado pelo usuário. Use este vetor dinâmico como
um vetor comum, atribuindo aos 10 primeiros elementos do vetor valores aleatórios (rand)
entre 0 e 100. Exiba na tela os valores armazenados nos 10 primeiros elementos
do vetor (O vetor deve ter pelo menos um tamanho igual a 10 doubles, ou mais). 
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0;
    double *v;

    do {
        printf("Digite o numero de notas: ");
        scanf("%d", &n);
    } while (n < 10);

    v = (double *) malloc(n * sizeof(double));
    if(v == NULL) printf("Memory allocation error");


    for (int i = 0; i < 10; i++) {
        v[i] = rand() % 101;
    }

    for (int i = 0; i < n; i++) {
        printf("Valor da posicao %lf\n", v[i]);
    }

    return 0;
}