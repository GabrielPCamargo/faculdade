#include <stdio.h>

void strmsc(char* string) {
    for (int i = 0; i < strlen(string); i++) {
        if(*(string + i) != ' ') *(string + i) -= 32;
    }
    
}

int main() {
    char teste[] = "meuteste";
    strmsc(teste);
    printf("%s", teste);
    return 0;
}