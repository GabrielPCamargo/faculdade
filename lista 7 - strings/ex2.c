#include<stdio.h>
#include<string.h>

int main() {
    char frase[30];
    int i;
    printf("Digite a frase: ");
    gets(frase);
    printf("\n");

    for(i = 0; i < strlen(frase); i++) {
        switch(frase[i]) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                printf("*");
                break;
            default:
                printf("%c", frase[i]);
        }
    }
    return 0;
}