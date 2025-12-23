/*A positive integer n
Task:
Print the largest digit in the number using:


Example:

Input: 39541
Output: 9*/





#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    int largest = 0;

    while (n != 0) {
        int temp = n % 10;   

        if (temp > largest) {
            largest = temp;
        }

        n = n / 10;          
    }

    cout << largest;

    return 0;
}