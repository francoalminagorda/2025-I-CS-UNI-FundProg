#ifndef __SORTING_H__
#define __SORTING_H__
void Burbuja1(int* arr, int n);
void BurbujaRecursivo(int* arr, int n, bool (*pComp)(int &, int &));

int  particionar(int* arr, int first, int last, bool (*pComp)(int &, int &));
void QuickSort  (int* arr, int first, int last, bool (*pComp)(int &, int &));

void DemoSorting();

#endif // __SORTING_H__