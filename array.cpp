#include <iostream>
#include <fstream>
#include "array.h"

using namespace std;

struct SArray{
    T     *pArray = nullptr;
    size_t nElem  = 0;
};

void CreateArray(T *&pArray, size_t n){
    pArray = new T [n]; // Pido memoria para n elementos de tipo T
}

void ReadArray(T *pArray, size_t n){
    cout << "Leyendo " << n << " elementos ..." << endl;
    for(size_t i = 0 ; i < n ; ++i){
        cout << "Ingresar v[" << i << "]: ";
        cin  >> pArray[i];
    }
}

void PrintArray(T *pArray, size_t n, ostream &os){
    for(size_t i = 0 ; i < n ; ++i)
        os << pArray[i] << " ";
    os << endl;
}

void DestroyArray(T *&pArray){
    cout << "Liberando la memoria asignada" << endl;
    delete [] pArray;    // Liberar la memoria
    pArray = nullptr;
}

// Version programacion estructurada ... todavia reprobada
void DemoArrays(){
    T *pV1 = nullptr;
    size_t nElem1 = 0;
    T *pV2 = nullptr;
    size_t nElem2 = 0;

    cout << "Ingrese tamano del array:";
    cin >> nElem1;

    // Crear el vector
    CreateArray(pV1, nElem1);
    // Ingresar los valores
    ReadArray(pV1, nElem1);
    // Imprimir los valores ingresados
    ofstream of1("test.txt");
    cout << "Los valores ingresados son:" << endl;
    PrintArray(pV1, nElem1, of1);
    of1.close();
    PrintArray(pV1, nElem1, cout);
    // Eliminar la memoria
    DestroyArray(pV1);

    cout << "Ingrese tamano del array:";
    cin >> nElem2;
    // Crear el vector
    CreateArray(pV2, nElem2);
    // Ingresar los valores
    ReadArray(pV2, nElem2);
    // Imprimir los valores ingresados
    ofstream of2("prueba2.txt");
    PrintArray(pV2, nElem2, of2);
    of2.close();
    // Eliminar la memoria
    DestroyArray(pV2);
}