/*Write a program that:

Takes a number from the user

Reverses the number using a while loop
Example:
Input: 1234
Output: 4321*/






#include <iostream>
using namespace std;

int main() {
    int num, rev = 0; //declare variable 

    cout << "Enter a number: ";
    cin >> num;//take input from user 

    while (num != 0) {
        int digit = num % 10; //this gives remainder until it goes 0      
        rev = rev *10 + digit;    //explain me from here
        num = num / 10;            
    }

    cout << "Reversed number: " << rev;

    return 0;
}