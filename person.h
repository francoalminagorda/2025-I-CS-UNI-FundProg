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
    // 3. Se invoca al declarar un objeto (estatico) o al crearlo con new (dinamico)
    // 4. No devuelve nada (ni siquiera void)
    // 5. Desde C++11 se pueden llamar entre constructores
    // 6. Solo se llama 1 de ellos
    Person();
    Person(string name, int edad);

    // Destructor
    // 1. Tiene el mismo nombre que la clase pero con ~
    // 2. Pueden haber solo uno
    // 3. Se invoca al salir de las {} donde fue creado (estaticos) o
    //    cuando se destruye con delete
    // 4. No devuelve nada (ni siquiera void)
    // 5. No tiene parámetros
    // 5. Recomendable que siempre sea virtual
    virtual ~Person();

    // Metodos.
    void    saludar();
    void    setAge(const int age);
    int     getAge();
    void    setName(const string name);    
    string  getName();
};

#endif