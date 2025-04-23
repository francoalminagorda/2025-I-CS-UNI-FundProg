#include "usostring.h"
#include <cstring>

void invertir(char* word) {
    size_t inicio = 0;
    size_t final = strlen(word) - 1;

    while (inicio < final) {
        char temp = word[inicio];
        word[inicio] = word[final];
        word[final] = temp;
        inicio++;
        final--;
    }
}
