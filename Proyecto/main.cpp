#include "piloto.h"
#include "analizador.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<Piloto> pilotos = {
        Piloto("Juan", 7, 30.5, 32.1, 29.8),
        Piloto("Pedro", 5, 31.2, 31.5, 30.0),
        Piloto("Luis", 3, 30.0, 32.0, 29.5)
    };

    Analizador::determinarPosiciones(pilotos);

    Piloto* vueltaRapida = Analizador::vueltaRapida(pilotos);
    Piloto* mejorSector1 = Analizador::mejorSector1(pilotos);
    Piloto* mejorSector2 = Analizador::mejorSector2(pilotos);
    Piloto* mejorSector3 = Analizador::mejorSector3(pilotos);

    cout << "Vuelta Rápida: " << vueltaRapida->getNombre() << " con tiempo " << vueltaRapida->getTiempoTotal() << endl;
    cout << "Mejor Sector 1: " << mejorSector1->getNombre() << " con tiempo " << mejorSector1->getSector1() << endl;
    cout << "Mejor Sector 2: " << mejorSector2->getNombre() << " con tiempo " << mejorSector2->getSector2() << endl;
    cout << "Mejor Sector 3: " << mejorSector3->getNombre() << " con tiempo " << mejorSector3->getSector3() << endl;

    for (const auto& piloto : pilotos) {
        cout << "Nombre: " << piloto.getNombre() << ", Número: " << piloto.getNumero()
             << ", Tiempo Total: " << piloto.getTiempoTotal() << ", Posición: " << piloto.getPosicion() << endl;
    }

    return 0;
}
