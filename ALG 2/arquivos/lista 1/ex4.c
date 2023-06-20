#include <stdio.h>

int main() {
    FILE *f;
    char ch;
    int linha = 1;

    f = fopen("./../ex1.c", "r");

    if(f != NULL) {
        printf("%d: ", linha);
        ch = fgetc(f);
        while(ch != EOF) {
            if (ch == '\n') {
                linha++;
                printf("\n%d: ", linha);
            } else {
                printf("%c", ch);
            }
            
            ch = fgetc(f);
        }

        fclose(f);

    } else {
        printf("Arquivo nao pode ser aberto! ");
    }

    return 0;
}