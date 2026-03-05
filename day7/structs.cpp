#include<iostream>
using namespace std;



int main(){


struct cars{             
   string carname;
   float  price;
   string modelname;
} ;




struct {             
   string name;
   float  age;
   string birthday;
} info1,info2;

  

cout<<"enter your name : ";
cin>>info1.name;
cout<<"\n"<<"enter your age in numbers : ";
cin>>info1.age;
cout<<"\n"<<"enter your D.O.B (date/month/year) : ";
cin>>info1.birthday;


cout<<"your name is : "<<info1.name<<"\n"<<"your age is : "<<info1.age<<"\n"<<"DOB : "<<info1.birthday<<"\n";

 
cars carinfo1;

cout<<"enter your name : ";
cin>>carinfo1.carname;
cout<<"\n"<<"enter price of car : ";
cin>>carinfo1.price;
cout<<"\n"<<"enter car model : ";
cin>>carinfo1.modelname;



cout<<"your car is  : "<<carinfo1.carname<<"\n"<<"your car price is  : "<<carinfo1.price<<"\n"<<"CAR MODEL IS : "<<carinfo1.modelname<<"\n";





 system("pause");

   return 0;
}