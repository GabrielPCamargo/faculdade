/*
    5)	Faça um programa que imite um editor de textos. Inicialmente você irá ler os dados digitados pelo 
    usuário (linhas de texto) e criar um vetor em memória onde serão armazenados os textos fornecidos pelo 
    usuário (texto de 1 até no máximo 50 linhas). O usuário vai escrever o seu texto, terminando por uma linha
     onde ele irá escrever apenas a palavra ‘FIM’, o que determina que ele não deseja mais digitar linhas de texto. 
     Sendo assim, o texto final pode ter um número variável de linhas, entre 1 e 50. Salvar o conteúdo armazenado na 
     memória neste vetor, em um arquivo texto em disco. Sugestão: use o comando “gets” ou “fgets” para ler as linhas 
     de texto digitadas pelo usuário. 
*/

#include "stdio.h"
#include "string.h"

int main() {
    char linha[50][512];
    int i = 0, fim = 0;

    while (i < 50 && !fim) {
        fgets(linha[i], sizeof(linha) / 50, stdin);
        if(!strcmp(linha[i], "FIM\n")) {
            fim = 1;
        } else {
            i++;
        }
    }

    FILE *f = fopen("text.txt", "w");

    if(f != NULL) {
        int total = i;
        for (i = 0; i < total; i++)
        {
        fputs(linha[i], f);
        }

        fclose(f);
    } else {
        printf("Nao foi possivel abrir o arquivo");
    }

    return 0;
}