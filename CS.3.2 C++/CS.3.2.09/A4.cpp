#include <iostream>
using namespace std;
#define SIZE 3
void findMinMax2D(int ar[SIZE][SIZE], int *min, int *max);

int main()
{
    int A[3][3];
    int i, j, min, max;
    cout << "Enter the matrix data "<<SIZE<<"x"<<SIZE<<": \n";
    for (i=0; i<3; i++)
        for (j=0; j<3; j++)
            cin>>A[i][j];
    findMinMax2D(A, &min, &max);
    cout << "max= "<<max<<"\nmin= "<<min;
    return 0;
}

void findMinMax2D(int ar[SIZE][SIZE], int *min, int *max)
{
    /* Write your code here */
    int i,j;
    *max = ar[0][0];
    *min = ar[0][0];
    for (i=0; i<SIZE; i++){
        for (j=0; j<SIZE; j++){
            if (ar[i][j]>*max)
                *max = ar[i][j];
            if (ar[i][j]<*min)
                *min = ar[i][j];
        }
    }
}