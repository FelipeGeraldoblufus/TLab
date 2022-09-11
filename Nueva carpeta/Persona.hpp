#ifndef PERSONA_H
#define PERSONA_H

#include<string>
using namespace std;
class Persona
{
protected:
    string nombre;
    string apellido;
    
public:
    Persona(string _nombre, string _apellido);
    string getnombre();
    string getapellido();
   
};

#endif
