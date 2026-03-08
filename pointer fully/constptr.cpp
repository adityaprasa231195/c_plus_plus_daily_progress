#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int y = 20;

    const int *ptr = &x;

    cout << *ptr << endl;

    ptr = &y;

    cout << *ptr << endl;


    system("pause");

    return 0;
}