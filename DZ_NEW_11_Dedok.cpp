#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    const int numStudents = 5;
    const int maxLength = 50;
    char students[numStudents][maxLength];

    cout << "Input 5 surnames of students:\n";
    for (int i = 0; i < numStudents; ++i) {
        cout << "Student " << (i + 1) << ": ";
        cin >> students[i];
    }
    for (int i = 0; i < numStudents - 1; ++i) {
        for (int j = 0; j < numStudents - i - 1; ++j) {
            if (strcmp(students[j], students[j + 1]) > 0) {
                char temp[maxLength];
                strcpy(temp, students[j]);
                strcpy(students[j], students[j + 1]);
                strcpy(students[j + 1], temp);
            }
        }
    }
    cout << "\nSorted surnames:\n";
    for (int i = 0; i < numStudents; ++i) {
        cout << students[i] << "\n";
    }

    return 0;
}