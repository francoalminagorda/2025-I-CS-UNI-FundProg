#include <iostream>
#include "sorting.h"
#include "array.h"

using namespace std;

// Bubble  
void BurbujaClasico(int* arr, int n, CompFunc pComp) {
    if (n <= 1)
        return;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i+1; j < n; ++j) {
            if ( (*pComp)(arr[i], arr[j]) ) {
                intercambiar(arr[i], arr[j]);
            }
        }
    }
}

// Bubble
void BurbujaRecursivo(int* arr, int n, CompFunc pComp) {
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

int particionar(int* arr, int first, int last, CompFunc pComp) {
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


void QuickSort(int* arr, int first, int last, CompFunc pComp) {
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

// Función para mezclar dos subarreglos ordenados de arr[].
void Merge(int* arr, int const left, int const mid, const int right, CompFunc pComp) {
    auto const subArrayOne = mid - left + 1;
    auto const subArrayTwo = right - mid;

    // Crear arrays temporales
    auto *leftArray = new int[subArrayOne],
         *rightArray = new int[subArrayTwo];

    // Copiar datos a los arrays temporales leftArray[] y rightArray[]
    for (auto i = 0; i < subArrayOne; i++)
        leftArray[i] = arr[left + i];
    for (auto j = 0; j < subArrayTwo; j++)
        rightArray[j] = arr[mid + 1 + j];

    auto indexOfSubArrayOne = 0, // Índice inicial del primer sub-array
        indexOfSubArrayTwo = 0; // Índice inicial del segundo sub-array
    int indexOfMergedArray = left; // Índice inicial del array mezclado

    // Mezclar los arrays temporales de vuelta a arr[left..right]
    while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo) {
        if ( (*pComp)(rightArray[indexOfSubArrayTwo], leftArray[indexOfSubArrayOne])  ) {
            arr[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
        } else {
            arr[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
        }
        indexOfMergedArray++;
    }
    // Copiar los elementos restantes de left[], si los hay
    while (indexOfSubArrayOne < subArrayOne) {
        arr[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
        indexOfSubArrayOne++;
        indexOfMergedArray++;
    }
    // Copiar los elementos restantes de right[], si los hay
    while (indexOfSubArrayTwo < subArrayTwo) {
        arr[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
        indexOfSubArrayTwo++;
        indexOfMergedArray++;
    }

    delete[] leftArray;
    delete[] rightArray;
}

// left es para el índice izquierdo y right es para el índice derecho del
// sub-array de arr a ordenar
void MergeSort(int* arr, int const begin, int const end, CompFunc pComp) {
    if (begin >= end)
        return; // Return recursivamente

    auto mid = begin + (end - begin) / 2;
    MergeSort(arr, begin, mid, pComp);
    MergeSort(arr, mid + 1, end, pComp);
    Merge(arr, begin, mid, end, pComp);
}

void DemoMergeSort(){
    cout << "DemoMergeSort \n";
    int arr[] = {5, 2, 8, 1, 15, 9, 4, 7, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    MergeSort(arr, 0, n-1, &Mayor);
    cout << "Array ordenado Ascendente:\n";
    PrintArray(arr, n, cout);

    MergeSort(arr, 0, n-1, &Menor);
    cout << "Array ordenado Descendente:\n";
    PrintArray(arr, n, cout);

    cout << endl;
}

void DemoSorting(){
    DemoBurbuja();
    // QuickSort añadido
    DemoQuickSort();

    DemoMergeSort();
}