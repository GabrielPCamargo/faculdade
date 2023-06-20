/*
    6)	Faça um programa que leia (do teclado) um cadastro de 10 alunos, indicando o nome, nota1, nota2.
     Calcule a média aritmética simples dos 10 alunos e depois escreva em um arquivo texto os dados de 
     cada aluno: nome, nota1, nota2 e média. Lembre-se de que as notas e média deverão ser apresentadas 
     como valores que possuem até 2 casas após a vírgula. 
*/

#include <stdio.h>

typedef struct {
    char nome[20];
    float nota1;
    float nota2;
    float media;
} aluno;

int main() {

    aluno alunos[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Digite o nome nota1 nota2 dos alunos: ");
        scanf("%s %f %f", alunos[i].nome, &alunos[i].nota1, &alunos[i].nota2);
        alunos[i].media = (alunos[i].nota1 + alunos[i].nota2) / 2;
    }

    FILE *f;

    f = fopen("notas.txt", "w");

    if(f != NULL) {
        for (int i = 0; i < 3; i++)
        {
            fprintf(f, "Nome: %s nota1: %.2f nota2: %.2f media: %.2f\n", alunos[i].nome, alunos[i].nota1, alunos[i].nota2, alunos[i].media);
        }
        
        fclose(f);
    } else {
        printf("Nao foi possivel abrir o arquivo");
    }

    return 0;
}