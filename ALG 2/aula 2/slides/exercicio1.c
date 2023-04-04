#include <stdio.h>

void validateNSides(int* nSides, int sides[]) {
    int numOfSides;

    do {
        printf("Digite o numero de lados: ");
        scanf("%d", nSides);
    } while (*nSides <= 0 || *nSides > 3);

    numOfSides = *nSides == 1 ? 1 : 2;

    for (int i = 0; i < numOfSides; i++)
    {
        do {
            printf("Digite o tamanho do lado %d:", i + 1);
            scanf("%d", &sides[i]);
        } while (sides[i] < 0);
        
    }
    

}

int calculateArea(int nSides, int sides[]) {
    int area;
    switch (nSides) {
        case 1:
            area = sides[0] * sides[0];
            break;
        case 2:
            area = sides[0] * sides[1];
            break;
        case 3:
            area = (sides[0] * sides[1]) / 2;
            break;
    }

    return area;
}

int main() {
    int numSides, area, sides[2];
    validateNSides(&numSides, sides);
    area = calculateArea(numSides, sides);
    printf("Area calculada: %d", area);
    return 0;
}