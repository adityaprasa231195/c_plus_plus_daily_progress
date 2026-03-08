#include <iostream>


void athptr(int *ptr);

int main(){

   int num=6;
   int num2=8;
   athptr(&num);

   int &ref=num;
   std::cout<<&ref<<"\n";
   int *ptr1=&num;
   std::cout<<*ptr1- 3 <<"\n";
   std::cout<<ptr1+ 2<<"\n";
   int *ptr2=&num2;
   std::cout<<ptr1-ptr2<<"\n";



   int arr[3] = {10, 20, 30};
   int *ptrarray = arr;
   std::cout << *ptrarray<<"\n";
   ptrarray++;
   std::cout << *ptrarray<<"\n";





   int array[5] = {1,2,3,4,5};
    int *ptrarr = array;

    for(int i = 0; i < 5; i++) {
        std::cout << *(ptrarr + i) << " ";

    }
    std::cout << "\n";



    int *ptrsub1,*ptrsub2;
    ptrsub1=&array[0];
    ptrsub2=&array[4];
    std::cout<<ptrsub1-ptrsub2<<"\n";














    system("pause");

    return 0;
}



void athptr(int *ptr){
   //*ptr++;
   std::cout<<"next memory location is :"<<*ptr<<"\n";

}