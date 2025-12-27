#include <iostream>
using namespace std;

// this is a diagonal matrix
// A = | 5  0  0 |
//     | 0  3  0 |
//     | 0  0  9 |

bool isdiagonal(int mat[4][4]){

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if ((i != j) && (mat[i][j] != 0))
            {
                return false;
            }
            
        }
        
    }
    
    return true;
}

int main(int argc, char const *argv[])
{
    int mat[4][4] = {{4,0,0,0},{0,7,0,0},{0,0,5,0},{0,0,0,1}};

    if (isdiagonal(mat))
    {
        cout<<"diagonal";
    }
    else
    {
        cout<<"not diagonal";
    }
    
    

    return 0;
}
