/*
    Elabore um programa que leia o nome de um professor (a), o sexo (F ou M) e a titulação 
    (1 doutorado ou 2 mestrado). O nome pode ter até 20 caracteres. 
    Depois de ler separadamente cada informação, escreva o nome  do professor(a) com a 
    complementação da sua titulação da seguinte forma: Dr (para professores),
    Dra (para professoras), Me (para professores) e Ma (para professoras).

    Faça as consistências necessárias para que o programa funcione corretamente, no caso de sexo 
    (M ou F) e titulação (1 ou 2).

    A idendação do código é obrigatória, assim como o uso adequado de nomes de variáveis e funções.

    Por exemplo: se o valor informado for:

    Nome: Maria

    Sexo: F

    Titulação: 2

    A saída será Ma Maria.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

main() {
    char nome[20], sexo, nomeCompleto[30] = {'\0'};
    int titulacao;

    printf("Digite o nome (ate 20 caracteres): ");
    gets(nome);

    do {
        printf("Digite o sexo (F/M): ");
        scanf(" %c", &sexo);
        sexo = toupper(sexo);
    } while (sexo != 'F' && sexo != 'M');

    do {
        printf("Digite a titulacao doutor(1) e mestrado (2): ");
        scanf("%d", &titulacao);
    } while (titulacao != 1 && titulacao != 2);

    if(sexo == 'F') {
        if(titulacao == 1) {
            strcat(nomeCompleto, "Dra ");
        } else {
            strcat(nomeCompleto, "Ma ");
        }
    } else {
        if(titulacao == 1) {
            strcat(nomeCompleto, "Dr ");
        } else {
            strcat(nomeCompleto, "Me ");
        }
    }

    strcat(nomeCompleto, nome);
    puts(nomeCompleto);
    
}
