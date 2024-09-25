#ifndef PILOTO_H
#define PILOTO_H

#include "tiempos.h"
#include <iostream>
#include <vector>

using namespace std;

class Piloto : public Tiempo {
private:
    string nombre;
    int numero;
    int posicion;

public:
    Piloto(string n, int num, double t1, double t2, double t3) 
        : Tiempo(t1, t2, t3), nombre(n), numero(num), posicion(0) {}

    string getNombre() const { return nombre; }
    int getNumero() const { return numero; }
    double getTiempoTotal() const { return getTiempo(); }
    int getPosicion() const { return posicion; }
    void setPosicion(int pos) { posicion = pos; }
};

#endif // PILOTO_H
