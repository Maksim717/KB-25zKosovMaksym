#include <iostream>
#include <conio.h>
#include <windows.h>
#include "..\ModulesKosov\ModulesKosov.h" // Підключення заголовка бібліотеки

using namespace std;

int main() {
    // Налаштування української мови
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char choice;
    while(true) {
        cout << "\n========================================";
        cout << "\n МЕНЮ (Варіант 1):";
        cout << "\n r - Задача 9.1 (Торнадо)";
        cout << "\n s - Задача 9.2 (Температура)";
        cout << "\n t - Задача 9.3 (Біти)";
        cout << "\n q - Вихід";
        cout << "\n========================================";
        cout << "\nВаш вибір: ";

        choice = _getch(); // Читаємо символ

        if (choice == 'q' || choice == 'Q') break;

        switch(choice) {
            case 'r': {
                int speed; cout << "\nШвидкість вітру (миль/год): "; cin >> speed;
                getTornadoCategory(speed);
                break;
            }
            case 's': {
                cout << "\nСередня температура за 6 замірів (у Фаренгейтах): ";
                // Тестовий виклик:
                cout << calculateAvgTemperature(10, 12, 14, 15, 10, 8) << " F" << endl;
                break;
            }
            case 't': {
                unsigned short n; cout << "\nВведіть число (0-65535): "; cin >> n;
                cout << "Результат обробки бітів: " << countBits(n) << endl;
                break;
            }
            default: cout << "\nНевірний вибір!";
        }
    }
    return 0;
}
