
#include <iostream>
using namespace std;
int main() {
    
    long long array[5]={1,23,31313,31313,3131};
    long long size=sizeof(array)/sizeof(array[0]);
    cout<<size<<"\n";
    
    int arr[2]={1,2};
    
    for(int i=0;i<2;i++){
        cout<<arr[i]<<",";
    }
    cout<<"\n";
    
    
    int ages[]={12,45,66,11,22};
    float average;
    int i;
    int sum=0;
    int sizeage=sizeof(ages)/sizeof(ages[0]);
    
    
    for(i=0;i<sizeage;i++){
       sum+=ages[i];
    }
      cout<<sum/sizeage<<"\n";
    
    
    string letters[3][2][2] = {
  {
    { "A", "B" },
    { "C", "D" }
  },
  {
    { "E", "F" },
    { "G", "H" }
  },
  {
    { "R", "M" },
    { "L", "K" }
  }
};
    
    for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 2; j++) {
        for(int k = 0; k < 2; k++) {
            cout << letters[i][j][k] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
    
    
    system("pause");
    return 0;
}