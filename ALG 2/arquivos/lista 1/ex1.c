#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *f;

    f = fopen("dados.txt", "a");

    if(f != NULL) {
        for (int i = 0; i < 100; i++) {
            fprintf(f, "%d \n", i);
        }
    
        fclose(f);

    } else {
        printf("Nao foi possivel abrir o arquivo! ");
    }

    return 0;
}