#include <iostream>
using namespace std;
//compact matrix is matrix in which we remove all the zeros from a matrix and
//make anthor matrix that contain all the non-zero element and their index

int main(int argc, char const *argv[])
{
    
    int matrix[4][5]={{0,0,3,0,4},{0,0,5,7,0},{0,0,0,0,0},{0,2,6,0,3}};

    int size=0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (matrix[i][j] != 0)
            {
                size++;
            }
            
        }
        
    }

    //compact matrix to store the non-zero element

    int cmatrix[3][size]; //its size will always be [3][no. of non zero element]
    
    int k = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (matrix[i][j] != 0)
            {
                cmatrix[0][k] = i;
                cmatrix[1][k] = j;
                cmatrix[2][k] = k;
                k++;
            }
            
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cout<<cmatrix[i][j]<<" ";
        }
            cout<<endl;
    }
    
    

    return 0;
}
