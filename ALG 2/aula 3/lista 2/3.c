#include <stdio.h>

float mediaAritmetica(int n) {
    if (n > 1) {
        return n + mediaAritmetica(n-1);
    } else {
        return n;
    }
}

int main() {
    printf("teste: %f", mediaAritmetica(6)/ 6);
    return 0;
}