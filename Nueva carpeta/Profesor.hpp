#include<iostream>
#ifndef Profesor_HPP
#define Profesor_HPP
#include"Ramos.hpp"
using namespace std;

class Profesor{
    private:
    string nombre;
    string apellido;
    Ramos array[3];
    


public:
    Profesor(string nombre,string apellido){}

    int gedEdad();
    string getNombre();
    string getApellido();


    virtual void ingresarRamos();

};


#endif 