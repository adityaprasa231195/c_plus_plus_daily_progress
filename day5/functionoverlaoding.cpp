#include <iostream>
#include <string>
using namespace std;
int globalVar = 100;


int adding(int a, int b);
float adding(float a, float b, float c);
void intro(string name);
int add();

int main() {

    int addition;

    addition = add();
    intro("aditya");

    cout << "hello world" << endl;
    cout << addition << endl;

    cout << adding(5, 10) << endl;  
    cout<<globalVar*2*add()<<endl;  
    cout << adding(5.4f, 6.5f, 6.6f) << endl;   
    system("pause");
    return 0;
}



void intro(string name) {
    cout << "my name is " << name << endl;
}

int add() {
    int a, b;
    cout << "Enter two numbers to add: ";
    cin >> a >> b;
    return a + b;
}

int adding(int a, int b) {
    return a + b;
}

float adding(float a, float b, float c) {
    return a + b + c;
}
