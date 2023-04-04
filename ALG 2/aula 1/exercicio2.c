/*
    Ler um vetor A de 6 elementos contendo o 
gabarito da Mega Sena. A seguir, ler um vetor B 
de 10 elementos contendo uma aposta. Escrever 
quantos pontos fez o apostador, e se ele fez a
sena (6 acertos), a quina (5 acertos) ou a quadra 
(4 acertos)
*/


#include <stdio.h>

void main() {
    int sena[6], bet[10], hits = 0, repeated;

    printf("Digite os numeros sorteados: ");
    for (int i = 0; i < 6; i++) {
        printf("%d: ", i);
        do {
            repeated = 0;
            scanf("%d", &sena[i]); 
            for (int j = 0; j < i; j++) {
                if(sena[i] == sena[j]) repeated = 1;
            }
            if(sena[i] < 0 || sena[i] > 60) {
                printf("Voce deve digitar valores entre 0 e 60\n");
            }
        } while(repeated);
    }

    printf("Digite os numeros da aposta: ");
    for (int i = 0; i < 10; i++) {
        printf("%d: ", i);
        do {
            repeated = 0;
            scanf("%d", &bet[i]); 
            for (int j = 0; j < i; j++) {
                if(bet[i] == bet[j]) repeated = 1;
            }
            if(bet[i] < 0 || bet[i] > 60) {
                printf("Voce deve digitar valores entre 0 e 60\n");
            }
        } while(repeated);
    }

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 10; j++) {
            if (bet[j] == sena[i]) hits++;
        }
    }

    switch (hits){
    case 6:
        printf("Acertou a mega\n");
        break;
    case 5:
        printf("Acertou a quina\n");
        break;
    case 4:
        printf("Acertou a quadra\n");
        break;
    default:
        printf("Voce acertou %d numeros", hits);
        break;
    }
    
}