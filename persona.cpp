#include <iostream>
#include "persona.h"
using namespace std;
//Implementacion del constructor.

// Persona::Persona(string name,int edad){
//     this->name = name;
//     this->edad = edad;
// }

//Implementacion de metodos.
void Persona::saludar(){
    cout << "Hola,soy "<<name <<"y tengo "<< edad << "años. " << endl;
}

void Persona::setAge(int nuevaEdad){
    if(nuevaEdad >= 0){
        edad = nuevaEdad;
    }
}
int Persona::getAge(){
    return edad;
}

void Persona::setName(string _name){
    name = _name;
}

string  Persona::getName(){
    return name;
}
