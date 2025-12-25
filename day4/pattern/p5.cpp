/*Question 4

Input:
A single integer N (N ≥ 1)

Output:
Print the following cross-X pattern.

Example (N = 7):

*     *
 *   *
  * *
   *
  * *
 *   *
*     *


Rules:

Print * on both diagonals.

All other positions are spaces.

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
            if(i == j || i + j == N + 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
