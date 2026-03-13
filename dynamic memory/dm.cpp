#include <iostream>
using namespace std;

int main() {
   
    int stackVar = 100;        
    int stackArr[5] = {1,2,3,4,5};  
    
    int* heapVar = new int(100);        
    int* heapArr = new int[5];          

    cout << stackVar << endl;
    cout << *heapVar << endl;

    delete heapVar;    
    delete[] heapArr;
    system("pause");  
    return 0;
    
}