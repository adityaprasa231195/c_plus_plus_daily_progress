#include<iostream>
using namespace std;

union datas
{
   int i;
   float num;
};




int main(){



     datas numb;


      numb.i=24;
      cout<<numb.i<<"\n";

      cin>>numb.num;
      cout<<numb.num;

    system("pause");
    return 0;
}


