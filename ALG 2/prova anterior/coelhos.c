#include <stdio.h>

int coelhos(int n) {
    if(n <= 2) {
        return 1;
    } else {
        return coelhos(n-1) + coelhos(n-2);
    }
}

int main() {
    printf("%d\n", coelhos(6));
}