#include <iostream>
using namespace std;

int main() {
    int temps[7] = {28, 31, 27, 33, 29, 26, 30};  

    int sum = 0;
    for (int i = 0; i < 7; i++) {
        sum += temps[i];
    }
    double average = (double)sum / 7;
    cout << "Average temp: " << average << "°C" << endl;  



    system("pause");

    return 0;
}