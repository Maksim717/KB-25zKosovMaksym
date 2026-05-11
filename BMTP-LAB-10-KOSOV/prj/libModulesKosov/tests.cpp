#include <iostream>
#include <fstream>
#include <assert.h>
#include "ModulesKosov.h"

void runTests() {
    std::cout << "--- Запуск Unit тестів ---" << std::endl;

    // Тест для 10.1
    std::ofstream testIn("../../Data/test_in.txt");
    testIn << "навчання знання сім'я"; // 2 слова на 'я'
    testIn.close();

    countWordsEndingWithYa("../../Data/test_in.txt", "../../Data/test_out.txt");

    std::ifstream testOut("../../Data/test_out.txt");
    std::string line;
    std::getline(testOut, line); // Читаємо перший рядок

    std::cout << "Тест 10.1: ";
    if (line.find("2") != std::string::npos) std::cout << "ПРОЙДЕНО" << std::endl;
    else std::cout << "НЕ ПРОЙДЕНО" << std::endl;
}
