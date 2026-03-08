#include "iostream"
#include "string"
using namespace std;

int main() {
    
    void* ptr;
    string name="aditya";
    ptr = &name; 
    cout << *(static_cast<string*>(ptr));
    
    
    
    system ("pause");
    return 0;
}