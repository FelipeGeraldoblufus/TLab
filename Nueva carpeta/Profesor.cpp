#include "Profesor.hpp"
#include "Persona.hpp"

Profesor::Profesor(string _nombre,string _apellido): Persona(){

    this->nombre=_nombre;
    this->apellido=_apellido;
   
}

string Profesor::getramosP(){

    return ramosP;
}

