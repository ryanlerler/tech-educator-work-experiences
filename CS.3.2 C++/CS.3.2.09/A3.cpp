#include <iostream>
using namespace std;

void swapMinMax1D(int ar[], int size);
int main()
{
    int ar[50], i, size;
    cout << "Enter array size: \n";
    cin >> size;
    cout << "Enter data: \n";
    for (i=0; i<size; i++){
        cin >> ar[i];
    }

    swapMinMax1D(ar,size);
    cout << "swapMinMax1D(): ";
    for (i=0; i<size; i++)
        cout << ar[i] << " ";
    return 0;
}

void swapMinMax1D(int ar[], int size)
{
    /* Write your code here */
    int max=ar[0];
    int min=ar[0];
    int maxindex=0;
    int minindex=0;
    for (int i=0; i<size; i++){
        if (ar[i]>max){
            max=ar[i];
            maxindex=i;
        }
        if (ar[i]<min){
            min=ar[i];
            minindex=i;
        }
    }
    ar[minindex]=max;
    ar[maxindex]=min;
}