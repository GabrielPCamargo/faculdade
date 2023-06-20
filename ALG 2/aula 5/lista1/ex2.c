#include <stdio.h>

void strmin(char* string) {
    for (int i = 0; i < strlen(string); i++) {
        if(*(string + i) != ' ') *(string + i) += 32;
    }
    
}

int main() {
    char teste[] = "MEU TESTE";
    strmin(teste);
    printf("%s", teste);
    return 0;
}