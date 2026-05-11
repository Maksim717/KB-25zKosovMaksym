#include <iostream>
#include <windows.h>
#include "ModulesKosov.h"

using namespace std;

int main() {
    SetConsoleCP(1251); SetConsoleOutputCP(1251);

    task101("input.txt", "output.txt");
    task102("input.txt", "output.txt");
    task103("output.txt", 1.0, 2.0, 3.0, 10);

    cout << "Виконано! Перевір файл output.txt" << endl;
    return 0;
}
