/*Input a  integer and find the sum of its digits using a do-while loop.

Example:
Input: 245
Output: 11*/




#include <iostream>
using namespace std;
int main(){
int n,sum;
sum=0;
cout<<"enter a number ";
cin>>n;
do{
int temp=n%10;
sum=sum+temp;
n=n/10;
}while(n!=0);
cout<<sum;



return 0;
}