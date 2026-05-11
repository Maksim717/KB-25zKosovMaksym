#ifndef MODULESKOSOV_H_INCLUDED
#define MODULESKOSOV_H_INCLUDED

#include <string>

struct Student {
    char lastName[50];
    char firstName[50];
    int birthYear;
    float averageScore;
};

void countWordsEndingWithYa(std::string inputPath, std::string outputPath);
void saveStudentToBinary(std::string binaryPath);
void findStudentInBinary(std::string binaryPath, int searchYear);

#endif
