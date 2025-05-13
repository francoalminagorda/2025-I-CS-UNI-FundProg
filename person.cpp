#include <iostream>
#include "person.h"
using namespace std;
//Implementacion del constructor.

Person::Person(string name, int age){
    setName(name);
    setAge (age);
    cout << "*** Constructor (" << getName() <<", " << getAge() << ");" << endl;
}

Person::Person()
    : Person("SinNombre", 10)
{

}

Person::~Person(){
    cout << "--- Destructor (" << getName() <<", " << getAge() << ");" << endl;
}

//Implementacion de metodos.
void Person::saludar(){
    cout << "Hola,soy "<< getName() <<" y tengo "<< getAge() << " años.\n" << endl;
}

void Person::setAge(const int age){
    if(age >= 0)
        m_age= age;
}

int Person::getAge() {
    return m_age;
}

void Person::setName(const string name){
    m_name = name;
} 

string  Person::getName() {
    return m_name;
}
