#include <iostream>
using namespace std;

int absoluteSum1D(int size, int ar[]);

int main()
{
    int ar[5];
    int i, size=5;
    cout<<"Enter 5 integer : \n";
    for(i=0;i<size;i++)
        cin>>ar[i];
    cout<<"absoluteSum1D()\n"<<absoluteSum1D(size, ar);
    return 0;
}

int absoluteSum1D(int size, int ar[])
{
    int sum=0;
    for (int i=0; i<size; i++)
    {
        sum+=ar[i];
    }
    return sum;
}