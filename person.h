#ifndef __PERSONA_H__
#define __PERSONA_H__

#include <string>
using namespace std;

class Person{
private:
    string m_name;
    int    m_age;

public:
    // Constructor
    // 1. Tiene el mismo nombre que la clase (Person en este caso)
    // 2. Pueden haber varios
    // 3. Solo se llama 1 de ellos
    // 4. Se invoca al declarar un objeto (estatico) o al crearlo con new (dinamico)
    // 5. No devuelve nada (ni siquiera void)
    // 6. Desde C++11 se pueden llamar entre constructores
    Person();
    Person(string name, int edad);

    // Metodos.
    void    saludar();
    void    setAge(const int age);
    int     getAge();
    void    setName(const string name);    
    string  getName();
};

#endif