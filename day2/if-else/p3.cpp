//login validation program


#include <iostream>
using namespace std;

int main() {
    string userId = "admin", password = "1234";
    string inputId, inputPass;

    cout << "Enter User ID: ";
    cin >> inputId;
    cout << "Enter Password: ";
    cin >> inputPass;

    if (inputId == userId && inputPass == password) {
        cout << "Login Successful";
    } 
    else if (inputId != userId && inputPass != password) {
        cout << "Invalid User ID and Password";
    } 
    else if (inputId != userId) {
        cout << "Invalid User ID";
    } 
    else {
        cout << "Invalid Password";
    }

    return 0;
}