#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LENGTH 10

char rand_char() {
    char c = ' ' + (rand() % 95);
    return c;
}

int main() {
    //srand(time(NULL));
    char string[LENGTH + 1];
    for (int i = 0; i < LENGTH; i++) {
        string[i] = rand_char();
    }
    string[LENGTH] = '\0';
    printf("%s\n", string);
    return 0;
}

