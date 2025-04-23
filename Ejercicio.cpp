#include <iostream>     
#include <cstring>      
#include "usostring.h"   

using namespace std;

int main() {
    
    const char* palabraoriginal = "amolapaloma";

    cout << "Palabra original: "<< palabraoriginal << endl;

    char* word = new char[ strlen(palabraoriginal) + 1 ];

    strcpy(word, palabraoriginal);

    invertir(word);

    cout << "Palabra invertida: " << word << endl;

    delete[] word;

    return 0;
}
