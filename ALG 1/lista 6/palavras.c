#include<stdio.h>
#include<string.h>

int main() {
    char frase [100];
    int conta_palavras = 1, i;
    gets(frase);
    for (i = 0; i < strlen(frase); i++) {
        if(frase[i] == ' ') conta_palavras++;
    }

    printf("Foram digitadas %d palavras", conta_palavras);

    return 0;
}