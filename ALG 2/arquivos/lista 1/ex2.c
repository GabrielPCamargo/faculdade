#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *f;

    f = fopen("dados.bin", "w");

    if(f != NULL) {
        for (int i = 0; i < 100; i++) {
            fwrite(&i, 2, 1, f);
            fputc('\n', f);
        }

        fclose(f);
    } else {
        printf("Nao foi possivel escrever o arquivo");
    }
    return 0;
}
