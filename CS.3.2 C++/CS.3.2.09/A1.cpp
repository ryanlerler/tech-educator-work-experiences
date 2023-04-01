#include <iostream>
using namespace std;

void printReverse(int ar[], int size);
int main()
{
    int ar[80];
    int size, i;
    cout<<"Enter array size: \n";
    cin>>size;
    cout<<"Enter data: \n";
    for (i=0; i <= size-1; i++){
        cin>>ar[i];
    }
    printReverse(ar,size);
}

void printReverse(int ar[], int size)
{
    /*Write your program code here */
    int i;
    cout << "printReverse(): ";
    if (size > 0) {
        for (i=size-1; i>=0; i--)
            cout<<ar[i];
    }
    printf("\n");
}