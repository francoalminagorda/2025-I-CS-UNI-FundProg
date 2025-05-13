#ifndef __UTIL_H__
#define __UTIL_H__

void intercambiar(int &a, int &b);
void intercambiar(char &a, char &b);

// C, C++
// typedef bool (*CompFunc)(const int &, const int &);
// C++11 en adelante
using CompFunc = bool (*)(const int &, const int &);

bool Mayor(const int &a, const int &b);
bool Menor(const int &a, const int &b);

int Suma    (int a, int b);
int Resta   (int a, int b);
int Mult    (int a, int b);
int Division(int a, int b);

#endif // __UTIL_H__