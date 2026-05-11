#include <iostream>
#include "ModulesKosov.h"
#include "tests.cpp" // Підключаємо тести

int main() {
    int mode;
    std::cout << "Виберіть режим: 1 - Робота, 2 - Тести: ";
    std::cin >> mode;

    if (mode == 2) {
        runTests();
    } else {
        // Тут твоє меню, яке ми робили раніше (10.1, 10.2, 10.3)
    }
    return 0;
}
