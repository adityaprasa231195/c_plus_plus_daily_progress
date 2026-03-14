#include <iostream>
using namespace std;

int main() {

  int *ptr=new int;
  *ptr=44;
  cout<<*ptr<<"\n";
  delete ptr;
  ptr=nullptr;
  system("pause");
 

int size = 5;
int* arr = new int[size];  

for (int i = 0; i < size; i++) {
    arr[i] = i * 10;       
}

delete[] arr;   
arr = nullptr;
 return 0;

}