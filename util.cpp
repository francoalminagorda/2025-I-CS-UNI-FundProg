#include "util.h"

void intercambiar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void intercambiar(char &a, char &b) {
    char temp = a;
    a = b;
    b = temp;
}

bool Mayor(int &a, int &b){return a > b;  }
bool Menor(int &a, int &b){return a < b;  }

int Suma    (int a, int b){ return a+b; }
int Resta   (int a, int b){ return a-b; }
int Mult    (int a, int b){ return a*b; }
int Division(int a, int b){ return a/b; }

