#include <stdio.h>

int ackermanSequency(int m, int n) {
    if (m == 0) {
        return n + 1;
    } else if (m != 0 && n == 0)
    {
        return ackermanSequency(m - 1, 1);
    } else {
        if (m != 0 && n != 0) {
            return ackermanSequency(m - 1, ackermanSequency(m, n - 1));
        }
    }
}

int main() {
    printf("Sequencia de ackerman: %d", ackermanSequency(4, 0));
    return 0;
}