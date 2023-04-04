#include<stdio.h>
#include<string.h>

int main() {
    char frase[30];
    int i, j;
    printf("Digite a frase: ");
    gets(frase);

    for(i = 0; i < strlen(frase); i++) {
        printf("%c", frase[i]);
        if(frase[i] == ' ') {
            printf("\n");
        }
    }
    return 0;
}