#ifndef MODULESKOSOV_H
#define MODULESKOSOV_H

#include <string>
#include <cmath>

class ClassLab12_Kosov {
private:
    double edge;
    std::string color;

public:
    // Конструктор
    ClassLab12_Kosov(double a, std::string c) {
        edge = (a > 0) ? a : 1.0;
        color = c;
    }

    double getEdge() { return edge; }

    // Розрахунок об'єму
    double calculateVolume() {
        return std::pow(edge, 3);
    }
};

#endif
