#include <iostream>
#include "sorting.h"
using namespace std;

void intercambiar(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Bubble
void Burbuja1(int* arr, size_t tam) {
    if (tam <= 1) {
        return;
    }
    for (size_t i = 0; i < tam - 1; ++i) {
        for (size_t j = 0; j < tam - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                intercambiar(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void DemoSorting(){
    int miArray[] = {5, 2, 8, 1, 9, 4, 7, 3, 6};
    size_t tamano = sizeof(miArray) / sizeof(miArray[0]);

    Burbuja1(miArray, tamano);

    cout << "Array ordenado: ";
    for (size_t i = 0; i < tamano; ++i) {
        cout << miArray[i] << " ";
    }
    cout << endl;
}