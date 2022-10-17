#include<stdio.h>
#include<string.h>

int main() {
    char frase[30];
    char palavra[30];
    char novaFrase[60];
    int i, j, k, lastSpace;
    printf("Digite a frase: ");
    gets(frase);
    printf("\n");

    lastSpace = 0;

    strcpy(novaFrase, " ");

    for(i = 0; i < strlen(frase); i++) {
        if(frase[i] == ' ' || (strlen(frase) - 1) == i) {
            for(j = lastSpace, k = 0; j <= i; j++, k++) {
                palavra[k] = frase[j];
                if(!((j + 1) <= i)) {
                    if((strlen(frase) - 1) == i) {
                        palavra[k + 1] = ' ';
                        palavra[k + 2] = '\0';
                    } else {
                       palavra[k + 1] = '\0'; 
                    }
                    
                }
            }
            
            strcat(novaFrase, palavra);
            strcat(novaFrase, palavra);
            lastSpace = i + 1;
        }
    }
    puts(novaFrase);
    return 0;
}