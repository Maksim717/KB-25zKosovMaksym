#include <iostream>
#include "ModulesKosov.h"

using namespace std;

// Логіка для 9.1
void getTornadoCategory(int windSpeed) {
    if (windSpeed >= 64 && windSpeed <= 116) cout << "F0" << endl;
    else if (windSpeed >= 117 && windSpeed <= 180) cout << "F1" << endl;
    else if (windSpeed >= 181 && windSpeed <= 253) cout << "F2" << endl;
    else if (windSpeed >= 254 && windSpeed <= 332) cout << "F3" << endl;
    else if (windSpeed >= 333 && windSpeed <= 418) cout << "F4" << endl;
    else if (windSpeed >= 419 && windSpeed <= 512) cout << "F5" << endl;
    else cout << "Out of range" << endl;
}

// Логіка для 9.2
double calculateAvgTemperature(double t1, double t2, double t3, double t4, double t5, double t6) {
    double avgC = (t1 + t2 + t3 + t4 + t5 + t6) / 6.0;
    return 32.0 + (9.0 / 5.0) * avgC;
}

// Логіка для 9.3
int countBits(unsigned short N) {
    int count = 0;
    bool d0 = N & 1;
    for (int i = 0; i < 16; i++) {
        bool bit = (N >> i) & 1;
        count += (d0 == 0) ? (!bit) : (bit);
    }
    return count;
}
