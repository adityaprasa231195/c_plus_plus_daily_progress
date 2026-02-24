#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int sum=0;
    int names[5]={5,4,2,8,6};
    string namess[5];
    for(int i=0;i<5;i++){
        cin>>namess[i];
    }

    for(int a=0;a<5;a++){
        cout<<namess[a]<<endl;
    }
    
    cout<<"Names are: "<<endl;    
    for(int i=0;i<5;i++){
        sum +=names[i];
        
        
        
    }
    cout<<"Sum is: "<<sum<<endl;
    system("pause");
    return 0;
}