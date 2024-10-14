#include "piloto.h"
#include "analizador.h"
#include "bst.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<Piloto> pilotos;
    string filename = "pilotos.txt";
    ifstream archivo(filename);

    if (!archivo.is_open()) {
        cerr << "Error al abrir el archivo: " << filename << endl;
        return 1;
    }

    string nombre;
    int numero;
    double sector1, sector2, sector3;

    // Leer datos desde el archivo y crear objetos Piloto
    while (archivo >> nombre >> numero >> sector1 >> sector2 >> sector3) {
        pilotos.emplace_back(nombre, numero, sector1, sector2, sector3);
    }

    archivo.close();

    Analizador::determinarPosiciones(pilotos);
    const Piloto* vueltaRapida = Analizador::vueltaRapida(pilotos);
    const Piloto* mejorSector1 = Analizador::mejorSector1(pilotos);
    const Piloto* mejorSector2 = Analizador::mejorSector2(pilotos);
    const Piloto* mejorSector3 = Analizador::mejorSector3(pilotos);

    cout << "Pole position: " << vueltaRapida->getNombre() << " con tiempo " << vueltaRapida->getTiempoTotal() << endl;
    cout << "Mejor Sector 1: " << mejorSector1->getNombre() << " con tiempo " << mejorSector1->getSector1() << endl;
    cout << "Mejor Sector 2: " << mejorSector2->getNombre() << " con tiempo " << mejorSector2->getSector2() << endl;
    cout << "Mejor Sector 3: " << mejorSector3->getNombre() << " con tiempo " << mejorSector3->getSector3() << endl;

    // Crear el árbol BST y agregar los tiempos totales de cada piloto
    BST<double> tiemposBST;
    for (const auto& piloto : pilotos) {
        tiemposBST.add(piloto.getTiempoTotal());
    }

    cout << "\nRecorridos del BST:\n";
    cout << tiemposBST.visit() << endl;

    cout << "\nInformación de cada piloto:\n";
    for (const auto& piloto : pilotos) {
        cout << "Nombre: " << piloto.getNombre() << ", Número: " << piloto.getNumero()
             << ", Tiempo Total: " << piloto.getTiempoTotal() << ", Posición: " << piloto.getPosicion() << endl;
    }

    return 0;
}
