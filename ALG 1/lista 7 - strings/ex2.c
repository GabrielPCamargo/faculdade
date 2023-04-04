#include<stdio.h>
#include<string.h>

int main() {
    char frase[30];
    int i;
    printf("Digite a frase: ");
    gets(frase);
    printf("\n");
    strupr(frase);

    for(i = 0; i < strlen(frase); i++) {
        switch(frase[i]) {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                frase[i] = '*';
                break;
        }
    }

    puts(frase);
    return 0;
}