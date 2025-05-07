#ifndef __SORTING_H__
#define __SORTING_H__
void Burbuja1(int* arr, int n);
void BurbujaRecursivo(int* arr, int n, bool (*pComp)(int &, int &));
void DemoBurbuja();

int  particionar(int* arr, int first, int last, bool (*pComp)(int &, int &));
void QuickSort  (int* arr, int first, int last, bool (*pComp)(int &, int &));
void DemoQuickSort();

void Merge(int* arr, int const left, int const mid, int const right, bool (*pComp)(int &, int &)); 
void MergeSort(int* arr, int const begin, int const end, bool (*pComp)(int &, int &));
void DemoMergeSort();

void DemoSorting();

#endif // __SORTING_H__