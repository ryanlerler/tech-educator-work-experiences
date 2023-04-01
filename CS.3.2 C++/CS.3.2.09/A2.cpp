#include <iostream>
using namespace std;

void find2Max1D(int ar[], int size, int *max1, int *max2);
int main()
{
    int max1, max2;
    int ar[10], size, i;

    cout << "Enter array size: \n";
    cin >> size;
    cout << "Enter " << size << " data :\n";
    for (i=0; i<size; i++)
        cin>>ar[i];
    find2Max1D(ar,size,&max1,&max2);
    cout<<"Max1: "<<max1<<"\nMax2: "<<max2;
    return 0;
}

void find2Max1D(int ar[], int size, int *max1, int *max2)

{
    /*Write your code here*/
    int i=0;
    int tempMax1 = ar[0];
    int tempMax2 = ar[0];
    for (i=0; i<size; i++){
        if (tempMax1 < ar[i]){
            tempMax2 = tempMax1;
            tempMax1 = ar[i];
        }
    }
    *max1 = tempMax1;
    *max2 = tempMax2;
}