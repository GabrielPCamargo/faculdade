#include <stdio.h>

int mdc(int x, int y) {
    
    if (x % y == 0) {
        return y;
    } else {
        return mdc(y, x % y);
    }

}

int main() {
    printf("MDC = %d\n", mdc(12, 18));
    return 0;
}