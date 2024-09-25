#ifndef ANALIZADOR_H
#define ANALIZADOR_H

#include "piloto.h"
#include <algorithm>
#include <limits>
#include <vector>

class Analizador {
public:
    static void determinarPosiciones(vector<Piloto>& pilotos) {
        mergeSort(pilotos, 0, pilotos.size() - 1);

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
    static void merge(vector<Piloto>& pilotos, int left, int mid, int right) {
        int n1 = mid - left + 1;
        int n2 = right - mid;

        vector<Piloto> L(n1);
        vector<Piloto> R(n2);

        for (int i = 0; i < n1; ++i)
            L[i] = pilotos[left + i];
        for (int j = 0; j < n2; ++j)
            R[j] = pilotos[mid + 1 + j];

        int i = 0, j = 0, k = left;
        while (i < n1 && j < n2) {
            if (L[i].getTiempoTotal() <= R[j].getTiempoTotal()) {
                pilotos[k] = L[i];
                ++i;
            } else {
                pilotos[k] = R[j];
                ++j;
            }
            ++k;
        }

        while (i < n1) {
            pilotos[k] = L[i];
            ++i;
            ++k;
        }

        while (j < n2) {
            pilotos[k] = R[j];
            ++j;
            ++k;
        }
    }

    static void mergeSort(vector<Piloto>& pilotos, int left, int right) {
        if (left < right) {
            int mid = left + (right - left) / 2;

            mergeSort(pilotos, left, mid);
            mergeSort(pilotos, mid + 1, right);

            merge(pilotos, left, mid, right);
        }
    }
};

#endif // ANALIZADOR_H
