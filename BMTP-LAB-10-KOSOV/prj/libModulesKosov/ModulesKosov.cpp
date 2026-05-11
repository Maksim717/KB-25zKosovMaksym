#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include "ModulesKosov.h"

using namespace std;

void countWordsEndingWithYa(string inputPath, string outputPath) {
    cout << "\n(c) Maxim Kosov. Task 10.1" << endl;
    ifstream fin(inputPath);
    ofstream fout(outputPath);

    if (!fin.is_open()) {
        Beep(700, 500);
        cout << "Error: File not found!" << endl;
        return;
    }

    string word;
    int count = 0;
    while (fin >> word) {
        if (!word.empty() && ispunct(word.back())) word.pop_back();
        if (!word.empty()) {
            unsigned char last = (unsigned char)word.back();
            // Checking for 'ya' (0xFF or 0xDF in Win-1251)
            if (last == 0xFF || last == 0xDF) count++;
        }
    }
    fout << "Words count: " << count << endl;
    fout << "Author: Maxim Kosov" << endl;
    cout << "Done! Words found: " << count << endl;
    fin.close(); fout.close();
}

void saveStudentToBinary(string binaryPath) {
    cout << "\n(c) Maxim Kosov. Task 10.2" << endl;
    ofstream fout(binaryPath, ios::binary | ios::app);
    if (!fout.is_open()) return;

    Student s;
    cout << "Enter Last Name: "; cin >> s.lastName;
    cout << "Enter First Name: "; cin >> s.firstName;
    cout << "Enter Birth Year: "; cin >> s.birthYear;
    cout << "Enter Avg Score: "; cin >> s.averageScore;

    fout.write((char*)&s, sizeof(Student));
    fout.close();
    cout << "Saved successfully!" << endl;
    Beep(800, 200);
}

void findStudentInBinary(string binaryPath, int searchYear) {
    cout << "\n(c) Maxim Kosov. Task 10.3" << endl;
    ifstream fin(binaryPath, ios::binary);
    if (!fin.is_open()) return;

    Student s;
    bool found = false;
    while (fin.read((char*)&s, sizeof(Student))) {
        if (s.birthYear == searchYear) {
            cout << "Found: " << s.lastName << " " << s.firstName
                 << " | Score: " << s.averageScore << endl;
            found = true;
        }
    }
    if (!found) cout << "No students found for: " << searchYear << endl;
    fin.close();
}
