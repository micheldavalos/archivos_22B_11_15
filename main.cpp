#include <iostream>
using namespace std;

#include "videojuego.hpp"

int main() {
    VideoJuego vj;

    Personaje p01; //("Michel", "Guerrero", 100, 99);
    string temp;

    cout << "Nombre: ";
    getline(cin, temp);

    p01.setNombre(temp);

    p01.setTipo("Zombie");
    p01.setFuerza(70);
    p01.setSalud(0);

    Personaje p02("Davalos", "Guerrero", 100, 10);

    vj.agregarFinal(p01);
    vj.agregarFinal(p02);
    
    vj.mostrar();

    return 0;
}