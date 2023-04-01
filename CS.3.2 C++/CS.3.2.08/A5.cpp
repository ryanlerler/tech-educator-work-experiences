#include <iostream>
using namespace std;
int main()
{
    int A[3][3];
    int i,j,min,max;
    cout << "Enter the matrix data "<<3<<"x"<<3<<": \n";
    for (i=0; i<3; i++)
        for (j=0; j<3; j++)
            cin>>A[i][j];
}