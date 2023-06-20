#include <stdio.h>

void mm(int vector[10], int* min, int* max) {
    *min = vector[0];
    *max = 0;

    for (int i = 0; i < 10; i++) {
        if(vector[i] < *min) {
            *min = vector[i];
        } else if (vector[i] > *max) {
            *max = vector[i];
        }
    }
}

int main() {
    int vector[10] = {10,1,5,3,7,10,300,1,3,4}, min, max;
    mm(vector, &min, &max);
    printf("min: %d, max: %d\n", min, max);
    return 0;
}