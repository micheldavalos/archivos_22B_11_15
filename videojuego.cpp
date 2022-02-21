#include "videojuego.hpp"
#include <iomanip>
#include <fstream>

VideoJuego::VideoJuego()
{
    cont = 0;
}

void VideoJuego::agregarFinal(const Personaje& p)
{
    if (cont == MAX) {
        cout << "Arreglo esta lleno" << endl;
        return;
    }
    personajes[cont] = p;
    cont++;
}

void VideoJuego::mostrar()
{
    cout << left;
    cout << setw(10) << "Nombre"
         << setw(9) << "Tipo"
         << setw(7) << "Fuerza"
         << setw(6) << "Salud"
         << endl;
    for (size_t i = 0; i < cont; i++) {
        Personaje& p = personajes[i];

        cout << setw(10) << p.getNombre()
         << setw(9) << p.getTipo()
         << setw(7) << p.getFuerza()
         << setw(6) << p.getSalud()
         << endl;

        // cout << "Nombre: " << p.getNombre() << endl;
        // cout << "Tipo: " << p.getTipo() << endl;
        // cout << "Fuerza: " << p.getFuerza() << endl;
        // cout << "Salud: " << p.getSalud() << endl;
    }
}

void VideoJuego::respaldar_tabla()
{
    ofstream archivo("personajes.txt");

    if (archivo.fail()) {
        cout << "No se pudo abrir el archivo" << endl;
        return;
    }

    archivo << left;
    archivo << setw(10) << "Nombre"
         << setw(9) << "Tipo"
         << setw(7) << "Fuerza"
         << setw(6) << "Salud"
         << endl;
    for (size_t i = 0; i < cont; i++) {
        Personaje& p = personajes[i];

        archivo << setw(10) << p.getNombre()
         << setw(9) << p.getTipo()
         << setw(7) << p.getFuerza()
         << setw(6) << p.getSalud()
         << endl;
    }

    archivo.close();
}

void VideoJuego::respaldar_csv()
{
    ofstream archivo("personajes.csv");

    if (archivo.fail()) {
        cout << "No se pudo abrir el archivo" << endl;
        return;
    }

    for (size_t i = 0; i < cont; i++) {
        Personaje& p = personajes[i];
        archivo << p.getNombre() << ",";
        archivo << p.getTipo() << ",";
        archivo << p.getFuerza() << ",";
        archivo << p.getSalud() << endl;
    }

    archivo.close();
}

void VideoJuego::recuperar_csv()
{
    ifstream archivo("personajes.csv");

    if (archivo.fail()) {
        cout << "No se pudo abrir el archivo" << endl;
        return;
    }

    string nombre, tipo, fuerza, salud;

    while (true)
    {
        getline(archivo, nombre, ',');
        if (archivo.eof()) break;
        getline(archivo, tipo, ',');
        getline(archivo, fuerza, ',');
        getline(archivo, salud);
        Personaje p(nombre, tipo, stof(fuerza), stof(salud));
        agregarFinal(p);        
    }

    archivo.close();
    
    // cout << nombre << tipo << fuerza << salud << endl;

}