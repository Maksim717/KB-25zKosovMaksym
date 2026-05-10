#include <cmath>
#include "ModulesKosov.h"

double s_calculation(double x, double y, double z) {
    // Формула: sqrt(1/x + sin(x) + 2) + (y - z)
    return std::sqrt((1.0 / x) + std::sin(x) + 2.0) + (y - z);
}
