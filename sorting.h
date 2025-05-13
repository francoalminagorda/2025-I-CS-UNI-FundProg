#ifndef __SORTING_H__
#define __SORTING_H__
#include "util.h"

void BurbujaClasico(int* arr, int n, CompFunc pComp);
void BurbujaRecursivo(int* arr, int n, CompFunc pComp);
void DemoBurbuja();

int  particionar(int* arr, int first, int last, CompFunc pComp);
void QuickSort  (int* arr, int first, int last, CompFunc pComp);
void DemoQuickSort();

void Merge(int* arr, int const left, int const mid, int const right, CompFunc pComp); 
void MergeSort(int* arr, int const begin, int const end, CompFunc pComp);
void DemoMergeSort();

void DemoSorting();

#endif // __SORTING_H__