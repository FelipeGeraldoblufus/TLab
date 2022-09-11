#include "Alumno.hpp"
#include "Persona.hpp"

Alumno::Alumno(string _nombre, string _apellido, int _edad): Persona(_nombre, _apellido){

    this->nombre=_nombre;
    this->apellido=_apellido;
    this->edad=_edad;
}
int Alumno::getEdad(){

    return edad;
}
void Alumno::setEdad(int _edad)
{
    edad = _edad;
}
