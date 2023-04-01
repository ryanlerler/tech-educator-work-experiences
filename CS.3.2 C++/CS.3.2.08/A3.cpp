#include <iostream>
using namespace std;
int findAr1D(int size, int ar[], int target);

int main()
{
    int ar[20];
    int size, i, target;
    int result = 0;

    cout << "Enter array size: \n";
    cin >> size;
    cout << "Enter " << size << " data: \n";
    for (i=0; i<=size-1; i++)
        cin>>ar[i];
    cout << "Enter the target number: \n";
    cin >> target;
    result = findAr1D(size, ar, target);
    if (result == -1)
        cout << "findAr1D(): Not found \n";
    else
        cout << "findAr1D(): " << result;

    return 0;
}

int findAr1D(int size, int ar[], int target)

{
/* Write your program code here */
    int j;
    for (j = 0; j < size; j++){
        if (ar[j] == target)
            return j;
    }
    return -1;
}