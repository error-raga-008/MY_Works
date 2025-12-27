#include <iostream>
using namespace std;

// Triangular Matrix: A square matrix in which all elements either
// above or below the main diagonal are zero.

// Upper Triangular Matrix
// A = | 2  3  4 |
//     | 0  5  6 |
//     | 0  0  7 |

// Lower Triangular Matrix
// B = | 1  0  0 |
//     | 4  5  0 |
//     | 6  7  8 |

//to check if the it is lower triangle matrix

bool islower(int mat[4][4]){
    for (int i = 0; i < 4; i++)
    {                                   //the upper triangle code:
        for (int j = i+1; j < 4; j++)  // for(int j=i;j<i-1;j++)
        {
            if (mat[i][j] != 0)
            {
                return false;
            }
            
        }
        
    }
    return true;
}

int main(int argc, char const *argv[])
{
    int mat[4][4] = {{1,0,0,0},{1,2,0,0},{4,5,6,0},{0,3,1,3}};

    if (islower(mat))
    {
        cout<<"true";
    }
    else
    {
        cout<<"flase";
    }
    
    

    return 0;
}

