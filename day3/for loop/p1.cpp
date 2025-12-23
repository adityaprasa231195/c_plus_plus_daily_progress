//Print all numbers from 1 to 300 that are divisible by 4 but not divisible by 6


#include<iostream>
using namespace std;
int main(){

for (int i = 1; i < 3000;i++)
{
if (i%4 ==0 && i%6 !=0)
{
	cout<<i<<endl;
}


}
	return 0;
}