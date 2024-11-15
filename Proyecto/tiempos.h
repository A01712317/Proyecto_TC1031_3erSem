#ifndef TIEMPOS_H
#define TIEMPOS_H

#include <iostream>
#include <vector>

using namespace std;

class Tiempo {
private:
    double sector_1;
    double sector_2;
    double sector_3;
    double tiempo;

public:
    Tiempo(double t1, double t2, double t3) : sector_1(t1), sector_2(t2), sector_3(t3), tiempo(t1 + t2 + t3) {}
    double getTiempo() const { return tiempo; }

    void setSector1(double t1) { sector_1 = t1; updateTiempo(); }
    void setSector2(double t2) { sector_2 = t2; updateTiempo(); }
    void setSector3(double t3) { sector_3 = t3; updateTiempo(); }

    double getSector1() const { return sector_1; }
    double getSector2() const { return sector_2; }
    double getSector3() const { return sector_3; }

private:
    void updateTiempo() {
        tiempo = sector_1 + sector_2 + sector_3;
    }
};

#endif
