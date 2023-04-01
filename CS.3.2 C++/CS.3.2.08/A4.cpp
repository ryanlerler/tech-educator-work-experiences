#include <iostream>
using namespace std;

void findMinMax1D(int ar[], int size, int *min, int *max);
int main()
{
    int ar[40];
    int i, size;
    int min, max;
    cout << "Enter array size: \n";
    cin >> size;
    cout << "Enter " << size << " data separated by spaces \n";
    for (i=0; i<size; i++)
        cin>>ar[i];
    findMinMax1D(ar,size,&min, &max);
    cout<<"min = " << min << "\nmax = " << max;
    return 0;
}

void findMinMax1D(int ar[], int size, int *min, int*max)
{
/* Write your code here */
int tempMax = ar[0];    
int tempMin = ar[0];
for (int i=0; i<size; i++){
    if (ar[i])>tempMax){
        tempMax=ar[i];
    }
    if (ar[i])<tempMin){

        tempMin=ar[i];
    }
}
*max = tempMax;
*min = tempMin;
}