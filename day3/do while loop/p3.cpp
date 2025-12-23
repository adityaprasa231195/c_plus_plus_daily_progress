/*Question 1: Count Digits Without Conditionals

Input: A positive integer n
Task:
Count how many digits are in n using only a while loop.

Rules:

No if

No ternary operator

No function

Only while

Example:

Input: 50489
Output: 5*/





#include <iostream>
using namespace std;
int main(){

int n;
cout<<"enter positive integer n ";
cin>>n;
int count=0;


while(n > 0){

count++;
n=n/10;



}

cout<<count;




return 0;

}