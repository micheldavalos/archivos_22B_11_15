#ifndef VIDEOJUEGO_HPP
#define VIDEOJUEGO_HPP

#include <iostream>
using namespace std;

#include "personaje.hpp"

class VideoJuego
{
    Personaje personajes[5];
    size_t cont;
public:
    VideoJuego();
    void agregarFinal(const Personaje&);
    void mostrar();
};

#endif