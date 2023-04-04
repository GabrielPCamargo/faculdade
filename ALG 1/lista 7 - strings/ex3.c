#include<stdio.h>
#include<string.h>

int main() {
    char frase[30];
    int i, j, lastSpace;
    printf("Digite a frase: ");
    gets(frase);
    printf("\n");

    lastSpace = 0;

    for(i = 0; i < strlen(frase); i++) {
        printf("%c", frase[i]);
        if(i == strlen(frase) - 1) printf(" ");
        if(frase[i] == ' ' || i == strlen(frase) - 1) {
            for(j = lastSpace; j <= i; j++) {
                printf("%c", frase[j]);
            }
            lastSpace = i + 1;
        }
    }
    return 0;
}