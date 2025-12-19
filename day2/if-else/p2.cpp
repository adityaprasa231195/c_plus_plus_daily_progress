//Print the largest of three numbers

#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	
int num1,num2,num3;
cout<<"enter three numbers ";
cin>>num1>>num2>>num3;

if(num1>num2 && num1>num2){
	cout<<"number 1 is bigger "<<endl;
}
else if (num2>num3)
{
	cout<<"number 2 is bigger "<<endl;
}
else{
	cout<<"number 3 is bigger "<<endl;
}




	return 0;
}