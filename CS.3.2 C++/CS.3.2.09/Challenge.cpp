#include <iostream>
using namespace std;
void findSum(float ar[4][4]);

int main()
{
    float ar[4][4]; int i, j;
    cout << "Enter data: \n";
    for (i=0; i<4; i++){
        for (j=0; j<4; j++)
            cin>>ar[i][j];
    }
    findSum(ar);
    cout<<"findAverage2D():\n";
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++)
            cout << ar [i][j] << " ";
            cout << "\n";
    }
    return 0;
}

void findSum(float ar[4][4])

{
    /* Write your code here */
    int i, j;
    for (i=0; i<4; i++){
        ar[i][3] = 0;
        for (j=0; j<3; j++) {
            ar[i][3] += ar[i][j];
        }
    }
}