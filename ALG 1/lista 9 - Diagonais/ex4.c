/*
    4)	Elabore um programa que leia o nome e o sobrenome
     de uma pessoa em strings individuais. Posteriormente 
     informe a quantidade de letras do nome e do sobrenome. 
     Além disso junte o nome com o sobrenome em uma terceira
    string chamada nome completo e informe a quantidade de
    letras desta string. 
*/

#include<stdio.h>
#include<string.h>

int main() {
    char nome[30];
    char sobrenome[30];
    int qtdNome = 0, qtdSobrenome = 0;

    gets(nome);
    gets(sobrenome);

    for(int i = 0; nome[i] != '\0'; i++){
        qtdNome++;
    }

    for(int i = 0; sobrenome[i] != '\0'; i++){
        qtdSobrenome++;
    }

    char nomeCompleto[qtdNome + qtdSobrenome + 1];
    strcpy(nomeCompleto, nome);
    strcat(nomeCompleto, " ");
    strcat(nomeCompleto, sobrenome);

    printf("=========================\n");
    puts(nomeCompleto);
    printf("=========================\n");
    printf("Numero de letra no nome: %d\n", qtdNome);
    printf("Numero de letras no sobrenome: %d", qtdSobrenome);

    return 0;
}