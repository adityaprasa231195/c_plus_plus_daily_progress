/*Input a positive integer and reverse the number using a do-while loop
Example:
Input: 1234
Output: 4321*/





#include <iostream>
using namespace std;
int main(){

int num,rev;
rev=0;
cout<<"enter a number ";
cin>>num;

do
{
	int temp=num%10;
	rev=rev*10+temp;
	num=num/10;
} while (num!=0);
cout<<rev;

	return 0;
}



