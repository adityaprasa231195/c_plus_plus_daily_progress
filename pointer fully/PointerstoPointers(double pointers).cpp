#include <iostream>
using namespace std;

int main() {

    int x = 50;

    int *ptr = &x;
    int **pptr = &ptr;

    cout << "Value of x: " << x << endl;
    cout << "Using pointer: " << *ptr << endl;
    cout << "Using double pointer: " << **pptr << endl;



    system("pause");

    return 0;
}