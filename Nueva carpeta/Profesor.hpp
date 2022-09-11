#ifndef PROFESOR_H
#define PROFESOR_H

#include<string>
#include"Ramos.hpp"
using namespace std;

class Profesor : public Persona{
protected:

    string ramosP[3];


public:
    Profesor(string _nombre,string _apellido)
    string getNombre();
    string getApellido();
    string getramosP();


    virtual void ingresarRamos();

}


#endif 
