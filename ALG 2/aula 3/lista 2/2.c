#include <stdio.h>

float function(float n) {
    if (n > 1) {
        return  (1 / (n - 1)) * function(n - 1);
    } else {
        return n;
    }
}

int main() {
    printf("valor: %f", function(3));
    return 0;
}