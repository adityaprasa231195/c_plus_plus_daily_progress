#include "iostream"
using namespace std;

int *ptr;

int main() {
    ptr = nullptr;   

    int x = 20;
    ptr = &x;        

    if(ptr == nullptr){
        cout << "pointer is null\n";
    }
    else{
        cout << "pointer is not null\n";
    }

    system("pause");
    return 0;
}