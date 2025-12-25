/*QUESTION


Input:
A single integer N (N ≥ 1)

Output:
Print the following symmetric diamond pattern.

Example (N = 4):

   *
  ***
 *****
*******
 *****
  ***
   *

*/




#include <iostream>
using namespace std;

int main()
{
    int N;
    cout <<"enter digit";
    cin >> N;

    for(int i = 1; i <= N; i++)
    {
        for(int s = 1; s <= N - i; s++)
            cout << " ";
        for(int j = 1; j <= 2*i - 1; j++)
            cout << "*";
        cout << endl;
    }

    for(int i = N - 1; i >= 1; i--)
    {
        for(int s = 1; s <= N - i; s++)
            cout << " ";
        for(int j = 1; j <= 2*i - 1; j++)
            cout << "*";
        cout << endl;
    }

    return 0;
}
