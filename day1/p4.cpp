//Swap two numbers (3 ways: temp, arithmetic, XOR)



#include <iostream>
using namespace std;

int main() {
    int a, b;
    
    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    cout << "\nBefore swap: a = " << a << ", b = " << b << endl;
    
    // Method 1: Using temp
    int temp = a;
    a = b;
    b = temp;
    cout << "Method 1 (temp): a = " << a << ", b = " << b << endl;
    
    // Reset values
    int x = b; 
    int y = a; 
    a = x;
    b = y;
    
    // Method 2: Using arithmetic
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "Method 2 (arithmetic): a = " << a << ", b = " << b << endl;
    
    // Reset values
    x = b;
    y = a;
    a = x;
    b = y;
    
    // Method 3: Using XOR
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << "Method 3 (XOR): a = " << a << ", b = " << b << endl;
    
    return 0;
}