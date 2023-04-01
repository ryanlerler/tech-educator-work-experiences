#include <iostream>
using namespace std;
#define SIZE 10
void diagonals2D(int ar[][SIZE], int rowSize, int colSize, int *sum);

int main()
{
    int ar[SIZE][SIZE], rowSize, colSize;
    int i, j;
    int sum = 0;
    cout << "Enter row size of the 2D array: \n";
    cin>>rowSize;

    cout << "Enter column size of the 2D array: \n";
    cin>>colSize;

    cout << "Enter the matrix" <<rowSize <<"x" <<colSize <<" data: \n";
    for (i=0; i<rowSize; i++)
        for (j=0; j<colSize; j++)
            cin>>ar[i][j];

    diagonals2D(ar, rowSize, colSize, &sum);
    cout << "sum = " << sum;
}

void diagonals2D(int ar[][SIZE], int rowSize, int colSize, int *sum)
{
    /* Write your code here */
    int i, j;
    for (i=0; i<rowSize; i++){
        for (j=0; j<colSize; j++){
            if (i==j){
                *sum += ar[i][j];
            }
        }
    }
}