#include <stdio.h>

int pot(int base, int exp) {
    if (exp == 0) {
        return 1;
    } else {
        return base * pot(base, exp - 1);
    }
}

int main() {
    printf("2^5 = %d\n", pot(2, 10));
    return 0;
}