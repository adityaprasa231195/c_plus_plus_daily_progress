#include<iostream>
using namespace std;
int main(){

string response;
cout<<"for YES  = y and for NO = n"<<endl;
cout<<"enter the response y or no ";

cin>>response;
if(response[0] == 'y'){
	cout<<"lets play game";
}
else{
	cout<<"thanks for visiting thanks";
}
return 0;

}