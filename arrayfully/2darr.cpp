#include <iostream>
using namespace std;

int main() {
    int marks[3][4] = {
        {85, 90, 78, 92},
        {70, 88, 95, 65},
        {60, 75, 80, 85}
    };

    //  table
    cout << "Student\tS1\tS2\tS3\tS4" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Student " << i << "\t";
        for (int j = 0; j < 4; j++) {
            cout << marks[i][j] << "\t";
        }
        cout << endl;
    }

    // average for student 1
    int sum = 0;
    for (int j = 0; j < 4; j++) sum += marks[1][j];
    cout << "Student 1 avg: " << sum / 4.0 << endl;  



    system("pause");

    return 0;
}