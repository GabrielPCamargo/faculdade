#include<stdio.h>
#include<string.h>

int main() {
    char frase[30];
    int i, j;
    printf("Digite a frase: ");
    gets(frase);

    for(i = strlen(frase); i >= 0; i--) {
        printf("%c", frase[i]);
    }
    return 0;
}