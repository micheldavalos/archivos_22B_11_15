#ifndef PERSONAJE_HPP
#define PERSONAJE_HPP

#include <iostream>
using namespace std;

class Personaje
{
    std::string nombre;
    string tipo;
    float fuerza;
    float salud;
public:
    Personaje();
    Personaje(const string&, 
              const string&,
              float,
              float);
    // Setters
    void setNombre(const string&);
    void setTipo(const string&);
    void setFuerza(float);
    void setSalud(float);

    // Getters
    string getNombre();
    string getTipo();
    float getFuerza();
    float getSalud();

};



#endif