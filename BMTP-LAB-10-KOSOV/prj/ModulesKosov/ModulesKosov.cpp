#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <bitset>
#include "ModulesKosov.h"

using namespace std;

void task101(string inPath, string outPath) {
    ifstream fin(inPath);
    if (!fin.is_open()) {
        ofstream tmp(inPath);
        tmp << "Програма модуль студент програміст 123";
        tmp.close();
        fin.open(inPath);
    }
    ofstream fout(outPath);
    string content((istreambuf_iterator<char>(fin)), (istreambuf_iterator<char>()));

    fout << "Розробник: Максим Косов" << endl;
    fout << "Установа: КНТУ, Кропивницький, 2026" << endl;
    fout << "Символів у файлі: " << content.length() << endl;

    string check[] = {"програма", "модуль", "студент", "програміст"};
    for(string s : check) {
        fout << "Слово \"" << s << "\": " << (content.find(s) != string::npos ? "Є" : "Немає") << endl;
    }
    fout.close(); fin.close();
}

void task102(string inPath, string outPath) {
    ifstream fin(inPath);
    int digits = 0; char ch;
    while(fin.get(ch)) if(isdigit(ch)) digits++;
    fin.close();

    ofstream fout(outPath, ios::app);
    time_t t = time(0);
    fout << "\nКількість цифр: " << digits << endl;
    fout << "Дата: " << ctime(&t);
    fout.close();
}

void task103(string outPath, double x, double y, double z, int b) {
    ofstream fout(outPath, ios::app);
    double s = (x + y + z) / 3.0; // Тут твоя формула
    fout << "\nРезультат S: " << s << endl;
    fout << "Число " << b << " в двоічній: " << bitset<16>(b) << endl;
    fout.close();
}
