#include<iostream>

enum inte{
        a,b
    };



enum days{
        monday,
        tuesday,
        wednesday,
        thursday,
        friday,
        saturday,
        sunday

};


int main(){


   
   
   days today=wednesday;
   






   inte d =a; 
   std::cout<<d;
   




   switch(today){


    case sunday:
    std::cout<<"weekend"<<"\n";
    break;



    case saturday:
    std::cout<<"weekend2"<<"\n";
    break;

    case monday:
    std::cout<<"first day at of week"<<"\n";
    break;

    case tuesday:
    std::cout<<"secound day of week"<<"\n";
    break;

    
   case wednesday:
    std::cout<<"third day of week"<<"\n";
    break;


    case thursday:
    std::cout<<"4th day of week"<<"\n";
    break;


    case friday:
    std::cout<<"5th day of week"<<"\n";
    break;


    default:
    std::cout<<"day entered is wrong";
   }
    


   system("pause");


    return 0;
}