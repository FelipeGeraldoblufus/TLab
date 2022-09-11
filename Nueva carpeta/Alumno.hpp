#ifndef ALUMNO_H
#define ALUMNO_H
#include<string>
#include<iostream>
#include"Ramos.hpp"
using namespace std;

class Alumno : public Persona{

protected:
    
    int edad;
    string ramosA[5];
 
public:
    Alumno(string _nombre, string _apellido, int _edad);
    int getEdad();
    Ramos getlista();
    void setEdad(int _edad);
}

#endif
