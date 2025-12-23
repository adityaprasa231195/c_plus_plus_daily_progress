//Write a program that reads a grade character (A, B, C, D, F) and prints a message using switch case.




#include<iostream>
using namespace std;

int main() {

    char grade;
    cout << "Enter grade (A, B, C, D, F): ";
    cin >> grade;

    switch(grade) {

        case 'A':
        case 'a':
            cout << "Excellent performance";
            break;

        case 'B':
        case 'b':
            cout << "Very good performance";
            break;

        case 'C':
        case 'c':
            cout << "Good performance";
            break;

        case 'D':
        case 'd':
            cout << "Needs improvement";
            break;

        case 'F':
        case 'f':
            cout << "Fail - work harder next time";
            break;

        default:
            cout << "Invalid grade entered";
    }

    return 0;
}






