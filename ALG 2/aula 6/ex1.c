/*
Elabore um programa que armazena as notas de 2 provas e 1 trabalho de um número 
não fixo de alunos de uma turma (a nota 1 tem peso 2, a 2 tem peso 3 e a 3 peso 1),
 posteriormente calcule a média das três notas para cada aluno da turma. 
 Depois imprima um relatório que compara a média de cada aluno com a média da turma 
 informando ao lado do índice do aluno e sua média se ele está abaixo, acima ou na média da turma.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0;
    float *p1, *p2, *t, *media, mediaTurma;

    do {
        printf("Digite o numero de notas: ");
        scanf("%d", &n);
    } while (n <= 0);

    p1 = (float *) malloc(n * sizeof(float));
    if(p1 == NULL) printf("Memory allocation error");
    p2 = (float *) malloc(n * sizeof(float));
    if(p2 == NULL) printf("Memory allocation error");
    t = (float *) malloc(n * sizeof(float));
    if(t == NULL) printf("Memory allocation error");
    media = (float *) malloc(n * sizeof(float));
    if(media == NULL) printf("Memory allocation error");


    for (int i = 0; i < n; i++) {
        printf("P1, aluno %d: ", i);
        scanf("%f", &p1[i]);
        printf("P2, aluno %d: ", i);
        scanf("%f", &p2[i]);
        printf("T, aluno %d: ", i);
        scanf("%f", &t[i]);
    }

    for (int i = 0; i < n; i++)
    {
        media[i] = (p1[i]*2 + p2[i]*3 + t[i]*1)/6; 
    }
    
    for (int i = 0; i < n; i++)
    {
        mediaTurma += media[i];
    }

    mediaTurma /= n;

    for (int i = 0; i < n; i++) {
        if (media[i] < mediaTurma)
        {
            printf("Aluno %d abaixo da media, media: %f, MediaTurma: %f\n", i, media[i], mediaTurma);
        } else {
            printf("Aluno %d na media, media: %f, MediaTurma: %f\n", i, media[i], mediaTurma);
        }
        
    }
    
    free(p1);
    free(p2);
    free(t);
    free(media);

     return 0;
}