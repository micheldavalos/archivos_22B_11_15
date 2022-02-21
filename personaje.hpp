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

    // Sobrecargas
    friend ostream& operator<<(ostream& out, const Personaje& p)
    {
        out << "Nombre: " << p.nombre << endl;
        out << "Tipo: " << p.tipo << endl;
        out << "Fuerza: " << p.fuerza << endl;
        out << "Salud: " << p.salud << endl;

        return out;
    }

    friend istream& operator>>(istream& in, Personaje& p)
    {
        cout << "Nombre: ";
        in >> p.nombre;
        cout << "Tipo: ";
        in >> p.tipo;
        cout << "Fuerza: ";
        in >> p.fuerza;
        cout << "Salud: ";
        in >> p.salud;

        return in;
    }

    Personaje& operator+(size_t salud)
    {
        Personaje::salud += salud;

        return *this;
    }

    Personaje& operator-(size_t salud)
    {
        Personaje::salud -= salud;

        return *this;
    }

    Personaje& operator++()
    {
        fuerza += 5;

        return *this;
    }
    Personaje& operator++( int )
    {
        fuerza += 1;

        return *this;
    }

    Personaje& operator--()
    {
        fuerza -= 5;

        return *this;
    }
    Personaje& operator--( int )
    {
        fuerza -= 1;

        return *this;
    }

};



#endif