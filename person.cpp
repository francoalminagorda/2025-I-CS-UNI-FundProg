#include <iostream>
#include "person.h"
using namespace std;
//Implementacion del constructor.

Person::Person(){
    m_name = "Noname";
    m_age  = 0;
}

Person::Person(string name, int age){
    m_name = name;
    m_age  = age;
}

//Implementacion de metodos.
void Person::saludar(){
    cout << "Hola,soy "<< m_name <<"y tengo "<< age << "años. " << endl;
}

void Person::setAge(int age){
    if(age >= 0)
        m_age= age;
}

int Person::getAge(){
    return m_age;
}

void Person::setName(string _name){
    m_name = _name;
}

string  Person::getName(){
    return m_name;
}
