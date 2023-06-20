#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *f;

    f = fopen("dados.bin", "a+b");

    int u;

    if(f != NULL) {
        for (int i = 0; i < 100; i++) {
            fread(&u, sizeof(int), 1, f);
            printf("%d%c", u, fgetc(f));
        }

        fclose(f);

    } else {
        printf("Nao foi possivel abrir o arquivo!");
    }

    return 0;
}
