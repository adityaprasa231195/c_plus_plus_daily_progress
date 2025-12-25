/*Medium – Question 1

Input:
A single integer N (N ≥ 1)

Output:
Print the following hollow square pattern of size N.

Example (N = 5):

*****
*   *
*   *
*   *
*****


*/



#include <iostream>
using namespace std;

int main()
{
    int N;
    cout <<"enter digit ";
    cin >> N;   

    
    for(int i = 1; i <= N; i++)
    {
        
        for(int j = 1; j <= N; j++)
        {
            
            if(i == 1 || i == N || j == 1 || j == N)
            {
                cout << "*";
            }
            else
            {
                
                cout << " ";
            }
        }
        
        cout << endl;
    }

    return 0;
}
