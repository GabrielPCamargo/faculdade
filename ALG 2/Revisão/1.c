#include <stdio.h>

int potenciaRec(int x, int y) {
    if(y == 0) {
        return 1;
    } else {
        if (y == 1) {
            return x;
        } else {
            return x * potenciaRec(x, y - 1);
        }
    }
}

void main() {
    int b, e;
    printf("Digite a base: ");
    scanf("%d", &b);
    printf("Digite o expoente: ");
    scanf("%d", &e);
    printf("A potencia da base %d no expoente %d e %d", b, e, potenciaRec(b, e));
}