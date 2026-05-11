#include <iostream>
#include <fstream>
#include <windows.h>
#include <direct.h>
#include <cstdio>
#include "ModulesKosov.h"

using namespace std;

int main() {
    // Налаштування мови
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char buff[FILENAME_MAX];
    _getcwd(buff, FILENAME_MAX);
    string current_path(buff);

    cout << "--- Додаток Teacher запущено ---" << endl;

    // Перевірка структури папок (вимога БМТП)
    if (current_path.find("\\Lab12\\prj") == string::npos) {
        cout << "[ПОМИЛКА]: Проєкт не в папці \\Lab12\\prj!" << endl;
        cout << "Поточний шлях: " << current_path << endl;
    } else {
        cout << "[УСПІХ]: Структура папок вірна." << endl;

        // Створюємо об'єкт (наш ADT)
        ClassLab12_Kosov watermelon(5.0, "Зелений");

        cout << "Об'єкт: Кубічний кавун" << endl;
        cout << "Грань: " << watermelon.getEdge() << " см" << endl;
        cout << "Об'єм: " << watermelon.calculateVolume() << " куб.см" << endl;
    }

    cout << "--------------------------------" << endl;
    system("pause");
    return 0;
}
