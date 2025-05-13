#include <iostream>
#include "classes.h"
#include "person.h"
using namespace std;

void DemoClasses(){
    // Person persona1("Fabricio",19); // Entregamos los datos al constructor y crea el objeto persona.
    Person persona1; // Entregamos los datos al constructor y crea el objeto persona.
    persona1.setName("Fabricio");
    persona1.setAge(19);
    persona1.saludar();
    //Pasan unos años y queremos hacer un get and setter del objeto.
    persona1.setAge(25);
    cout <<"Nueva edad :" << persona1.getAge()<< endl;
    persona1.saludar();

    Person persona2("Wily", 19);
    persona2.saludar();

    Person persona3;
    persona3.saludar();

    Person *pPerson4 = nullptr;
    pPerson4 = new Person("Nicole", 18);
    pPerson4->saludar();
    delete pPerson4;

} // Aqui recien se destruyen persona1, persona2, persona3 