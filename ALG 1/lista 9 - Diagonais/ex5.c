/*
    1)	Elabore um programa que leia do teclado o valor de uma string, 
    posteriormente crie uma outra string com o conteúdo da primeira juntamente coma 
    a informação “(copia)”
*/

#include <stdio.h>
#include <string.h>

int main() {
    char frase[30];
    char novaFrase[39];

    printf("Digite a frase: ");
    gets(frase);

    strcpy(novaFrase, frase);
    strcat(novaFrase, " (copia)");
    printf("Nova frase criada: ");
    puts(novaFrase);
    return 0;
}