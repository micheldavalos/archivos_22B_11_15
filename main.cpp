#include <iostream>
using namespace std;

#include "videojuego.hpp"

int main() {
    VideoJuego vj;

    Personaje p01; //("Michel", "Guerrero", 100, 99);
    string temp;

    
    // cout << "Nombre: ";
    // getline(cin, temp);

    p01.setNombre("CUCEI");

    p01.setTipo("Zombie");
    p01.setFuerza(70);
    p01.setSalud(0);

    Personaje p02("Davalos", "Guerrero", 100, 10);
    // cin >> p01 >> p02;
    // cout << p01 << p02;
    
    // vj.agregarFinal(p01);
    // vj.agregarFinal(p02);
    vj.recuperar_csv();
    vj.mostrar();
    // vj.respaldar_tabla();
    // vj.respaldar_csv();
    // cout << p01 << p02 << endl;
    // p01 + 10;  // incrementar en la salud
    // p02 - 1;  // descrementar la salud 
    // cout << p01++ << p02++ << endl;
    // cout << --p01 << p02-- << endl;
    // vj << p01 << p02;  // insertando un personaje

    
    // vj.mostrar();

    return 0;
}