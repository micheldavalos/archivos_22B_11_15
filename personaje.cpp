#include "personaje.hpp"

Personaje::Personaje()
{

}

Personaje::Personaje(const string& nombre, 
              const string& tipo,
              float fuerza,
              float salud)
{
    Personaje::nombre = nombre;
    this->tipo = tipo;
    Personaje::fuerza = fuerza;
    this->salud = salud;
}

void Personaje::setNombre(const string& v)
{
    nombre = v;
}

void Personaje::setTipo(const string& v)
{
    tipo = v;
}

void Personaje::setFuerza(float v)
{
    fuerza = v;
}

void Personaje::setSalud(float v)
{
    salud = v;
}

string Personaje::getNombre()
{
    return nombre;
}

string Personaje::getTipo()
{
    return tipo;
}

float Personaje::getFuerza()
{
    return fuerza;
}

float Personaje::getSalud()
{
    return salud;
}
              