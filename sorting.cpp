#include <iostream>
#include "sorting.h"
#include "array.h"
#include "util.h"
using namespace std;

// Bubble
void Burbuja1(int* arr, int n) {
    if (n <= 1)
        return;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i+1; j < n; ++j) {
            if (arr[i] > arr[j]) {
                intercambiar(arr[i], arr[j]);
            }
        }
    }
}

// Bubble
void BurbujaRecursivo(int* arr, int n, bool (*pComp)(int &, int &)) {
    if (n <= 1)
        return;
    for (int j = 1; j < n; ++j)
        if ( (*pComp)(arr[j], arr[0]) )
            intercambiar(arr[0], arr[j]);
    BurbujaRecursivo(arr+1, n-1, pComp);
}

void DemoBurbuja(){
    cout << "DemoBurbuja \n";
    int arr[] = {5, 2, 8, 1, 15, 9, 4, 7, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    BurbujaRecursivo(arr, n, &Mayor);
    cout << "Array ordenado Ascendente:\n";
    PrintArray(arr, 10, cout);

    BurbujaRecursivo(arr, n, &Menor);
    cout << "Array ordenado Descendente:\n";
    PrintArray(arr, 10, cout);

    cout << endl;
}

int particionar(int* arr, int first, int last, bool (*pComp)(int &, int &)) {
    int pivote = arr[last];  // Pivote es el elemento de referencia
    int i = (first - 1);

    for (int j = first; j <= last - 1; j++) {
        if (arr[j] == pivote) ++i;
        if ( (*pComp)(arr[j], pivote) ){
            ++i; intercambiar(arr[i], arr[j]);
        }
    }
    intercambiar(arr[i + 1], arr[last]);
    return (i + 1);
}


void QuickSort(int* arr, int first, int last, bool (*pComp)(int &, int &)) {
    if (first < last) {
        int pi = particionar(arr, first, last, pComp);
        QuickSort(arr, first, pi - 1, pComp);
        QuickSort(arr, pi + 1, last, pComp);
    }
}

void DemoQuickSort() {
    cout << "DemoQuickSort \n";
    int arr[] = {5, 2, 8, 15, 1, 9, 4, 7, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    QuickSort(arr, 0, n - 1, &Mayor);
    cout << "Arreglo ordenado Ascendente: \n";
    PrintArray(arr, n, cout);

    QuickSort(arr, 0, n - 1, &Menor);
    cout << "Arreglo ordenado Descendente: \n";
    PrintArray(arr, n, cout);

    cout << endl;
}

void DemoSorting(){
    DemoBurbuja();
    // QuickSort añadido
    DemoQuickSort();
}