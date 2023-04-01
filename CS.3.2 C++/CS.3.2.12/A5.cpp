#include <iostream>
using namespace std;

void displaymenu ()
{
    cout << "\nSelect your Combo:"<<endl;
    cout << "A: Chicken Burger-$5\n"<<"B: Fish Burger-$6\n"<<"C: Cheese Burger-$7\n";
    cout << "Select Combo A, B or C (E to End): ";
}

void displaytotal (int * order)
{
    int total;
    total=order[1]*5+order[1]*6+order[2]*7;
    cout<<"\nTotal Cost: $"<<total; 
}
int main()
{
    char key;
    int order[3]={0,0,0};
    cout << "Welcome to Burger Shop!\n";
    while (key != 'E')
    {
        displaymenu ();
        cin>>key;
        key=toupper(key);
        if(key=='A')
            order[0]++;
        if(key=='B')
            order[1]++;
        if(key=='C')
            order[2]++;
    }
    displaytotal (order);
    return 1;
}