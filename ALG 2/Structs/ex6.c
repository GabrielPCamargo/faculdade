/*

6)  Elabore um programa que seja uma agenda de compromissos e:
 • Crie e leia um vetor de 5 estruturas de dados com: compromisso (máximo 60 letras) e data. 
 A data deve ser outra estrutura de dados contendo dia, mês e ano. 
 • Leia dois inteiros M e A e mostre todos os compromissos do mês M do ano A. Repita o procedimento até ler´ M = 0.
*/

#include <stdio.h>


struct DATA {
    int ano;
    int mes;
    int dia;
};

struct agendamento {
    char compromisso[60];
    struct DATA data;
};

int main() {
    int m, a;
    struct agendamento agenda[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o nome do compromisso: ");
        fgets(agenda[i].compromisso, 60, stdin);
        printf("Digite o dia: ");
        scanf("%d", &agenda[i].data.dia);
        printf("Digite o mes: ");
        scanf("%d", &agenda[i].data.mes);
        printf("Digite o ano: ");
        scanf("%d", &agenda[i].data.ano);
        getchar();
    }
    

    do {
        printf("Digite o ano: ");
        scanf("%d", &a);
        printf("Digite o ano: ");
        scanf("%d", &m);
        if(m != 0) {
            for (int i = 0; i < 5; i++)
            {
                if(a == agenda[i].data.ano && m == agenda[i].data.mes) {
                    printf("Compromisso: %s", agenda[i].compromisso);
                }
            }
            
        }
    } while (m != 0);

    return 0;
}