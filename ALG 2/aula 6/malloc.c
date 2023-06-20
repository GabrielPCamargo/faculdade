#include <stdio.h>
#include <stdlib.h>

int main() {
    int* v;
    v = (int*) malloc(10 * sizeof(int));
 
    printf("%d", v[1]);
    return 0;
}
