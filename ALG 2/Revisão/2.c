#include <stdio.h>

int show(int *vetor, int tam) {
    if(tam == 0) {
        return 0;
    } else {
        printf("%d ", *vetor);
        return show(vetor + 1, tam - 1);
    }
}

int showInv(int *vetor, int tam) {
    if(tam == 0) {
        return 0;
    } else {
        printf("%d ", *(vetor + tam - 1));
        return showInv(vetor, tam - 1);
    }
}

int main() {
    int vector[10] = {10, 1, 2, 3, 4, 5, 0, 1, 2, 3};

    show(vector, 10);
    printf("\n");
    showInv(vector, 10);
    return 0;
}