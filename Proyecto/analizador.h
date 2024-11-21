#ifndef ANALIZADOR_H
#define ANALIZADOR_H

#include "piloto.h"
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
        return &(*min_element(pilotos.begin(), pilotos.end(), [](const Piloto& a, const Piloto& b) {
            return a.getTiempoTotal() < b.getTiempoTotal();
        }));
    }

    static const Piloto* mejorSector1(const vector<Piloto>& pilotos) {
        return &(*min_element(pilotos.begin(), pilotos.end(), [](const Piloto& a, const Piloto& b) {
            return a.getSector1() < b.getSector1();
        }));
    }

    static const Piloto* mejorSector2(const vector<Piloto>& pilotos) {
        return &(*min_element(pilotos.begin(), pilotos.end(), [](const Piloto& a, const Piloto& b) {
            return a.getSector2() < b.getSector2();
        }));
    }

    static const Piloto* mejorSector3(const vector<Piloto>& pilotos) {
        return &(*min_element(pilotos.begin(), pilotos.end(), [](const Piloto& a, const Piloto& b) {
            return a.getSector3() < b.getSector3();
        }));
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
