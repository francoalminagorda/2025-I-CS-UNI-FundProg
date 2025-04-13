#include <iostream>
#include "sorting.h"
using namespace std;

void intercambiar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Bubble
void Burbuja1(int* arr, size_t n) {
    if (n <= 1) {
        return;
    }
    for (size_t i = 0; i < n - 1; ++i) {
        for (size_t j = i+1; j < n; ++j) {
            if (arr[i] > arr[j]) {
                intercambiar(arr[i], arr[j]);
            }
        }
    }
}

// Bubble
void BurbujaRecursivo(int* arr, size_t n) {
    if (n <= 1)
        return;
    for (size_t j = 1; j < n; ++j)
        if (arr[0] > arr[j])
            intercambiar(arr[0], arr[j]);
    BurbujaRecursivo(arr+1, n-1);
}

void DemoSorting(){
    int miArray[] = {5, 2, 8, 1, 9, 4, 7, 3, 6};
    size_t tamano = sizeof(miArray) / sizeof(miArray[0]);

    BurbujaRecursivo(miArray, tamano);

    cout << "Array ordenado: ";
    for (size_t i = 0; i < tamano; ++i) {
        cout << miArray[i] << " ";
    }
    cout << endl;
}