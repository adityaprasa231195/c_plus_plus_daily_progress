/*Product of odd digits

Input a  integer and find the product of all odd digits using a do-while loop.

Example:
Input: 23451
Output: 15
(odd digits: 3 × 5 × 1)*/








#include <iostream>
using namespace std;
int main(){

int n,multiplication;
multiplication=1;
cout<<"enter a number ";
cin>>n;


do
{
int temp=n%10;
if (temp%2!=0)
{
	multiplication=multiplication*temp;
}
n=n/10;
}while(n!=0);
cout<<"product of all odd "<<multiplication;

	return 0;
}