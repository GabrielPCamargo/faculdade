
#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *f;

    f = fopen("dados.txt", "r");
    
    int u;

    if(f != NULL) {
        for (int i = 0; i < 100; i++) {
            fscanf(f, "%d \n", &u);
            printf("%d\n", u);
        }

        fclose(f);
    } else {
        printf("Arquivo nao disponivel");
    }
    return 0;
}