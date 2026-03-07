#include <iostream>



  //void pointer 
    void numptr(int *numptr);




int main()
{
    int num=5;
    std::cout<<"memory addres :"<<&num<<"\n";
    int *ptr=&num;
    std::cout<<*ptr<<"\n";
    std::cout<<ptr<<"\n";





    //assign ref
    int &ref=num;
    std::cout<<ref<<"\n";





    //after change value using refrence
    ref=20;
    std::cout<<num<<"\n";
    




    //change pointer value 
    std::cout<<"enter the value change through pointer =";
    std::cin>>*ptr;
    std::cout<<num<<"\n";


    //funtion call 1st
    int funv;
    numptr(&funv);

    



    system("pause");
    return 0;
}




//1st function ptr declare

//void pointer 
    void numptr(int *numptr){
        std::cout<<"enter the value of pointer =";
        std::cin>>*numptr;
        std::cout<<"the value is ="<<*numptr<<"\n";
    
    }