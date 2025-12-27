#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int zero = 0,x = 0;

    int arr[3][3]={{1,0,0},
                    {2,1,0},
                    {6,0,0}};

    //to check if the array is spares or not

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == 0)
            {
                zero++;
            }
            else
            {
                x++;
            }
            
            
        }
        
    }

    if (zero>x)
    {
        cout<<"Its a sparse matrix";
    }
    else
    {
        cout<<"Its not a sparse matrix";
    }
    
    
    

    return 0;
}

