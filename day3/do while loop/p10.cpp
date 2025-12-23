/*Check palindrome number

Input a integer and check whether it is a palindrome using a do-while loop.

Example:
Input: 1221
Output: Palindrome*/





#include <iostream>
using namespace std;
int main(){


int n,rev,palindrome;
rev=0;
cout<<"enter a number ";
cin>>n;
palindrome=n;
do
{
	int temp=n%10;
	rev=rev*10+temp;
	n=n/10;
	if (rev==palindrome)
	{
		cout<<"it is a palindrome"<<endl;
	}
} while (n!=0);
cout<<rev;
	return 0;
}

