#ifndef __ARRAYS_H__
#define __ARRAYS_H__
#include <iostream>
using namespace std;

// typedef double T; // Estilo antiguo C, C++
using T = int;    // Estilo C++11, C++14, C++17, C++20, C++23

void CreateArray(T *&pArray, size_t n);
void ReadArray(T *pArray, size_t n);
void PrintArray(T *pArray, size_t n, ostream &os);
void DestroyArray(T *&pArray);
void DemoArrays();

#endif // __ARRAYS_H__