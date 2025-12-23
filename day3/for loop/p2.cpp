//Given a number n, determine whether it is a prime number using only for loops.


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    if (n <= 1) {
        cout << "Not a prime number";
        return 0;
    }

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            cout << "Not a prime number";
            return 0;
        }
    }

    cout << "Prime number";
    return 0;
}