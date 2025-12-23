/*Write a program that reads an age and prints:

Child” if age is less than 13

“Teenager” if age is 13 to 19

“Adult” otherwise*/




#include<iostream>
using namespace std;

int main() {

    int age;
    cout << "enter age ";
    cin >> age;

    if(age >= 0) {

        if(age < 13) {
            cout << "child";
        }
        else {

            if(age <= 19) {
                cout << "teenager";
            }
            else {
                cout << "adult";
            }

        }

    }
    else {
        cout << "invalid age";
    }

    return 0;
}