#include "Persona.hpp"

Persona::Persona(string _nombre, string _apellido){
   this->nombre = _nombre;
   this->apellido= _apellido;
}

string Persona::getnombre(){
    return nombre;
}
string Persona::getapellido(){
    return apellido;
}
