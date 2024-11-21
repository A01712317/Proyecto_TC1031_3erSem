#ifndef ANALIZADOR_H
#define ANALIZADOR_H

#include "piloto.h"
#include "tiempos.h"
#include <algorithm>
#include <limits>
#include <vector>
#include <unordered_map>

class Analizador {
public:
    static void determinarPosiciones(vector<Piloto>& pilotos) {
        insertionSort(pilotos);

        // Eliminar pilotos duplicados
        eliminarDuplicados(pilotos);

        for (size_t i = 0; i < pilotos.size(); ++i) {
            pilotos[i].setPosicion(i + 1);
        }
    }

    static const Piloto* vueltaRapida(const vector<Piloto>& pilotos) {
        return &pilotos.front();
    }


    static const Piloto* mejorSector1(const vector<Piloto>& pilotos) {
    // Crear un vector de pares (sector1, puntero a Piloto)
    vector<pair<double, const Piloto*>> sectores;
    for (const auto& piloto : pilotos) {
        sectores.emplace_back(piloto.getSector1(), &piloto);
    }

    // Ordenar el vector de sectores usando insertionSort
    insertionSort(sectores);

    // Retornar el piloto asociado al mejor tiempo (primer elemento después de ordenar)
    return sectores.front().second;
    }

    static const Piloto* mejorSector2(const vector<Piloto>& pilotos) {
    // Crear un vector de pares (sector1, puntero a Piloto)
    vector<pair<double, const Piloto*>> sectores;
    for (const auto& piloto : pilotos) {
        sectores.emplace_back(piloto.getSector2(), &piloto);
    }

    // Ordenar el vector de sectores usando insertionSort
    insertionSort(sectores);

    // Retornar el piloto asociado al mejor tiempo (primer elemento después de ordenar)
    return sectores.front().second;
    }

    static const Piloto* mejorSector3(const vector<Piloto>& pilotos) {
    // Crear un vector de pares (sector1, puntero a Piloto)
    vector<pair<double, const Piloto*>> sectores;
    for (const auto& piloto : pilotos) {
        sectores.emplace_back(piloto.getSector3(), &piloto);
    }

    // Ordenar el vector de sectores usando insertionSort
    insertionSort(sectores);

    // Retornar el piloto asociado al mejor tiempo (primer elemento después de ordenar)
    return sectores.front().second;
    }

// Sobrecarga de insertionSort para trabajar con pares
template <typename T>
static void insertionSort(vector<pair<double, T>>& elementos) {
    for (size_t i = 1; i < elementos.size(); ++i) {
        auto key = elementos[i];
        int j = i - 1;

        // Comparar por el primer elemento del par (el tiempo del sector)
        while (j >= 0 && elementos[j].first > key.first) {
            elementos[j + 1] = elementos[j];
            --j;
        }
        elementos[j + 1] = key;
    }
}


private:
    static void insertionSort(vector<Piloto>& pilotos) {
        for (size_t i = 1; i < pilotos.size(); ++i) {
            Piloto key = pilotos[i];
            int j = i - 1;

            while (j >= 0 && pilotos[j].getTiempoTotal() > key.getTiempoTotal()) {
                pilotos[j + 1] = pilotos[j];
                --j;
            }
            pilotos[j + 1] = key;
        }
    }

    static void eliminarDuplicados(vector<Piloto>& pilotos) {
        unordered_map<string, Piloto> mapaPilotos;

        for (const auto& piloto : pilotos) {
            string clave = piloto.getNombre() + std::to_string(piloto.getNumero());
            if (mapaPilotos.find(clave) == mapaPilotos.end() || 
                piloto.getTiempoTotal() < mapaPilotos[clave].getTiempoTotal()) {
                mapaPilotos[clave] = piloto;
            }
        }

        pilotos.clear();
        for (auto it = mapaPilotos.begin(); it != mapaPilotos.end(); ++it) {
            pilotos.push_back(it->second);
        }

        // Ordenar nuevamente después de eliminar duplicados
        insertionSort(pilotos);
    }
};

#endif // ANALIZADOR_H
