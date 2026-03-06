#include <iostream>
#include <string>




int main(){



   std::cout<<"hello"<<"\n";
   int a=10;
   int &b=a;

   std::cout<<"value of a before changing the value = "<<a<<"\n";
   std::cout<<"value of b before changing the value = "<<b<<"\n";



   std::cout<<"enter the changed or refrence value = ";
   std::cin>>b;
   




   std::cout<<"value of a after changing the value = "<<a<<"\n";
   std::cout<<"value of b after changing the value = "<<b<<"\n";


  //memory address 


   std::string food="pizza";
   std::cout<<&food<<"\n";





   system("pause");

    return 0;
}