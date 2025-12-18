//Area and perimeter of rectangle


#include<iostream>
using namespace std;
int main(){

float length,width,area,perimeter;

cout<<"enter length ";
cin>>length;
cout<<"enter width  ";
cin>>width;

perimeter = 2 *(length+width);
cout<<"perimeter of rectangle is "<<perimeter<<"m"<<endl; 

area = length*width;
cout<<"area of rectangle is "<<area<<"m^2"<<endl;



	return 0;
}