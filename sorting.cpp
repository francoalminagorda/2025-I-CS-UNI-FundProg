#include <iostream>
#include "sorting.h"
#include "array.h"
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

void DemoBurbuja(){
    cout << "DemoBurbuja \n";
    int arr[] = {5, 2, 8, 1, 9, 4, 7, 3, 6};
    size_t n = 10;
    // size_t n = sizeof(arr) / sizeof(arr[0]);

    BurbujaRecursivo(arr, n);
    cout << "Array ordenado:\n";
    PrintArray(arr, 10, cout);

    cout << endl;
}

int particionar(int* arr, int first, int last) {
    int pivote = arr[last];  // Pivote es el elemento de referencia
    int i = (first - 1);

    for (int j = first; j <= last - 1; j++) {
        if (arr[j] <= pivote) {
            i++;
            intercambiar(arr[i], arr[j]);
        }
    }
    intercambiar(arr[i + 1], arr[last]);
    return (i + 1);
}


void QuickSort(int* arr, int first, int last) {
    if (first < last) {
        int pi = particionar(arr, first, last);
        QuickSort(arr, first, pi - 1);
        QuickSort(arr, pi + 1, last);
    }
}

void DemoQuickSort() {
    cout << "DemoQuickSort \n";
    int arr[] = {5, 2, 8, 1, 9, 4, 7, 3, 6};
    size_t n = sizeof(arr) / sizeof(arr[0]);

    QuickSort(arr, 0, n - 1);

    cout << "Arreglo ordenado: \n";
    PrintArray(arr, n, cout);
    cout << endl;
}

void DemoSorting(){
    DemoBurbuja();
    DemoQuickSort();
}