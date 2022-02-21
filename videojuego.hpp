#ifndef VIDEOJUEGO_HPP
#define VIDEOJUEGO_HPP

#include <iostream>
using namespace std;

#include "personaje.hpp"
#define MAX 50

class VideoJuego
{
    Personaje personajes[MAX];
    size_t cont;
public:
    VideoJuego();
    void agregarFinal(const Personaje&);
    void mostrar();
    void respaldar_tabla();
    void respaldar_csv();
    void recuperar_csv();

    // Sobrecarga
    friend VideoJuego& operator<<(VideoJuego& vj, const Personaje& p)
    {
        vj.agregarFinal(p);

        return vj;
    }
};

#endif