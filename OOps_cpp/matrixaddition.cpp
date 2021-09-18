#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

class Matrix{
    public:
        int rows;
        int coloumns;
        vector<vector<int>> arr;
    Matrix(int r, int c)
    {
        rows = r;
        coloumns = c;
        arr.resize(r, vector<int>(c));
    }
    void FillMatrix()
    {
        cout<<"Please enter the matrix whith "<<rows<<" Rows and "<<coloumns<<" coloumns."<<endl;
        for(int i=0; i<rows; i++)
        {
            for(int j=0; j<coloumns; j++)
            {
                cout<<"\nElements of "<<i<<" row and "<<j<<" coloumn: ";
                cin>>arr[i][j];
            }
        }
    }
    void DisplayMatrix()
    {
        for(int i=0; i<rows; i++)
        {
            for(int j=0; j<coloumns; j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};

Matrix operator+(Matrix A, Matrix B)
{
    Matrix temp(A.rows, A.coloumns);
    for(int i=0; i<A.rows; i++)
        for(int j=0; j<A.coloumns; j++)
        {
            temp.arr[i][j] = A.arr[i][j] + B.arr[i][j];
        }
    return temp;
}

int main()
{
    Matrix A(2,3);
    A.FillMatrix();
    Matrix B(2,3);
    B.FillMatrix();
    (A+B).DisplayMatrix();
    return 0;

}