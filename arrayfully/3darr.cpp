#include <iostream>
using namespace std;

int main() {
    
    int seats[2][3][4] = {
        {{101, 102, 103, 0},   
         {104, 105, 0,   0},   
         {106, 107, 108, 109}},
        {{201, 202, 0,   0},   
         {203, 0,   0,   0},   
         {204, 205, 206, 207}} 
    };

    
    cout << "Seat: " << seats[1][2][3] << endl;  

    
    int count = 0;
    for (int c = 0; c < 2; c++)
        for (int r = 0; r < 3; r++)
            for (int s = 0; s < 4; s++)
                if (seats[c][r][s] != 0) count++;

    cout << "Occupied seats: " << count << endl;  


    system("pause");

    return 0;
}