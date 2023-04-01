#include <iostream>
using namespace std;

void displaycreateaccount ()
{
    string name;
    cout<<"Welcome to ABC Bank!\nPlease enter your name: ";
    cin>>name;
}

void checkbalance(float &current)
{
    cout<<"Total Saving: $"<<current<<endl;
}

void displayoptions()
{
    cout<<"\n(C) Check Current Saving\n(W) Withdraw\n(D) Deposit\n(E) Exit\n";
    cout<<"User input: ";
}


void withdraw(float &current)
{
    int amount;
    cout<<"Amount to withdraw: ";
    cin>>amount;
    if (current-amount<0)
        cout<<"You do not have enough money\n";
    else
        current=current-amount;
}

void deposit(float &current)
{
    int amount;
    cout<<"Amount to deposit: ";
    cin>>amount;
    current=current+amount;
}