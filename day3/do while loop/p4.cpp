/*Reverse Number & Check Palindrome (No if)

Input: A positive integer n
Task:
Reverse the number and print:


Rules:

No if / else

Only while

No string conversion*/




#include <iostream>
using namespace std;
int main(){

int num,rev;
rev =0;
cout<<"Enter number ";
cin>>num;
int orignal=num;


while(num !=0){
int temp = num %10;
rev=rev *10+temp;
num=num/10;


}
cout<<rev<<endl;


if (orignal == rev)
{
	cout<<"palindrome";
}
else
	cout<<"not palindrome";





	return 0;
}