/*Count even digits

Input a positive integer and count how many even digits it contains using a do-while loop.

Example:
Input: 507248
Output: 3*/






#include <iostream>
using namespace std;
int main()
{


int n,count;
count=0;
cout<<"enter number ";
cin>>n;



do{
int temp=n%10;
if (temp%2==0)
{
	count++;
}

n=n/10;
}while(n!=0);
cout<<"number of positive digits entered"<<count;
	return 0;
}